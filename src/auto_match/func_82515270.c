/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg (as in
   func_82603640.cpp). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
extern int atexit(void (*f)(void));
extern void fn_8313F178(void);
extern char lbl_821B9BC8[];

typedef struct {
    void *vtable;
    int pad[3];
    __vector4 value;
} Obj_82515270;

extern Obj_82515270 lbl_83297AE0;
extern unsigned int lbl_83297B00;

Obj_82515270 *fn_82515270(void)
{
    if ((lbl_83297B00 & 1) == 0) {
        lbl_83297B00 |= 1;
        lbl_83297AE0.vtable = lbl_821B9BC8;
        atexit(fn_8313F178);
    }
    lbl_83297AE0.value = __VMXGetReg(77);
    return &lbl_83297AE0;
}
