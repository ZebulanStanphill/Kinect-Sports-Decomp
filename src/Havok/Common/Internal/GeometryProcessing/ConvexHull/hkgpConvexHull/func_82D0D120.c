typedef struct Inner { char pad[4]; float value; char rest[0x1ad]; unsigned char flag; } Inner;
typedef struct Outer { int pad[2]; Inner *inner; } Outer;
extern void fn_82D14790(Inner *);
void fn_82D0D120(Outer *p, float x, unsigned char flag) {
 if (flag) p->inner->flag = 0;
 p->inner->value = x;
 fn_82D14790(p->inner);
}
