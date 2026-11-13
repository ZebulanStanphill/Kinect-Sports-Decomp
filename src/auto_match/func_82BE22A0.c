typedef struct Settings_82BE22A0 {
    char pad0[0x28];
    unsigned short maxSendRate;     /* 0x28 */
    unsigned short maxReceiveRate;  /* 0x2a */
} Settings_82BE22A0;

extern char lbl_8322B13C[];
extern void *lbl_8322B130;
extern Settings_82BE22A0 *lbl_8322B1DC;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

void fn_82BE22A0(unsigned short rate)
{
    if (fn_82BEA200(lbl_8322B13C, "MassiveAdClient3::XMassiveAdClient::SetMaxReceiveRate") != 0) {
        if (lbl_8322B130 != 0)
            lbl_8322B1DC->maxReceiveRate = rate;
        fn_82BEA230(lbl_8322B13C, "MassiveAdClient3::XMassiveAdClient::SetMaxReceiveRate");
    }
}
