#include <stdio.h>
#include <math.h>

enum ElectricLamps
{
    Incandescent, // лампа накаливания
    Fluorescent, // люминесцентная лампа (дневного света)
    Halogen, // галогенная лампа
    LED, // светодиодная лампа
    PowerSave, // энергосберегающая лампа
};

struct coordinates
{
    int x;
    int y;
};

struct rectangle // прямоугольник
{
    struct coordinates A;
    struct coordinates B;
    struct coordinates C;
};

struct field
{
    unsigned playback : 1; // Воспроизведение - 1 бит
    unsigned pause : 1; // Пауза - второй бит
    unsigned record : 1; // Запись - 3 бит
};

union U
{
    int num;
    struct field elements;
};

int main()
{
    // 1 задание
    printf("1) %d\n", Halogen + 1); // галоген лампа - третья в списке

    // 2 задание
    struct rectangle Rectangle;
    Rectangle.A.x = -1;
    Rectangle.A.y = -1;

    Rectangle.B.x = -1;
    Rectangle.B.y = 1;

    Rectangle.C.x = 3;
    Rectangle.C.y = 1;

    double AB = sqrt(pow(Rectangle.A.x - Rectangle.B.x, 2) + pow(Rectangle.A.y - Rectangle.B.y, 2));
    double BC = sqrt(pow(Rectangle.B.x - Rectangle.C.x, 2) + pow(Rectangle.B.y - Rectangle.C.y, 2));

    printf("2) Square of rectangle: %.2f\n", 2 * (AB + BC));

    // 3 задание
    union U MP3;
    printf("3) HEX: ");
    scanf("%x", &MP3.num);

    printf("MP3 проигрыватель-диктофон (данные)\n");
    MP3.elements.playback ? printf("   Воспроизведение: вкл\n") : printf("   Воспроизведение: выкл\n");
    MP3.elements.pause ? printf("   Пауза: вкл\n") : printf("   Пауза: выкл\n");
    MP3.elements.record ? printf("   Запись: вкл\n") : printf("   Запись: выкл\n");

    return 0;
}
