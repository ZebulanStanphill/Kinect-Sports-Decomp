#include <new>

class Resource_822A19D0
{
  public:
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual void Release(bool owned);
};

class Manager_822A19D0
{
  public:
    Manager_822A19D0();

  private:
    char storage[0x2ac];
};

struct State_822A19D0 {
    char pad0[0x18];
    int active;
    char pad1[4];
    int index;
    int limit;
    float time;
    unsigned char ready;
    char pad2[7];
    int counters[5]; // 0x34
    char pad3[8];
    char firstStorage[16]; // 0x50
    Resource_822A19D0 *first;
    char pad4[4];
    char secondStorage[16]; // 0x68
    Resource_822A19D0 *second;
    char pad5[4];
    int enabled;
    int status;
    int pending;
    int mode;
    Manager_822A19D0 *manager;
};

extern "C" void *fn_8265C9E0(unsigned int size);

extern "C" State_822A19D0 lbl_831D1298;

extern "C" void fn_822A19D0()
{
    State_822A19D0 &state = lbl_831D1298;
    state.time = 0.0f;
    state.ready = 0;
    state.counters[3] = 0;
    state.index = 0;
    state.limit = -1;
    state.counters[4] = 0;
    state.counters[0] = 0;
    state.counters[1] = 0;
    state.counters[2] = 0;
    state.active = 0;
    if (state.first)
        state.first->Release(state.first != reinterpret_cast<Resource_822A19D0 *>(state.firstStorage));
    state.first = 0;
    if (state.second)
        state.second->Release(state.second != reinterpret_cast<Resource_822A19D0 *>(state.secondStorage));
    state.second = 0;
    state.enabled = 1;
    state.pending = 0;
    state.status = 0;
    state.mode = 6;
    {
        void *storage = fn_8265C9E0(sizeof(Manager_822A19D0));
        if (storage != 0)
            state.manager = new (storage) Manager_822A19D0;
        else
            state.manager = 0;
    }
}
