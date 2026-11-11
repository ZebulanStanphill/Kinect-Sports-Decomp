typedef struct Owner_823DE598 { char pad[0x4b8]; void *value; } Owner_823DE598;
typedef struct Context_823DE598 { char pad[8]; Owner_823DE598 *owner; } Context_823DE598;
extern void fn_823CC298(void *, int);
void fn_823DE598(Context_823DE598 *self) { fn_823CC298(self->owner->value, 27); }
