// Constructor: base init (fn_82930138), sub-object at +0x18, then the default state of the
// fields and a zeroed 0x1fc-byte table at +0x78; finishes with the one-time global init
// fn_82920448.
#include <string.h>

typedef struct Obj_828F5BD0 {
    char pad0[0x18];
    char sub18[0x24];       /* 0x18 */
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    char table[0x1fc];      /* 0x78 */
    int f274;
    int f278;
    int pad27c;
    __int64 f280;
    __int64 f288;
    __int64 f290;
    __int64 f298;
    int f2a0;
    int pad2a4;
    int f2a8;
    int pad2ac;
    int f2b0;
} Obj_828F5BD0;

extern void fn_82930138(Obj_828F5BD0 *self, int a, int b);
extern void fn_828F9C80(void *sub);
extern void fn_828F4808(Obj_828F5BD0 *self);
extern void fn_82920448(void);

Obj_828F5BD0 *fn_828F5BD0(Obj_828F5BD0 *self)
{
    fn_82930138(self, 0x100000, 0x10000);
    fn_828F9C80(self->sub18);
    self->f2a8 = 0;
    fn_828F4808(self);
    self->f3c = 0;
    self->f40 = 0;
    self->f48 = 0;
    self->f4c = 1;
    self->f50 = 0;
    self->f54 = 0;
    self->f58 = 1;
    self->f5c = 1;
    self->f60 = 1;
    self->f64 = 0;
    self->f68 = 0;
    self->f6c = 0;
    self->f70 = 0;
    self->f74 = 0;
    self->f274 = 0;
    self->f278 = 0;
    self->f44 = 0;
    memset(self->table, 0, sizeof(self->table));
    self->f280 = 0;
    self->f288 = 0;
    self->f290 = 0;
    self->f298 = 0;
    self->f2a0 = 1;
    self->f2b0 = 0;
    fn_82920448();
    return self;
}
