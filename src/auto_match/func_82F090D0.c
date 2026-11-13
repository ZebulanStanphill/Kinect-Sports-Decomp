typedef void (*Fn)(void);
extern void fn_82F07B68(void);
extern void fn_82F08810(void);
extern void fn_82F08B60(void);
extern void fn_82F08E88(void);
typedef struct { char pad[0x2010]; Fn f2010, f2014, f2018, f201c, f2020, f2024, f2028; } Obj;
void fn_82F090D0(Obj *o)
{
 o->f2020 = fn_82F08B60;
 o->f201c = fn_82F08810;
 o->f2014 = o->f201c;
 o->f2018 = o->f2020;
 o->f2010 = o->f201c;
 o->f2028 = fn_82F08E88;
 o->f2024 = fn_82F07B68;
}
