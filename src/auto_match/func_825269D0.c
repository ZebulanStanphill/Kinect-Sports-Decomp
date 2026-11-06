typedef void (*Handler_825269D0)(int arg);

extern Handler_825269D0 lbl_8327F680[];

int fn_825269D0(int index, int arg)
{
    Handler_825269D0 fn = lbl_8327F680[index];
    if (fn != 0) {
        fn(arg);
        return 1;
    }
    return 0;
}
