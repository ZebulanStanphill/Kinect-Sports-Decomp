struct Object_82D82AD8;

template <typename T> struct Pad_82D82AD8 {
    Pad_82D82AD8()
    {
    }

    void operator=(T value)
    {
        m_storage = value;
    }

    operator T() const
    {
        return m_storage;
    }

    T m_storage;
};

struct StepInfo_82D82AD8 {
    StepInfo_82D82AD8(float startTime, float endTime)
    {
        m_startTime = startTime;
        m_endTime = endTime;
        m_deltaTime = endTime - startTime;
        m_invDeltaTime = (m_deltaTime == 0.0f) ? 0.0f : 1.0f / m_deltaTime;
    }

    Pad_82D82AD8<float> m_startTime;    // 0x0
    Pad_82D82AD8<float> m_endTime;      // 0x4
    Pad_82D82AD8<float> m_deltaTime;    // 0x8
    Pad_82D82AD8<float> m_invDeltaTime; // 0xc
};

struct Track_82D82AD8 {
    virtual void unused00();
    virtual void unused04();
    virtual void unused08();
    virtual void unused0c();
    virtual void unused10();
    virtual void unused14();
    virtual void unused18();
    virtual void sample(void *first, void *second, Object_82D82AD8 *owner, const StepInfo_82D82AD8 &info,
                        int flag); // 0x1c
    char unknown004[0x14];
    float value; // 0x18
};

struct Object_82D82AD8 {
    char unknown000[8];
    Track_82D82AD8 *track; // 0x08
};

extern "C" void fn_82D82AD8(Object_82D82AD8 *self, void *first, void *second)
{
    StepInfo_82D82AD8 info(self->track->value, self->track->value);
    self->track->sample(first, second, self, info, 1);
}
