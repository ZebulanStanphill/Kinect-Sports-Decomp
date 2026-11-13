typedef struct Obj_82C04E28 {
    char pad[0x30];
    unsigned int end;     /* 0x30 */
    unsigned int cur;     /* 0x34 */
} Obj_82C04E28;

int fn_82C04E28(Obj_82C04E28 *self)
{
    return self->cur >= self->end;
}
