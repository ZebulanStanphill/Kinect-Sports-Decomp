extern unsigned int XamGetSystemVersion(void);
extern int XamUserGetSigninState(unsigned int userIndex);
extern unsigned int XamUserCheckPrivilege(unsigned int userIndex, unsigned int privilegeType, int *result);

unsigned int fn_82A1BFB8(unsigned int userIndex, unsigned int privilegeType, int *result)
{
    if (XamGetSystemVersion() < 0x20096b00) {
        if (userIndex == 0xff) {
            unsigned int i;
            for (i = 0; i < 4; i++) {
                if (XamUserGetSigninState(i) == 1) {
                    *result = 0;
                    return 0x4dd;
                }
            }
        } else if (XamUserGetSigninState(userIndex) == 1) {
            *result = 0;
            return 0x4dd;
        }
    }
    return XamUserCheckPrivilege(userIndex, privilegeType, result);
}
