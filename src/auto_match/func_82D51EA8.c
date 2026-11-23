typedef struct hkpSampledHeightFieldShape {
    char pad[0x10];
    int m_xRes; // 0x10
} hkpSampledHeightFieldShape;

typedef struct hkpTriSampledHeightFieldCollection {
    char pad0[0x18];
    hkpSampledHeightFieldShape *m_heightfield; // 0x18
    int m_childSize;                           // 0x1c
    float m_radius;                            // 0x20
    unsigned short *m_weldingInfo;             // 0x24
} hkpTriSampledHeightFieldCollection;

void fn_82D51EA8(hkpTriSampledHeightFieldCollection *mesh, unsigned int key, unsigned short weldingInfo)
{
    unsigned int y = key >> 16;
    unsigned int x = (key >> 1) & 0x7fff;
    unsigned short *weldingInfoData = mesh->m_weldingInfo;
    unsigned int cell = (mesh->m_heightfield->m_xRes - 1) * y + x;
    weldingInfoData[(cell << 1) | (key & 1)] = weldingInfo;
}
