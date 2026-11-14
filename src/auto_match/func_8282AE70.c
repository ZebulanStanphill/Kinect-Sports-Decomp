typedef struct Obj_8282AE70 { char pad[0x344]; char list[4]; } Obj_8282AE70;

extern void fn_8282AD28(void);
extern void fn_8282ADC8(void);
extern void fn_8282D640(Obj_8282AE70 *self, void *list, void (*callback)(void), int arg);

void fn_8282AE70(Obj_8282AE70 *self, unsigned char enable)
{
    if (enable)
        fn_8282D640(self, self->list, fn_8282ADC8, 0);
    else
        fn_8282D640(self, self->list, fn_8282AD28, 0);
}
