typedef struct { __int64 v[5]; } Arg40_8305B560;
extern void fn_8305AC60(void *dst, Arg40_8305B560 a);
void fn_8305B560(char *self, void *dst)
{
    fn_8305AC60(dst, *(Arg40_8305B560 *)(self + 0x50));
}
