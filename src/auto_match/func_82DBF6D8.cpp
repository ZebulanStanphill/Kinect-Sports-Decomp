class Motor_82DBF6D8
{
  public:
    virtual void Slot0();
    virtual void Slot4();
    virtual void Slot8();
    virtual Motor_82DBF6D8 *Clone();
};

class hkpConstraintData
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1C();
    virtual int GetType() const;

    unsigned short m_memSizeAndFlags;
    short m_referenceCount;
    unsigned int m_userData;
};

class hkpRagdollConstraintData : public hkpConstraintData
{
  public:
    hkpRagdollConstraintData();

    void *operator new(unsigned int, void *p)
    {
        return p;
    }

    __declspec(align(16)) unsigned char m_atoms[0xd0];
    Motor_82DBF6D8 *m_motors[3];
    unsigned char m_tail[0x54];
};

class hkpPrismaticConstraintData : public hkpConstraintData
{
  public:
    hkpPrismaticConstraintData();

    void *operator new(unsigned int, void *p)
    {
        return p;
    }

    __declspec(align(16)) unsigned char m_atoms[0x9c];
    Motor_82DBF6D8 *m_motor;
    unsigned char m_tail[0x20];
};

class hkpLimitedHingeConstraintData : public hkpConstraintData
{
  public:
    hkpLimitedHingeConstraintData();

    void *operator new(unsigned int, void *p)
    {
        return p;
    }

    __declspec(align(16)) unsigned char m_atoms[0xa0];
    Motor_82DBF6D8 *m_motor;
    unsigned char m_tail[0x2c];
};

class Allocator_82DBF6D8
{
  public:
    virtual void Slot0();
    virtual void *Allocate(int);
};

struct Router_82DBF6D8 {
    char pad0[0x10];
    Allocator_82DBF6D8 *allocator;
};

extern "C" Router_82DBF6D8 *fn_82CE5410();
extern "C" void fn_8260A488(void *, const void *);
extern "C" void fn_8260A568(void *, const void *);
extern "C" void fn_8260A648(void *, const void *);

static __forceinline void *Allocate(int size)
{
    hkpConstraintData *memory = static_cast<hkpConstraintData *>(fn_82CE5410()->allocator->Allocate(size));
    memory->m_memSizeAndFlags = (unsigned short)size;
    return memory;
}

static __forceinline void CloneMotor(Motor_82DBF6D8 **slot)
{
    if (*slot) {
        *slot = (*slot)->Clone();
    }
}

extern "C" hkpConstraintData *fn_82DBF6D8(hkpConstraintData *self)
{
    switch (self->GetType()) {
    case 7: {
        hkpRagdollConstraintData *copy = new (Allocate(0x140)) hkpRagdollConstraintData;
        fn_8260A648(copy->m_atoms, static_cast<hkpRagdollConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        Motor_82DBF6D8 **motor = copy->m_motors;
        for (int i = 3; i != 0; --i, ++motor) {
            if (*motor) {
                *motor = (*motor)->Clone();
            }
        }
        return copy;
    }
    case 6: {
        hkpPrismaticConstraintData *copy = new (Allocate(0xd0)) hkpPrismaticConstraintData;
        fn_8260A568(copy->m_atoms, static_cast<hkpPrismaticConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_motor);
        return copy;
    }
    case 2: {
        hkpLimitedHingeConstraintData *copy = new (Allocate(0xe0)) hkpLimitedHingeConstraintData;
        fn_8260A488(copy->m_atoms, static_cast<hkpLimitedHingeConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_motor);
        return copy;
    }
    default:
        return 0;
    }
}
