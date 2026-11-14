#include <new>
struct Base_827AF478 {
    unsigned int a;     /* 0x00 */
    int b;              /* 0x04 */
    int c;              /* 0x08 */
    int d;              /* 0x0c */
    int e;              /* 0x10 */
    int f;              /* 0x14 */
    Base_827AF478() { b = 0; d = 0; a = 0xffffffff; c = -1; e = 0; f = 0; }
};
struct Sub_827AF478 { int g; int h; int i; Sub_827AF478() { i = 0; h = 0; g = 0; } };
struct Entry_827AF478 : Base_827AF478 {
    Sub_827AF478 s;
    unsigned char flag;
    Entry_827AF478() { flag = 0; }
};

extern "C" void fn_827AF478(Entry_827AF478 *entries, unsigned int count)
{
    for (; count != 0; count--, entries++)
        new (entries) Entry_827AF478();
}
