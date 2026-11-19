// hkpCollidable::hkpCollidable(const hkpShape *, const hkMotionState *, int), out of line.
// The -1.0f of m_allowedPenetrationDepth is read from the link-time float pool lbl_82192730.

class hkpShape;
class hkMotionState;

extern "C" const float lbl_82192730[7];

class hkpCollidableBoundingVolumeData;
extern "C" void fn_82D40568(hkpCollidableBoundingVolumeData *self);

class hkpCdBody
{
  public:
    __forceinline hkpCdBody(const hkpShape *shape, const hkMotionState *motionState)
    {
        m_shape = shape;
        m_motion = motionState;
        m_shapeKey = 0xffffffff;
        m_parent = 0;
    }

    const hkpShape *m_shape;   // 0x0
    unsigned int m_shapeKey;   // 0x4
    const void *m_motion;      // 0x8
    const hkpCdBody *m_parent; // 0xc
};

class hkpBroadPhaseHandle
{
  public:
    __forceinline hkpBroadPhaseHandle()
    {
        m_id = 0;
    }

    unsigned int m_id; // 0x0
};

class hkpTypedBroadPhaseHandle : public hkpBroadPhaseHandle
{
  public:
    __forceinline hkpTypedBroadPhaseHandle(int type)
    {
        m_type = (signed char)type;
        m_collisionFilterInfo = 0;
        m_objectQualityType = (signed char)0xff;
        m_ownerOffset = 0x7f;
    }

    __forceinline void setOwner(void *owner)
    {
        m_ownerOffset = (signed char)((unsigned long)owner - (unsigned long)this);
    }

    signed char m_type;                 // 0x4
    signed char m_ownerOffset;          // 0x5
    signed char m_objectQualityType;    // 0x6
    unsigned int m_collisionFilterInfo; // 0x8
};

class hkpCollidableBoundingVolumeData
{
  public:
    // The constructor is the C unit fn_82D40568.
    __forceinline hkpCollidableBoundingVolumeData()
    {
        fn_82D40568(this);
    }

    char m_data[0x2c];
};

class hkpCollidable : public hkpCdBody
{
  public:
    hkpCollidable(const hkpShape *shape, const hkMotionState *motionState, int type);

    signed char m_ownerOffset;                            // 0x10
    unsigned char m_forceCollideOntoPpu;                  // 0x11
    unsigned short m_shapeSizeOnSpu;                      // 0x12
    hkpTypedBroadPhaseHandle m_broadPhaseHandle;          // 0x14
    hkpCollidableBoundingVolumeData m_boundingVolumeData; // 0x20
    float m_allowedPenetrationDepth;                      // 0x4c
};

hkpCollidable::hkpCollidable(const hkpShape *shape, const hkMotionState *motionState, int type)
    : hkpCdBody(shape, motionState), m_ownerOffset(0), m_broadPhaseHandle(type),
      m_allowedPenetrationDepth(lbl_82192730[1])
{
    m_broadPhaseHandle.setOwner(this);
    m_forceCollideOntoPpu = 0;
    m_shapeSizeOnSpu = 0;
}
