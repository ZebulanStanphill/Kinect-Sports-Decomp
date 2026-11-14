typedef struct Settings_824B5AE8 {
    int pad[2];
    int previous;   /* 0x8 */
} Settings_824B5AE8;

extern Settings_824B5AE8 lbl_831C4610;

int fn_824B5AE8(void)
{
    return lbl_831C4610.previous / 2;
}
