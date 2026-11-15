struct Device_828BE2D0 {
    virtual void slot000();
    virtual void slot004();
    virtual void slot008();
    virtual void slot00c();
    virtual void slot010();
    virtual void slot014();
    virtual void slot018();
    virtual void slot01c();
    virtual void slot020();
    virtual void slot024();
    virtual void slot028();
    virtual void slot02c();
    virtual void slot030();
    virtual void slot034();
    virtual void slot038();
    virtual void slot03c();
    virtual void slot040();
    virtual void slot044();
    virtual void slot048();
    virtual void slot04c();
    virtual void slot050();
    virtual void slot054();
    virtual void slot058();
    virtual void slot05c();
    virtual void slot060();
    virtual int Process(void *);
    virtual int ProcessWithPeer(void *, void *);
    virtual void slot06c();
    virtual unsigned char HasPeer();
    char padding04[0x14];     /* 0x04 */
    unsigned int key;         /* 0x18 */
    char padding1c[0x44];     /* 0x1c */
    unsigned char address[8]; /* 0x60 */
};

extern "C" void *fn_8289F2E0(void *, unsigned int);
extern "C" void *fn_823AA970(void *);
extern "C" void fn_828B5580(void *, const void *);
extern "C" void *fn_8288F1E8(void *, const void *);
extern "C" void fn_828B55B0(void *);
extern "C" unsigned char fn_8288B760(void *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" void *fn_828DD6D8(void *, Device_828BE2D0 *, void *, void *, int);
extern "C" void fn_82886518(void *, int, int);
extern "C" void fn_828BE250(void *, void *, void *);

extern "C" int fn_828BE2D0(void *self, Device_828BE2D0 *device)
{
    void *entry = fn_8289F2E0(self, device->key);
    if (device->HasPeer()) {
        unsigned char address[8];
        void *peer;
        void *object;
        fn_828B5580(address, device->address);
        peer = fn_8288F1E8(self, address);
        fn_828B55B0(address);
        if (peer != 0) {
            if (fn_8288B760(peer)) {
                return device->ProcessWithPeer(fn_823AA970(entry), peer);
            }
            object = fn_8265C9E0(0x98);
            if (object != 0) {
                object = fn_828DD6D8(object, device, peer, fn_823AA970(entry), 0);
            } else {
                object = 0;
            }
            fn_82886518(object, -1, -1);
            fn_828BE250(self, object, peer);
            return 0;
        }
        return 1;
    } else {
        return device->Process(fn_823AA970(entry));
    }
}
