void *memset(void *, int, unsigned int);
typedef struct Event_8288A3B8 { unsigned char type; unsigned char pad[6]; unsigned char value; unsigned char rest[5]; } Event_8288A3B8;
typedef struct Obj_8288A3B8 { char pad[0x30]; int x30; char pad34[0x100]; int x134; } Obj_8288A3B8;
extern void fn_828BFDF8(int);
extern void fn_828800C8(Event_8288A3B8 *);
extern void fn_828801A0(void);
extern void fn_828EFF10(void);
extern void fn_82880108(int, int);
extern void fn_82880120(void *);
extern void fn_82880130(void *);
extern void fn_82880140(void *);
extern void fn_82880150(void *);
extern void fn_82880160(void *);
extern void fn_82880170(void *);
extern void fn_82880180(void *);
extern void fn_82880190(void *);
extern void fn_828A5468(void);
extern void fn_828A5518(void);
extern void fn_828A1168(void);
extern void fn_828A11D8(void);
extern void fn_828A2010(void);
extern void fn_828BEE88(void);
extern void fn_828A1248(void);
extern void fn_828A1298(void);
void fn_8288A3B8(Obj_8288A3B8 *o, unsigned char flag)
{
    fn_828BFDF8(o->x134);
    if (flag) {
        Event_8288A3B8 e;
        memset(&e, 0, sizeof(e));
        e.type = 0xd;
        e.value = (unsigned char)o->x30;
        fn_828800C8(&e);
    }
    fn_828801A0();
    if (flag)
        fn_828EFF10();
    fn_82880108(o->x30, 4);
    fn_82880120(fn_828A5468);
    fn_82880130(fn_828A5518);
    fn_82880140(fn_828A1168);
    fn_82880150(fn_828A11D8);
    fn_82880160(fn_828A2010);
    fn_82880170(fn_828BEE88);
    fn_82880180(fn_828A1248);
    fn_82880190(fn_828A1298);
}
