extern unsigned int lbl_8315D964[9];

unsigned int fn_82A49B30(unsigned int index)
{
    unsigned int result = 0;

    if (index >= 1 && index <= 8) {
        result = lbl_8315D964[index - 1];
    }
    return result;
}
