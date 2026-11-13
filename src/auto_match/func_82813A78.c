typedef struct Timer_82813A78 Timer_82813A78;

typedef struct Obj_82813A78 {
    char pad0[0x10];
    float endTime;
} Obj_82813A78;

extern Timer_82813A78 *lbl_8320A4D4;
extern Timer_82813A78 *fn_82813498(void);
extern float fn_8281F720(Timer_82813A78 *timer, int which);

static __forceinline Timer_82813A78 *GetTimer(void)
{
    if (lbl_8320A4D4 != 0) {
        return lbl_8320A4D4;
    }
    return fn_82813498();
}

unsigned char fn_82813A78(Obj_82813A78 *self)
{
    return fn_8281F720(GetTimer(), 1) < self->endTime;
}
