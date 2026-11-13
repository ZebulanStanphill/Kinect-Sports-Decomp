extern void fn_828B3D00(void *queue, void *event);

void fn_828B42F0(char *self, void *event)
{
    if (*(unsigned char *)(self + 0x38) != 1) {
        return;
    }
    fn_828B3D00(self + 8, event);
}
