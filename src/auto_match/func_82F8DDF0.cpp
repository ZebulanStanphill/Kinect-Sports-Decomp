struct Device_82F8DDF0 {
    virtual void slot00();
    virtual void slot04();
    virtual int Prepare();
    virtual int Process(int, unsigned int, unsigned int, unsigned int, int);
};

extern "C" void Sleep(unsigned int milliseconds);

extern "C" int fn_82F8DDF0(Device_82F8DDF0 *self, unsigned int first, unsigned int second, unsigned int third)
{
    for (;;) {
        int result = self->Prepare();
        if (result < 0) {
            return result;
        }
        result = self->Process(0, first, second, third, 0);
        if (result < 0) {
            return result;
        }
        if (result != 0x540002) {
            return result;
        }
        Sleep(50);
    }
    return 0;
}
