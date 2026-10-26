void fn_82D61EF0(void *self, unsigned short *ids, unsigned short id)
{
    int i;
    for (i = 0; i < 3; i++) {
        if (ids[i] == 0xffff) {
            ids[i] = id;
            return;
        }
    }
}
