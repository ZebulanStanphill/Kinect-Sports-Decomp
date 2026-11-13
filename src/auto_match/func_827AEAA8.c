typedef struct Obj_827AEAA8 {
    char pad[0x4];
    unsigned int cur;     /* 0x04 */
    unsigned int end;     /* 0x08 */
} Obj_827AEAA8;

int fn_827AEAA8(Obj_827AEAA8 *self)
{
    return self->cur >= self->end;
}
