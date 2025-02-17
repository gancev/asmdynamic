#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint64_t global_memory_values[1000] = {
0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, 0x100, 0x101, 0x102, 0x103, 0x104, 0x105, 0x106, 0x107, 0x108, 0x109, 0x10A, 0x10B, 0x10C, 0x10D, 0x10E, 0x10F, 0x110, 0x111, 0x112, 0x113, 0x114, 0x115, 0x116, 0x117, 0x118, 0x119, 0x11A, 0x11B, 0x11C, 0x11D, 0x11E, 0x11F, 0x120, 0x121, 0x122, 0x123, 0x124, 0x125, 0x126, 0x127, 0x128, 0x129, 0x12A, 0x12B, 0x12C, 0x12D, 0x12E, 0x12F, 0x130, 0x131, 0x132, 0x133, 0x134, 0x135, 0x136, 0x137, 0x138, 0x139, 0x13A, 0x13B, 0x13C, 0x13D, 0x13E, 0x13F, 0x140, 0x141, 0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 0x14A, 0x14B, 0x14C, 0x14D, 0x14E, 0x14F, 0x150, 0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15A, 0x15B, 0x15C, 0x15D, 0x15E, 0x15F, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x167, 0x168, 0x169, 0x16A, 0x16B, 0x16C, 0x16D, 0x16E, 0x16F, 0x170, 0x171, 0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17A, 0x17B, 0x17C, 0x17D, 0x17E, 0x17F, 0x180, 0x181, 0x182, 0x183, 0x184, 0x185, 0x186, 0x187, 0x188, 0x189, 0x18A, 0x18B, 0x18C, 0x18D, 0x18E, 0x18F, 0x190, 0x191, 0x192, 0x193, 0x194, 0x195, 0x196, 0x197, 0x198, 0x199, 0x19A, 0x19B, 0x19C, 0x19D, 0x19E, 0x19F, 0x1A0, 0x1A1, 0x1A2, 0x1A3, 0x1A4, 0x1A5, 0x1A6, 0x1A7, 0x1A8, 0x1A9, 0x1AA, 0x1AB, 0x1AC, 0x1AD, 0x1AE, 0x1AF, 0x1B0, 0x1B1, 0x1B2, 0x1B3, 0x1B4, 0x1B5, 0x1B6, 0x1B7, 0x1B8, 0x1B9, 0x1BA, 0x1BB, 0x1BC, 0x1BD, 0x1BE, 0x1BF, 0x1C0, 0x1C1, 0x1C2, 0x1C3, 0x1C4, 0x1C5, 0x1C6, 0x1C7, 0x1C8, 0x1C9, 0x1CA, 0x1CB, 0x1CC, 0x1CD, 0x1CE, 0x1CF, 0x1D0, 0x1D1, 0x1D2, 0x1D3, 0x1D4, 0x1D5, 0x1D6, 0x1D7, 0x1D8, 0x1D9, 0x1DA, 0x1DB, 0x1DC, 0x1DD, 0x1DE, 0x1DF, 0x1E0, 0x1E1, 0x1E2, 0x1E3, 0x1E4, 0x1E5, 0x1E6, 0x1E7, 0x1E8, 0x1E9, 0x1EA, 0x1EB, 0x1EC, 0x1ED, 0x1EE, 0x1EF, 0x1F0, 0x1F1, 0x1F2, 0x1F3, 0x1F4, 0x1F5, 0x1F6, 0x1F7, 0x1F8, 0x1F9, 0x1FA, 0x1FB, 0x1FC, 0x1FD, 0x1FE, 0x1FF, 0x200, 0x201, 0x202, 0x203, 0x204, 0x205, 0x206, 0x207, 0x208, 0x209, 0x20A, 0x20B, 0x20C, 0x20D, 0x20E, 0x20F, 0x210, 0x211, 0x212, 0x213, 0x214, 0x215, 0x216, 0x217, 0x218, 0x219, 0x21A, 0x21B, 0x21C, 0x21D, 0x21E, 0x21F, 0x220, 0x221, 0x222, 0x223, 0x224, 0x225, 0x226, 0x227, 0x228, 0x229, 0x22A, 0x22B, 0x22C, 0x22D, 0x22E, 0x22F, 0x230, 0x231, 0x232, 0x233, 0x234, 0x235, 0x236, 0x237, 0x238, 0x239, 0x23A, 0x23B, 0x23C, 0x23D, 0x23E, 0x23F, 0x240, 0x241, 0x242, 0x243, 0x244, 0x245, 0x246, 0x247, 0x248, 0x249, 0x24A, 0x24B, 0x24C, 0x24D, 0x24E, 0x24F, 0x250, 0x251, 0x252, 0x253, 0x254, 0x255, 0x256, 0x257, 0x258, 0x259, 0x25A, 0x25B, 0x25C, 0x25D, 0x25E, 0x25F, 0x260, 0x261, 0x262, 0x263, 0x264, 0x265, 0x266, 0x267, 0x268, 0x269, 0x26A, 0x26B, 0x26C, 0x26D, 0x26E, 0x26F, 0x270, 0x271, 0x272, 0x273, 0x274, 0x275, 0x276, 0x277, 0x278, 0x279, 0x27A, 0x27B, 0x27C, 0x27D, 0x27E, 0x27F, 0x280, 0x281, 0x282, 0x283, 0x284, 0x285, 0x286, 0x287, 0x288, 0x289, 0x28A, 0x28B, 0x28C, 0x28D, 0x28E, 0x28F, 0x290, 0x291, 0x292, 0x293, 0x294, 0x295, 0x296, 0x297, 0x298, 0x299, 0x29A, 0x29B, 0x29C, 0x29D, 0x29E, 0x29F, 0x2A0, 0x2A1, 0x2A2, 0x2A3, 0x2A4, 0x2A5, 0x2A6, 0x2A7, 0x2A8, 0x2A9, 0x2AA, 0x2AB, 0x2AC, 0x2AD, 0x2AE, 0x2AF, 0x2B0, 0x2B1, 0x2B2, 0x2B3, 0x2B4, 0x2B5, 0x2B6, 0x2B7, 0x2B8, 0x2B9, 0x2BA, 0x2BB, 0x2BC, 0x2BD, 0x2BE, 0x2BF, 0x2C0, 0x2C1, 0x2C2, 0x2C3, 0x2C4, 0x2C5, 0x2C6, 0x2C7, 0x2C8, 0x2C9, 0x2CA, 0x2CB, 0x2CC, 0x2CD, 0x2CE, 0x2CF, 0x2D0, 0x2D1, 0x2D2, 0x2D3, 0x2D4, 0x2D5, 0x2D6, 0x2D7, 0x2D8, 0x2D9, 0x2DA, 0x2DB, 0x2DC, 0x2DD, 0x2DE, 0x2DF, 0x2E0, 0x2E1, 0x2E2, 0x2E3, 0x2E4, 0x2E5, 0x2E6, 0x2E7, 0x2E8, 0x2E9, 0x2EA, 0x2EB, 0x2EC, 0x2ED, 0x2EE, 0x2EF, 0x2F0, 0x2F1, 0x2F2, 0x2F3, 0x2F4, 0x2F5, 0x2F6, 0x2F7, 0x2F8, 0x2F9, 0x2FA, 0x2FB, 0x2FC, 0x2FD, 0x2FE, 0x2FF, 0x300, 0x301, 0x302, 0x303, 0x304, 0x305, 0x306, 0x307, 0x308, 0x309, 0x30A, 0x30B, 0x30C, 0x30D, 0x30E, 0x30F, 0x310, 0x311, 0x312, 0x313, 0x314, 0x315, 0x316, 0x317, 0x318, 0x319, 0x31A, 0x31B, 0x31C, 0x31D, 0x31E, 0x31F, 0x320, 0x321, 0x322, 0x323, 0x324, 0x325, 0x326, 0x327, 0x328, 0x329, 0x32A, 0x32B, 0x32C, 0x32D, 0x32E, 0x32F, 0x330, 0x331, 0x332, 0x333, 0x334, 0x335, 0x336, 0x337, 0x338, 0x339, 0x33A, 0x33B, 0x33C, 0x33D, 0x33E, 0x33F, 0x340, 0x341, 0x342, 0x343, 0x344, 0x345, 0x346, 0x347, 0x348, 0x349, 0x34A, 0x34B, 0x34C, 0x34D, 0x34E, 0x34F, 0x350, 0x351, 0x352, 0x353, 0x354, 0x355, 0x356, 0x357, 0x358, 0x359, 0x35A, 0x35B, 0x35C, 0x35D, 0x35E, 0x35F, 0x360, 0x361, 0x362, 0x363, 0x364, 0x365, 0x366, 0x367, 0x368, 0x369, 0x36A, 0x36B, 0x36C, 0x36D, 0x36E, 0x36F, 0x370, 0x371, 0x372, 0x373, 0x374, 0x375, 0x376, 0x377, 0x378, 0x379, 0x37A, 0x37B, 0x37C, 0x37D, 0x37E, 0x37F, 0x380, 0x381, 0x382, 0x383, 0x384, 0x385, 0x386, 0x387, 0x388, 0x389, 0x38A, 0x38B, 0x38C, 0x38D, 0x38E, 0x38F, 0x390, 0x391, 0x392, 0x393, 0x394, 0x395, 0x396, 0x397, 0x398, 0x399, 0x39A, 0x39B, 0x39C, 0x39D, 0x39E, 0x39F, 0x3A0, 0x3A1, 0x3A2, 0x3A3, 0x3A4, 0x3A5, 0x3A6, 0x3A7, 0x3A8, 0x3A9, 0x3AA, 0x3AB, 0x3AC, 0x3AD, 0x3AE, 0x3AF, 0x3B0, 0x3B1, 0x3B2, 0x3B3, 0x3B4, 0x3B5, 0x3B6, 0x3B7, 0x3B8, 0x3B9, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BE, 0x3BF, 0x3C0, 0x3C1, 0x3C2, 0x3C3, 0x3C4, 0x3C5, 0x3C6, 0x3C7, 0x3C8, 0x3C9, 0x3CA, 0x3CB, 0x3CC, 0x3CD, 0x3CE, 0x3CF, 0x3D0, 0x3D1, 0x3D2, 0x3D3, 0x3D4, 0x3D5, 0x3D6, 0x3D7, 0x3D8, 0x3D9, 0x3DA, 0x3DB, 0x3DC, 0x3DD, 0x3DE, 0x3DF, 0x3E0, 0x3E1, 0x3E2, 0x3E3, 0x3E4, 0x3E5, 0x3E6, 0x3E7, 0x3E8
};

void target_func1(void *param, uint64_t loaded_value) {
    printf("Target Function 1: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func2(void *param, uint64_t loaded_value) {
    printf("Target Function 2: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func3(void *param, uint64_t loaded_value) {
    printf("Target Function 3: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func4(void *param, uint64_t loaded_value) {
    printf("Target Function 4: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func5(void *param, uint64_t loaded_value) {
    printf("Target Function 5: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func6(void *param, uint64_t loaded_value) {
    printf("Target Function 6: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func7(void *param, uint64_t loaded_value) {
    printf("Target Function 7: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func8(void *param, uint64_t loaded_value) {
    printf("Target Function 8: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func9(void *param, uint64_t loaded_value) {
    printf("Target Function 9: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func10(void *param, uint64_t loaded_value) {
    printf("Target Function 10: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func11(void *param, uint64_t loaded_value) {
    printf("Target Function 11: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func12(void *param, uint64_t loaded_value) {
    printf("Target Function 12: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func13(void *param, uint64_t loaded_value) {
    printf("Target Function 13: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func14(void *param, uint64_t loaded_value) {
    printf("Target Function 14: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func15(void *param, uint64_t loaded_value) {
    printf("Target Function 15: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func16(void *param, uint64_t loaded_value) {
    printf("Target Function 16: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func17(void *param, uint64_t loaded_value) {
    printf("Target Function 17: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func18(void *param, uint64_t loaded_value) {
    printf("Target Function 18: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func19(void *param, uint64_t loaded_value) {
    printf("Target Function 19: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func20(void *param, uint64_t loaded_value) {
    printf("Target Function 20: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func21(void *param, uint64_t loaded_value) {
    printf("Target Function 21: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func22(void *param, uint64_t loaded_value) {
    printf("Target Function 22: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func23(void *param, uint64_t loaded_value) {
    printf("Target Function 23: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func24(void *param, uint64_t loaded_value) {
    printf("Target Function 24: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func25(void *param, uint64_t loaded_value) {
    printf("Target Function 25: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func26(void *param, uint64_t loaded_value) {
    printf("Target Function 26: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func27(void *param, uint64_t loaded_value) {
    printf("Target Function 27: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func28(void *param, uint64_t loaded_value) {
    printf("Target Function 28: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func29(void *param, uint64_t loaded_value) {
    printf("Target Function 29: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func30(void *param, uint64_t loaded_value) {
    printf("Target Function 30: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func31(void *param, uint64_t loaded_value) {
    printf("Target Function 31: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func32(void *param, uint64_t loaded_value) {
    printf("Target Function 32: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func33(void *param, uint64_t loaded_value) {
    printf("Target Function 33: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func34(void *param, uint64_t loaded_value) {
    printf("Target Function 34: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func35(void *param, uint64_t loaded_value) {
    printf("Target Function 35: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func36(void *param, uint64_t loaded_value) {
    printf("Target Function 36: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func37(void *param, uint64_t loaded_value) {
    printf("Target Function 37: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func38(void *param, uint64_t loaded_value) {
    printf("Target Function 38: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func39(void *param, uint64_t loaded_value) {
    printf("Target Function 39: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func40(void *param, uint64_t loaded_value) {
    printf("Target Function 40: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func41(void *param, uint64_t loaded_value) {
    printf("Target Function 41: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func42(void *param, uint64_t loaded_value) {
    printf("Target Function 42: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func43(void *param, uint64_t loaded_value) {
    printf("Target Function 43: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func44(void *param, uint64_t loaded_value) {
    printf("Target Function 44: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func45(void *param, uint64_t loaded_value) {
    printf("Target Function 45: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func46(void *param, uint64_t loaded_value) {
    printf("Target Function 46: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func47(void *param, uint64_t loaded_value) {
    printf("Target Function 47: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func48(void *param, uint64_t loaded_value) {
    printf("Target Function 48: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func49(void *param, uint64_t loaded_value) {
    printf("Target Function 49: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func50(void *param, uint64_t loaded_value) {
    printf("Target Function 50: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func51(void *param, uint64_t loaded_value) {
    printf("Target Function 51: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func52(void *param, uint64_t loaded_value) {
    printf("Target Function 52: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func53(void *param, uint64_t loaded_value) {
    printf("Target Function 53: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func54(void *param, uint64_t loaded_value) {
    printf("Target Function 54: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func55(void *param, uint64_t loaded_value) {
    printf("Target Function 55: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func56(void *param, uint64_t loaded_value) {
    printf("Target Function 56: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func57(void *param, uint64_t loaded_value) {
    printf("Target Function 57: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func58(void *param, uint64_t loaded_value) {
    printf("Target Function 58: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func59(void *param, uint64_t loaded_value) {
    printf("Target Function 59: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func60(void *param, uint64_t loaded_value) {
    printf("Target Function 60: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func61(void *param, uint64_t loaded_value) {
    printf("Target Function 61: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func62(void *param, uint64_t loaded_value) {
    printf("Target Function 62: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func63(void *param, uint64_t loaded_value) {
    printf("Target Function 63: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func64(void *param, uint64_t loaded_value) {
    printf("Target Function 64: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func65(void *param, uint64_t loaded_value) {
    printf("Target Function 65: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func66(void *param, uint64_t loaded_value) {
    printf("Target Function 66: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func67(void *param, uint64_t loaded_value) {
    printf("Target Function 67: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func68(void *param, uint64_t loaded_value) {
    printf("Target Function 68: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func69(void *param, uint64_t loaded_value) {
    printf("Target Function 69: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func70(void *param, uint64_t loaded_value) {
    printf("Target Function 70: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func71(void *param, uint64_t loaded_value) {
    printf("Target Function 71: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func72(void *param, uint64_t loaded_value) {
    printf("Target Function 72: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func73(void *param, uint64_t loaded_value) {
    printf("Target Function 73: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func74(void *param, uint64_t loaded_value) {
    printf("Target Function 74: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func75(void *param, uint64_t loaded_value) {
    printf("Target Function 75: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func76(void *param, uint64_t loaded_value) {
    printf("Target Function 76: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func77(void *param, uint64_t loaded_value) {
    printf("Target Function 77: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func78(void *param, uint64_t loaded_value) {
    printf("Target Function 78: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func79(void *param, uint64_t loaded_value) {
    printf("Target Function 79: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func80(void *param, uint64_t loaded_value) {
    printf("Target Function 80: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func81(void *param, uint64_t loaded_value) {
    printf("Target Function 81: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func82(void *param, uint64_t loaded_value) {
    printf("Target Function 82: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func83(void *param, uint64_t loaded_value) {
    printf("Target Function 83: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func84(void *param, uint64_t loaded_value) {
    printf("Target Function 84: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func85(void *param, uint64_t loaded_value) {
    printf("Target Function 85: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func86(void *param, uint64_t loaded_value) {
    printf("Target Function 86: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func87(void *param, uint64_t loaded_value) {
    printf("Target Function 87: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func88(void *param, uint64_t loaded_value) {
    printf("Target Function 88: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func89(void *param, uint64_t loaded_value) {
    printf("Target Function 89: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func90(void *param, uint64_t loaded_value) {
    printf("Target Function 90: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func91(void *param, uint64_t loaded_value) {
    printf("Target Function 91: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func92(void *param, uint64_t loaded_value) {
    printf("Target Function 92: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func93(void *param, uint64_t loaded_value) {
    printf("Target Function 93: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func94(void *param, uint64_t loaded_value) {
    printf("Target Function 94: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func95(void *param, uint64_t loaded_value) {
    printf("Target Function 95: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func96(void *param, uint64_t loaded_value) {
    printf("Target Function 96: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func97(void *param, uint64_t loaded_value) {
    printf("Target Function 97: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func98(void *param, uint64_t loaded_value) {
    printf("Target Function 98: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func99(void *param, uint64_t loaded_value) {
    printf("Target Function 99: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func100(void *param, uint64_t loaded_value) {
    printf("Target Function 100: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func101(void *param, uint64_t loaded_value) {
    printf("Target Function 101: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func102(void *param, uint64_t loaded_value) {
    printf("Target Function 102: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func103(void *param, uint64_t loaded_value) {
    printf("Target Function 103: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func104(void *param, uint64_t loaded_value) {
    printf("Target Function 104: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func105(void *param, uint64_t loaded_value) {
    printf("Target Function 105: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func106(void *param, uint64_t loaded_value) {
    printf("Target Function 106: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func107(void *param, uint64_t loaded_value) {
    printf("Target Function 107: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func108(void *param, uint64_t loaded_value) {
    printf("Target Function 108: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func109(void *param, uint64_t loaded_value) {
    printf("Target Function 109: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func110(void *param, uint64_t loaded_value) {
    printf("Target Function 110: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func111(void *param, uint64_t loaded_value) {
    printf("Target Function 111: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func112(void *param, uint64_t loaded_value) {
    printf("Target Function 112: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func113(void *param, uint64_t loaded_value) {
    printf("Target Function 113: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func114(void *param, uint64_t loaded_value) {
    printf("Target Function 114: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func115(void *param, uint64_t loaded_value) {
    printf("Target Function 115: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func116(void *param, uint64_t loaded_value) {
    printf("Target Function 116: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func117(void *param, uint64_t loaded_value) {
    printf("Target Function 117: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func118(void *param, uint64_t loaded_value) {
    printf("Target Function 118: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func119(void *param, uint64_t loaded_value) {
    printf("Target Function 119: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func120(void *param, uint64_t loaded_value) {
    printf("Target Function 120: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func121(void *param, uint64_t loaded_value) {
    printf("Target Function 121: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func122(void *param, uint64_t loaded_value) {
    printf("Target Function 122: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func123(void *param, uint64_t loaded_value) {
    printf("Target Function 123: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func124(void *param, uint64_t loaded_value) {
    printf("Target Function 124: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func125(void *param, uint64_t loaded_value) {
    printf("Target Function 125: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func126(void *param, uint64_t loaded_value) {
    printf("Target Function 126: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func127(void *param, uint64_t loaded_value) {
    printf("Target Function 127: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func128(void *param, uint64_t loaded_value) {
    printf("Target Function 128: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func129(void *param, uint64_t loaded_value) {
    printf("Target Function 129: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func130(void *param, uint64_t loaded_value) {
    printf("Target Function 130: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func131(void *param, uint64_t loaded_value) {
    printf("Target Function 131: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func132(void *param, uint64_t loaded_value) {
    printf("Target Function 132: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func133(void *param, uint64_t loaded_value) {
    printf("Target Function 133: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func134(void *param, uint64_t loaded_value) {
    printf("Target Function 134: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func135(void *param, uint64_t loaded_value) {
    printf("Target Function 135: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func136(void *param, uint64_t loaded_value) {
    printf("Target Function 136: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func137(void *param, uint64_t loaded_value) {
    printf("Target Function 137: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func138(void *param, uint64_t loaded_value) {
    printf("Target Function 138: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func139(void *param, uint64_t loaded_value) {
    printf("Target Function 139: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func140(void *param, uint64_t loaded_value) {
    printf("Target Function 140: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func141(void *param, uint64_t loaded_value) {
    printf("Target Function 141: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func142(void *param, uint64_t loaded_value) {
    printf("Target Function 142: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func143(void *param, uint64_t loaded_value) {
    printf("Target Function 143: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func144(void *param, uint64_t loaded_value) {
    printf("Target Function 144: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func145(void *param, uint64_t loaded_value) {
    printf("Target Function 145: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func146(void *param, uint64_t loaded_value) {
    printf("Target Function 146: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func147(void *param, uint64_t loaded_value) {
    printf("Target Function 147: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func148(void *param, uint64_t loaded_value) {
    printf("Target Function 148: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func149(void *param, uint64_t loaded_value) {
    printf("Target Function 149: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func150(void *param, uint64_t loaded_value) {
    printf("Target Function 150: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func151(void *param, uint64_t loaded_value) {
    printf("Target Function 151: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func152(void *param, uint64_t loaded_value) {
    printf("Target Function 152: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func153(void *param, uint64_t loaded_value) {
    printf("Target Function 153: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func154(void *param, uint64_t loaded_value) {
    printf("Target Function 154: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func155(void *param, uint64_t loaded_value) {
    printf("Target Function 155: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func156(void *param, uint64_t loaded_value) {
    printf("Target Function 156: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func157(void *param, uint64_t loaded_value) {
    printf("Target Function 157: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func158(void *param, uint64_t loaded_value) {
    printf("Target Function 158: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func159(void *param, uint64_t loaded_value) {
    printf("Target Function 159: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func160(void *param, uint64_t loaded_value) {
    printf("Target Function 160: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func161(void *param, uint64_t loaded_value) {
    printf("Target Function 161: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func162(void *param, uint64_t loaded_value) {
    printf("Target Function 162: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func163(void *param, uint64_t loaded_value) {
    printf("Target Function 163: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func164(void *param, uint64_t loaded_value) {
    printf("Target Function 164: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func165(void *param, uint64_t loaded_value) {
    printf("Target Function 165: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func166(void *param, uint64_t loaded_value) {
    printf("Target Function 166: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func167(void *param, uint64_t loaded_value) {
    printf("Target Function 167: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func168(void *param, uint64_t loaded_value) {
    printf("Target Function 168: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func169(void *param, uint64_t loaded_value) {
    printf("Target Function 169: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func170(void *param, uint64_t loaded_value) {
    printf("Target Function 170: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func171(void *param, uint64_t loaded_value) {
    printf("Target Function 171: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func172(void *param, uint64_t loaded_value) {
    printf("Target Function 172: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func173(void *param, uint64_t loaded_value) {
    printf("Target Function 173: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func174(void *param, uint64_t loaded_value) {
    printf("Target Function 174: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func175(void *param, uint64_t loaded_value) {
    printf("Target Function 175: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func176(void *param, uint64_t loaded_value) {
    printf("Target Function 176: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func177(void *param, uint64_t loaded_value) {
    printf("Target Function 177: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func178(void *param, uint64_t loaded_value) {
    printf("Target Function 178: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func179(void *param, uint64_t loaded_value) {
    printf("Target Function 179: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func180(void *param, uint64_t loaded_value) {
    printf("Target Function 180: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func181(void *param, uint64_t loaded_value) {
    printf("Target Function 181: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func182(void *param, uint64_t loaded_value) {
    printf("Target Function 182: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func183(void *param, uint64_t loaded_value) {
    printf("Target Function 183: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func184(void *param, uint64_t loaded_value) {
    printf("Target Function 184: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func185(void *param, uint64_t loaded_value) {
    printf("Target Function 185: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func186(void *param, uint64_t loaded_value) {
    printf("Target Function 186: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func187(void *param, uint64_t loaded_value) {
    printf("Target Function 187: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func188(void *param, uint64_t loaded_value) {
    printf("Target Function 188: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func189(void *param, uint64_t loaded_value) {
    printf("Target Function 189: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func190(void *param, uint64_t loaded_value) {
    printf("Target Function 190: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func191(void *param, uint64_t loaded_value) {
    printf("Target Function 191: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func192(void *param, uint64_t loaded_value) {
    printf("Target Function 192: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func193(void *param, uint64_t loaded_value) {
    printf("Target Function 193: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func194(void *param, uint64_t loaded_value) {
    printf("Target Function 194: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func195(void *param, uint64_t loaded_value) {
    printf("Target Function 195: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func196(void *param, uint64_t loaded_value) {
    printf("Target Function 196: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func197(void *param, uint64_t loaded_value) {
    printf("Target Function 197: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func198(void *param, uint64_t loaded_value) {
    printf("Target Function 198: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func199(void *param, uint64_t loaded_value) {
    printf("Target Function 199: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func200(void *param, uint64_t loaded_value) {
    printf("Target Function 200: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func201(void *param, uint64_t loaded_value) {
    printf("Target Function 201: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func202(void *param, uint64_t loaded_value) {
    printf("Target Function 202: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func203(void *param, uint64_t loaded_value) {
    printf("Target Function 203: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func204(void *param, uint64_t loaded_value) {
    printf("Target Function 204: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func205(void *param, uint64_t loaded_value) {
    printf("Target Function 205: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func206(void *param, uint64_t loaded_value) {
    printf("Target Function 206: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func207(void *param, uint64_t loaded_value) {
    printf("Target Function 207: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func208(void *param, uint64_t loaded_value) {
    printf("Target Function 208: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func209(void *param, uint64_t loaded_value) {
    printf("Target Function 209: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func210(void *param, uint64_t loaded_value) {
    printf("Target Function 210: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func211(void *param, uint64_t loaded_value) {
    printf("Target Function 211: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func212(void *param, uint64_t loaded_value) {
    printf("Target Function 212: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func213(void *param, uint64_t loaded_value) {
    printf("Target Function 213: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func214(void *param, uint64_t loaded_value) {
    printf("Target Function 214: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func215(void *param, uint64_t loaded_value) {
    printf("Target Function 215: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func216(void *param, uint64_t loaded_value) {
    printf("Target Function 216: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func217(void *param, uint64_t loaded_value) {
    printf("Target Function 217: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func218(void *param, uint64_t loaded_value) {
    printf("Target Function 218: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func219(void *param, uint64_t loaded_value) {
    printf("Target Function 219: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func220(void *param, uint64_t loaded_value) {
    printf("Target Function 220: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func221(void *param, uint64_t loaded_value) {
    printf("Target Function 221: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func222(void *param, uint64_t loaded_value) {
    printf("Target Function 222: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func223(void *param, uint64_t loaded_value) {
    printf("Target Function 223: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func224(void *param, uint64_t loaded_value) {
    printf("Target Function 224: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func225(void *param, uint64_t loaded_value) {
    printf("Target Function 225: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func226(void *param, uint64_t loaded_value) {
    printf("Target Function 226: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func227(void *param, uint64_t loaded_value) {
    printf("Target Function 227: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func228(void *param, uint64_t loaded_value) {
    printf("Target Function 228: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func229(void *param, uint64_t loaded_value) {
    printf("Target Function 229: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func230(void *param, uint64_t loaded_value) {
    printf("Target Function 230: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func231(void *param, uint64_t loaded_value) {
    printf("Target Function 231: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func232(void *param, uint64_t loaded_value) {
    printf("Target Function 232: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func233(void *param, uint64_t loaded_value) {
    printf("Target Function 233: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func234(void *param, uint64_t loaded_value) {
    printf("Target Function 234: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func235(void *param, uint64_t loaded_value) {
    printf("Target Function 235: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func236(void *param, uint64_t loaded_value) {
    printf("Target Function 236: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func237(void *param, uint64_t loaded_value) {
    printf("Target Function 237: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func238(void *param, uint64_t loaded_value) {
    printf("Target Function 238: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func239(void *param, uint64_t loaded_value) {
    printf("Target Function 239: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func240(void *param, uint64_t loaded_value) {
    printf("Target Function 240: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func241(void *param, uint64_t loaded_value) {
    printf("Target Function 241: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func242(void *param, uint64_t loaded_value) {
    printf("Target Function 242: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func243(void *param, uint64_t loaded_value) {
    printf("Target Function 243: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func244(void *param, uint64_t loaded_value) {
    printf("Target Function 244: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func245(void *param, uint64_t loaded_value) {
    printf("Target Function 245: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func246(void *param, uint64_t loaded_value) {
    printf("Target Function 246: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func247(void *param, uint64_t loaded_value) {
    printf("Target Function 247: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func248(void *param, uint64_t loaded_value) {
    printf("Target Function 248: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func249(void *param, uint64_t loaded_value) {
    printf("Target Function 249: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func250(void *param, uint64_t loaded_value) {
    printf("Target Function 250: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func251(void *param, uint64_t loaded_value) {
    printf("Target Function 251: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func252(void *param, uint64_t loaded_value) {
    printf("Target Function 252: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func253(void *param, uint64_t loaded_value) {
    printf("Target Function 253: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func254(void *param, uint64_t loaded_value) {
    printf("Target Function 254: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func255(void *param, uint64_t loaded_value) {
    printf("Target Function 255: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func256(void *param, uint64_t loaded_value) {
    printf("Target Function 256: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func257(void *param, uint64_t loaded_value) {
    printf("Target Function 257: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func258(void *param, uint64_t loaded_value) {
    printf("Target Function 258: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func259(void *param, uint64_t loaded_value) {
    printf("Target Function 259: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func260(void *param, uint64_t loaded_value) {
    printf("Target Function 260: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func261(void *param, uint64_t loaded_value) {
    printf("Target Function 261: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func262(void *param, uint64_t loaded_value) {
    printf("Target Function 262: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func263(void *param, uint64_t loaded_value) {
    printf("Target Function 263: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func264(void *param, uint64_t loaded_value) {
    printf("Target Function 264: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func265(void *param, uint64_t loaded_value) {
    printf("Target Function 265: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func266(void *param, uint64_t loaded_value) {
    printf("Target Function 266: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func267(void *param, uint64_t loaded_value) {
    printf("Target Function 267: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func268(void *param, uint64_t loaded_value) {
    printf("Target Function 268: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func269(void *param, uint64_t loaded_value) {
    printf("Target Function 269: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func270(void *param, uint64_t loaded_value) {
    printf("Target Function 270: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func271(void *param, uint64_t loaded_value) {
    printf("Target Function 271: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func272(void *param, uint64_t loaded_value) {
    printf("Target Function 272: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func273(void *param, uint64_t loaded_value) {
    printf("Target Function 273: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func274(void *param, uint64_t loaded_value) {
    printf("Target Function 274: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func275(void *param, uint64_t loaded_value) {
    printf("Target Function 275: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func276(void *param, uint64_t loaded_value) {
    printf("Target Function 276: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func277(void *param, uint64_t loaded_value) {
    printf("Target Function 277: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func278(void *param, uint64_t loaded_value) {
    printf("Target Function 278: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func279(void *param, uint64_t loaded_value) {
    printf("Target Function 279: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func280(void *param, uint64_t loaded_value) {
    printf("Target Function 280: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func281(void *param, uint64_t loaded_value) {
    printf("Target Function 281: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func282(void *param, uint64_t loaded_value) {
    printf("Target Function 282: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func283(void *param, uint64_t loaded_value) {
    printf("Target Function 283: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func284(void *param, uint64_t loaded_value) {
    printf("Target Function 284: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func285(void *param, uint64_t loaded_value) {
    printf("Target Function 285: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func286(void *param, uint64_t loaded_value) {
    printf("Target Function 286: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func287(void *param, uint64_t loaded_value) {
    printf("Target Function 287: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func288(void *param, uint64_t loaded_value) {
    printf("Target Function 288: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func289(void *param, uint64_t loaded_value) {
    printf("Target Function 289: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func290(void *param, uint64_t loaded_value) {
    printf("Target Function 290: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func291(void *param, uint64_t loaded_value) {
    printf("Target Function 291: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func292(void *param, uint64_t loaded_value) {
    printf("Target Function 292: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func293(void *param, uint64_t loaded_value) {
    printf("Target Function 293: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func294(void *param, uint64_t loaded_value) {
    printf("Target Function 294: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func295(void *param, uint64_t loaded_value) {
    printf("Target Function 295: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func296(void *param, uint64_t loaded_value) {
    printf("Target Function 296: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func297(void *param, uint64_t loaded_value) {
    printf("Target Function 297: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func298(void *param, uint64_t loaded_value) {
    printf("Target Function 298: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func299(void *param, uint64_t loaded_value) {
    printf("Target Function 299: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func300(void *param, uint64_t loaded_value) {
    printf("Target Function 300: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func301(void *param, uint64_t loaded_value) {
    printf("Target Function 301: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func302(void *param, uint64_t loaded_value) {
    printf("Target Function 302: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func303(void *param, uint64_t loaded_value) {
    printf("Target Function 303: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func304(void *param, uint64_t loaded_value) {
    printf("Target Function 304: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func305(void *param, uint64_t loaded_value) {
    printf("Target Function 305: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func306(void *param, uint64_t loaded_value) {
    printf("Target Function 306: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func307(void *param, uint64_t loaded_value) {
    printf("Target Function 307: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func308(void *param, uint64_t loaded_value) {
    printf("Target Function 308: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func309(void *param, uint64_t loaded_value) {
    printf("Target Function 309: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func310(void *param, uint64_t loaded_value) {
    printf("Target Function 310: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func311(void *param, uint64_t loaded_value) {
    printf("Target Function 311: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func312(void *param, uint64_t loaded_value) {
    printf("Target Function 312: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func313(void *param, uint64_t loaded_value) {
    printf("Target Function 313: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func314(void *param, uint64_t loaded_value) {
    printf("Target Function 314: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func315(void *param, uint64_t loaded_value) {
    printf("Target Function 315: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func316(void *param, uint64_t loaded_value) {
    printf("Target Function 316: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func317(void *param, uint64_t loaded_value) {
    printf("Target Function 317: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func318(void *param, uint64_t loaded_value) {
    printf("Target Function 318: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func319(void *param, uint64_t loaded_value) {
    printf("Target Function 319: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func320(void *param, uint64_t loaded_value) {
    printf("Target Function 320: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func321(void *param, uint64_t loaded_value) {
    printf("Target Function 321: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func322(void *param, uint64_t loaded_value) {
    printf("Target Function 322: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func323(void *param, uint64_t loaded_value) {
    printf("Target Function 323: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func324(void *param, uint64_t loaded_value) {
    printf("Target Function 324: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func325(void *param, uint64_t loaded_value) {
    printf("Target Function 325: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func326(void *param, uint64_t loaded_value) {
    printf("Target Function 326: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func327(void *param, uint64_t loaded_value) {
    printf("Target Function 327: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func328(void *param, uint64_t loaded_value) {
    printf("Target Function 328: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func329(void *param, uint64_t loaded_value) {
    printf("Target Function 329: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func330(void *param, uint64_t loaded_value) {
    printf("Target Function 330: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func331(void *param, uint64_t loaded_value) {
    printf("Target Function 331: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func332(void *param, uint64_t loaded_value) {
    printf("Target Function 332: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func333(void *param, uint64_t loaded_value) {
    printf("Target Function 333: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func334(void *param, uint64_t loaded_value) {
    printf("Target Function 334: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func335(void *param, uint64_t loaded_value) {
    printf("Target Function 335: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func336(void *param, uint64_t loaded_value) {
    printf("Target Function 336: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func337(void *param, uint64_t loaded_value) {
    printf("Target Function 337: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func338(void *param, uint64_t loaded_value) {
    printf("Target Function 338: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func339(void *param, uint64_t loaded_value) {
    printf("Target Function 339: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func340(void *param, uint64_t loaded_value) {
    printf("Target Function 340: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func341(void *param, uint64_t loaded_value) {
    printf("Target Function 341: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func342(void *param, uint64_t loaded_value) {
    printf("Target Function 342: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func343(void *param, uint64_t loaded_value) {
    printf("Target Function 343: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func344(void *param, uint64_t loaded_value) {
    printf("Target Function 344: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func345(void *param, uint64_t loaded_value) {
    printf("Target Function 345: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func346(void *param, uint64_t loaded_value) {
    printf("Target Function 346: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func347(void *param, uint64_t loaded_value) {
    printf("Target Function 347: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func348(void *param, uint64_t loaded_value) {
    printf("Target Function 348: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func349(void *param, uint64_t loaded_value) {
    printf("Target Function 349: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func350(void *param, uint64_t loaded_value) {
    printf("Target Function 350: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func351(void *param, uint64_t loaded_value) {
    printf("Target Function 351: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func352(void *param, uint64_t loaded_value) {
    printf("Target Function 352: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func353(void *param, uint64_t loaded_value) {
    printf("Target Function 353: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func354(void *param, uint64_t loaded_value) {
    printf("Target Function 354: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func355(void *param, uint64_t loaded_value) {
    printf("Target Function 355: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func356(void *param, uint64_t loaded_value) {
    printf("Target Function 356: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func357(void *param, uint64_t loaded_value) {
    printf("Target Function 357: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func358(void *param, uint64_t loaded_value) {
    printf("Target Function 358: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func359(void *param, uint64_t loaded_value) {
    printf("Target Function 359: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func360(void *param, uint64_t loaded_value) {
    printf("Target Function 360: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func361(void *param, uint64_t loaded_value) {
    printf("Target Function 361: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func362(void *param, uint64_t loaded_value) {
    printf("Target Function 362: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func363(void *param, uint64_t loaded_value) {
    printf("Target Function 363: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func364(void *param, uint64_t loaded_value) {
    printf("Target Function 364: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func365(void *param, uint64_t loaded_value) {
    printf("Target Function 365: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func366(void *param, uint64_t loaded_value) {
    printf("Target Function 366: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func367(void *param, uint64_t loaded_value) {
    printf("Target Function 367: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func368(void *param, uint64_t loaded_value) {
    printf("Target Function 368: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func369(void *param, uint64_t loaded_value) {
    printf("Target Function 369: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func370(void *param, uint64_t loaded_value) {
    printf("Target Function 370: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func371(void *param, uint64_t loaded_value) {
    printf("Target Function 371: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func372(void *param, uint64_t loaded_value) {
    printf("Target Function 372: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func373(void *param, uint64_t loaded_value) {
    printf("Target Function 373: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func374(void *param, uint64_t loaded_value) {
    printf("Target Function 374: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func375(void *param, uint64_t loaded_value) {
    printf("Target Function 375: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func376(void *param, uint64_t loaded_value) {
    printf("Target Function 376: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func377(void *param, uint64_t loaded_value) {
    printf("Target Function 377: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func378(void *param, uint64_t loaded_value) {
    printf("Target Function 378: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func379(void *param, uint64_t loaded_value) {
    printf("Target Function 379: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func380(void *param, uint64_t loaded_value) {
    printf("Target Function 380: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func381(void *param, uint64_t loaded_value) {
    printf("Target Function 381: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func382(void *param, uint64_t loaded_value) {
    printf("Target Function 382: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func383(void *param, uint64_t loaded_value) {
    printf("Target Function 383: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func384(void *param, uint64_t loaded_value) {
    printf("Target Function 384: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func385(void *param, uint64_t loaded_value) {
    printf("Target Function 385: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func386(void *param, uint64_t loaded_value) {
    printf("Target Function 386: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func387(void *param, uint64_t loaded_value) {
    printf("Target Function 387: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func388(void *param, uint64_t loaded_value) {
    printf("Target Function 388: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func389(void *param, uint64_t loaded_value) {
    printf("Target Function 389: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func390(void *param, uint64_t loaded_value) {
    printf("Target Function 390: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func391(void *param, uint64_t loaded_value) {
    printf("Target Function 391: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func392(void *param, uint64_t loaded_value) {
    printf("Target Function 392: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func393(void *param, uint64_t loaded_value) {
    printf("Target Function 393: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func394(void *param, uint64_t loaded_value) {
    printf("Target Function 394: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func395(void *param, uint64_t loaded_value) {
    printf("Target Function 395: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func396(void *param, uint64_t loaded_value) {
    printf("Target Function 396: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func397(void *param, uint64_t loaded_value) {
    printf("Target Function 397: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func398(void *param, uint64_t loaded_value) {
    printf("Target Function 398: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func399(void *param, uint64_t loaded_value) {
    printf("Target Function 399: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func400(void *param, uint64_t loaded_value) {
    printf("Target Function 400: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func401(void *param, uint64_t loaded_value) {
    printf("Target Function 401: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func402(void *param, uint64_t loaded_value) {
    printf("Target Function 402: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func403(void *param, uint64_t loaded_value) {
    printf("Target Function 403: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func404(void *param, uint64_t loaded_value) {
    printf("Target Function 404: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func405(void *param, uint64_t loaded_value) {
    printf("Target Function 405: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func406(void *param, uint64_t loaded_value) {
    printf("Target Function 406: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func407(void *param, uint64_t loaded_value) {
    printf("Target Function 407: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func408(void *param, uint64_t loaded_value) {
    printf("Target Function 408: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func409(void *param, uint64_t loaded_value) {
    printf("Target Function 409: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func410(void *param, uint64_t loaded_value) {
    printf("Target Function 410: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func411(void *param, uint64_t loaded_value) {
    printf("Target Function 411: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func412(void *param, uint64_t loaded_value) {
    printf("Target Function 412: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func413(void *param, uint64_t loaded_value) {
    printf("Target Function 413: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func414(void *param, uint64_t loaded_value) {
    printf("Target Function 414: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func415(void *param, uint64_t loaded_value) {
    printf("Target Function 415: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func416(void *param, uint64_t loaded_value) {
    printf("Target Function 416: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func417(void *param, uint64_t loaded_value) {
    printf("Target Function 417: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func418(void *param, uint64_t loaded_value) {
    printf("Target Function 418: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func419(void *param, uint64_t loaded_value) {
    printf("Target Function 419: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func420(void *param, uint64_t loaded_value) {
    printf("Target Function 420: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func421(void *param, uint64_t loaded_value) {
    printf("Target Function 421: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func422(void *param, uint64_t loaded_value) {
    printf("Target Function 422: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func423(void *param, uint64_t loaded_value) {
    printf("Target Function 423: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func424(void *param, uint64_t loaded_value) {
    printf("Target Function 424: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func425(void *param, uint64_t loaded_value) {
    printf("Target Function 425: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func426(void *param, uint64_t loaded_value) {
    printf("Target Function 426: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func427(void *param, uint64_t loaded_value) {
    printf("Target Function 427: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func428(void *param, uint64_t loaded_value) {
    printf("Target Function 428: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func429(void *param, uint64_t loaded_value) {
    printf("Target Function 429: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func430(void *param, uint64_t loaded_value) {
    printf("Target Function 430: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func431(void *param, uint64_t loaded_value) {
    printf("Target Function 431: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func432(void *param, uint64_t loaded_value) {
    printf("Target Function 432: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func433(void *param, uint64_t loaded_value) {
    printf("Target Function 433: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func434(void *param, uint64_t loaded_value) {
    printf("Target Function 434: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func435(void *param, uint64_t loaded_value) {
    printf("Target Function 435: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func436(void *param, uint64_t loaded_value) {
    printf("Target Function 436: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func437(void *param, uint64_t loaded_value) {
    printf("Target Function 437: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func438(void *param, uint64_t loaded_value) {
    printf("Target Function 438: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func439(void *param, uint64_t loaded_value) {
    printf("Target Function 439: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func440(void *param, uint64_t loaded_value) {
    printf("Target Function 440: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func441(void *param, uint64_t loaded_value) {
    printf("Target Function 441: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func442(void *param, uint64_t loaded_value) {
    printf("Target Function 442: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func443(void *param, uint64_t loaded_value) {
    printf("Target Function 443: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func444(void *param, uint64_t loaded_value) {
    printf("Target Function 444: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func445(void *param, uint64_t loaded_value) {
    printf("Target Function 445: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func446(void *param, uint64_t loaded_value) {
    printf("Target Function 446: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func447(void *param, uint64_t loaded_value) {
    printf("Target Function 447: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func448(void *param, uint64_t loaded_value) {
    printf("Target Function 448: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func449(void *param, uint64_t loaded_value) {
    printf("Target Function 449: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func450(void *param, uint64_t loaded_value) {
    printf("Target Function 450: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func451(void *param, uint64_t loaded_value) {
    printf("Target Function 451: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func452(void *param, uint64_t loaded_value) {
    printf("Target Function 452: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func453(void *param, uint64_t loaded_value) {
    printf("Target Function 453: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func454(void *param, uint64_t loaded_value) {
    printf("Target Function 454: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func455(void *param, uint64_t loaded_value) {
    printf("Target Function 455: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func456(void *param, uint64_t loaded_value) {
    printf("Target Function 456: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func457(void *param, uint64_t loaded_value) {
    printf("Target Function 457: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func458(void *param, uint64_t loaded_value) {
    printf("Target Function 458: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func459(void *param, uint64_t loaded_value) {
    printf("Target Function 459: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func460(void *param, uint64_t loaded_value) {
    printf("Target Function 460: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func461(void *param, uint64_t loaded_value) {
    printf("Target Function 461: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func462(void *param, uint64_t loaded_value) {
    printf("Target Function 462: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func463(void *param, uint64_t loaded_value) {
    printf("Target Function 463: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func464(void *param, uint64_t loaded_value) {
    printf("Target Function 464: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func465(void *param, uint64_t loaded_value) {
    printf("Target Function 465: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func466(void *param, uint64_t loaded_value) {
    printf("Target Function 466: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func467(void *param, uint64_t loaded_value) {
    printf("Target Function 467: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func468(void *param, uint64_t loaded_value) {
    printf("Target Function 468: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func469(void *param, uint64_t loaded_value) {
    printf("Target Function 469: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func470(void *param, uint64_t loaded_value) {
    printf("Target Function 470: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func471(void *param, uint64_t loaded_value) {
    printf("Target Function 471: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func472(void *param, uint64_t loaded_value) {
    printf("Target Function 472: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func473(void *param, uint64_t loaded_value) {
    printf("Target Function 473: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func474(void *param, uint64_t loaded_value) {
    printf("Target Function 474: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func475(void *param, uint64_t loaded_value) {
    printf("Target Function 475: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func476(void *param, uint64_t loaded_value) {
    printf("Target Function 476: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func477(void *param, uint64_t loaded_value) {
    printf("Target Function 477: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func478(void *param, uint64_t loaded_value) {
    printf("Target Function 478: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func479(void *param, uint64_t loaded_value) {
    printf("Target Function 479: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func480(void *param, uint64_t loaded_value) {
    printf("Target Function 480: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func481(void *param, uint64_t loaded_value) {
    printf("Target Function 481: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func482(void *param, uint64_t loaded_value) {
    printf("Target Function 482: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func483(void *param, uint64_t loaded_value) {
    printf("Target Function 483: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func484(void *param, uint64_t loaded_value) {
    printf("Target Function 484: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func485(void *param, uint64_t loaded_value) {
    printf("Target Function 485: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func486(void *param, uint64_t loaded_value) {
    printf("Target Function 486: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func487(void *param, uint64_t loaded_value) {
    printf("Target Function 487: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func488(void *param, uint64_t loaded_value) {
    printf("Target Function 488: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func489(void *param, uint64_t loaded_value) {
    printf("Target Function 489: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func490(void *param, uint64_t loaded_value) {
    printf("Target Function 490: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func491(void *param, uint64_t loaded_value) {
    printf("Target Function 491: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func492(void *param, uint64_t loaded_value) {
    printf("Target Function 492: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func493(void *param, uint64_t loaded_value) {
    printf("Target Function 493: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func494(void *param, uint64_t loaded_value) {
    printf("Target Function 494: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func495(void *param, uint64_t loaded_value) {
    printf("Target Function 495: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func496(void *param, uint64_t loaded_value) {
    printf("Target Function 496: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func497(void *param, uint64_t loaded_value) {
    printf("Target Function 497: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func498(void *param, uint64_t loaded_value) {
    printf("Target Function 498: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func499(void *param, uint64_t loaded_value) {
    printf("Target Function 499: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func500(void *param, uint64_t loaded_value) {
    printf("Target Function 500: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func501(void *param, uint64_t loaded_value) {
    printf("Target Function 501: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func502(void *param, uint64_t loaded_value) {
    printf("Target Function 502: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func503(void *param, uint64_t loaded_value) {
    printf("Target Function 503: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func504(void *param, uint64_t loaded_value) {
    printf("Target Function 504: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func505(void *param, uint64_t loaded_value) {
    printf("Target Function 505: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func506(void *param, uint64_t loaded_value) {
    printf("Target Function 506: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func507(void *param, uint64_t loaded_value) {
    printf("Target Function 507: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func508(void *param, uint64_t loaded_value) {
    printf("Target Function 508: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func509(void *param, uint64_t loaded_value) {
    printf("Target Function 509: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func510(void *param, uint64_t loaded_value) {
    printf("Target Function 510: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func511(void *param, uint64_t loaded_value) {
    printf("Target Function 511: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func512(void *param, uint64_t loaded_value) {
    printf("Target Function 512: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func513(void *param, uint64_t loaded_value) {
    printf("Target Function 513: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func514(void *param, uint64_t loaded_value) {
    printf("Target Function 514: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func515(void *param, uint64_t loaded_value) {
    printf("Target Function 515: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func516(void *param, uint64_t loaded_value) {
    printf("Target Function 516: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func517(void *param, uint64_t loaded_value) {
    printf("Target Function 517: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func518(void *param, uint64_t loaded_value) {
    printf("Target Function 518: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func519(void *param, uint64_t loaded_value) {
    printf("Target Function 519: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func520(void *param, uint64_t loaded_value) {
    printf("Target Function 520: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func521(void *param, uint64_t loaded_value) {
    printf("Target Function 521: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func522(void *param, uint64_t loaded_value) {
    printf("Target Function 522: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func523(void *param, uint64_t loaded_value) {
    printf("Target Function 523: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func524(void *param, uint64_t loaded_value) {
    printf("Target Function 524: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func525(void *param, uint64_t loaded_value) {
    printf("Target Function 525: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func526(void *param, uint64_t loaded_value) {
    printf("Target Function 526: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func527(void *param, uint64_t loaded_value) {
    printf("Target Function 527: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func528(void *param, uint64_t loaded_value) {
    printf("Target Function 528: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func529(void *param, uint64_t loaded_value) {
    printf("Target Function 529: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func530(void *param, uint64_t loaded_value) {
    printf("Target Function 530: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func531(void *param, uint64_t loaded_value) {
    printf("Target Function 531: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func532(void *param, uint64_t loaded_value) {
    printf("Target Function 532: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func533(void *param, uint64_t loaded_value) {
    printf("Target Function 533: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func534(void *param, uint64_t loaded_value) {
    printf("Target Function 534: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func535(void *param, uint64_t loaded_value) {
    printf("Target Function 535: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func536(void *param, uint64_t loaded_value) {
    printf("Target Function 536: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func537(void *param, uint64_t loaded_value) {
    printf("Target Function 537: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func538(void *param, uint64_t loaded_value) {
    printf("Target Function 538: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func539(void *param, uint64_t loaded_value) {
    printf("Target Function 539: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func540(void *param, uint64_t loaded_value) {
    printf("Target Function 540: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func541(void *param, uint64_t loaded_value) {
    printf("Target Function 541: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func542(void *param, uint64_t loaded_value) {
    printf("Target Function 542: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func543(void *param, uint64_t loaded_value) {
    printf("Target Function 543: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func544(void *param, uint64_t loaded_value) {
    printf("Target Function 544: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func545(void *param, uint64_t loaded_value) {
    printf("Target Function 545: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func546(void *param, uint64_t loaded_value) {
    printf("Target Function 546: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func547(void *param, uint64_t loaded_value) {
    printf("Target Function 547: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func548(void *param, uint64_t loaded_value) {
    printf("Target Function 548: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func549(void *param, uint64_t loaded_value) {
    printf("Target Function 549: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func550(void *param, uint64_t loaded_value) {
    printf("Target Function 550: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func551(void *param, uint64_t loaded_value) {
    printf("Target Function 551: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func552(void *param, uint64_t loaded_value) {
    printf("Target Function 552: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func553(void *param, uint64_t loaded_value) {
    printf("Target Function 553: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func554(void *param, uint64_t loaded_value) {
    printf("Target Function 554: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func555(void *param, uint64_t loaded_value) {
    printf("Target Function 555: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func556(void *param, uint64_t loaded_value) {
    printf("Target Function 556: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func557(void *param, uint64_t loaded_value) {
    printf("Target Function 557: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func558(void *param, uint64_t loaded_value) {
    printf("Target Function 558: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func559(void *param, uint64_t loaded_value) {
    printf("Target Function 559: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func560(void *param, uint64_t loaded_value) {
    printf("Target Function 560: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func561(void *param, uint64_t loaded_value) {
    printf("Target Function 561: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func562(void *param, uint64_t loaded_value) {
    printf("Target Function 562: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func563(void *param, uint64_t loaded_value) {
    printf("Target Function 563: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func564(void *param, uint64_t loaded_value) {
    printf("Target Function 564: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func565(void *param, uint64_t loaded_value) {
    printf("Target Function 565: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func566(void *param, uint64_t loaded_value) {
    printf("Target Function 566: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func567(void *param, uint64_t loaded_value) {
    printf("Target Function 567: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func568(void *param, uint64_t loaded_value) {
    printf("Target Function 568: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func569(void *param, uint64_t loaded_value) {
    printf("Target Function 569: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func570(void *param, uint64_t loaded_value) {
    printf("Target Function 570: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func571(void *param, uint64_t loaded_value) {
    printf("Target Function 571: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func572(void *param, uint64_t loaded_value) {
    printf("Target Function 572: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func573(void *param, uint64_t loaded_value) {
    printf("Target Function 573: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func574(void *param, uint64_t loaded_value) {
    printf("Target Function 574: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func575(void *param, uint64_t loaded_value) {
    printf("Target Function 575: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func576(void *param, uint64_t loaded_value) {
    printf("Target Function 576: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func577(void *param, uint64_t loaded_value) {
    printf("Target Function 577: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func578(void *param, uint64_t loaded_value) {
    printf("Target Function 578: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func579(void *param, uint64_t loaded_value) {
    printf("Target Function 579: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func580(void *param, uint64_t loaded_value) {
    printf("Target Function 580: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func581(void *param, uint64_t loaded_value) {
    printf("Target Function 581: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func582(void *param, uint64_t loaded_value) {
    printf("Target Function 582: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func583(void *param, uint64_t loaded_value) {
    printf("Target Function 583: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func584(void *param, uint64_t loaded_value) {
    printf("Target Function 584: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func585(void *param, uint64_t loaded_value) {
    printf("Target Function 585: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func586(void *param, uint64_t loaded_value) {
    printf("Target Function 586: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func587(void *param, uint64_t loaded_value) {
    printf("Target Function 587: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func588(void *param, uint64_t loaded_value) {
    printf("Target Function 588: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func589(void *param, uint64_t loaded_value) {
    printf("Target Function 589: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func590(void *param, uint64_t loaded_value) {
    printf("Target Function 590: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func591(void *param, uint64_t loaded_value) {
    printf("Target Function 591: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func592(void *param, uint64_t loaded_value) {
    printf("Target Function 592: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func593(void *param, uint64_t loaded_value) {
    printf("Target Function 593: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func594(void *param, uint64_t loaded_value) {
    printf("Target Function 594: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func595(void *param, uint64_t loaded_value) {
    printf("Target Function 595: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func596(void *param, uint64_t loaded_value) {
    printf("Target Function 596: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func597(void *param, uint64_t loaded_value) {
    printf("Target Function 597: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func598(void *param, uint64_t loaded_value) {
    printf("Target Function 598: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func599(void *param, uint64_t loaded_value) {
    printf("Target Function 599: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func600(void *param, uint64_t loaded_value) {
    printf("Target Function 600: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func601(void *param, uint64_t loaded_value) {
    printf("Target Function 601: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func602(void *param, uint64_t loaded_value) {
    printf("Target Function 602: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func603(void *param, uint64_t loaded_value) {
    printf("Target Function 603: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func604(void *param, uint64_t loaded_value) {
    printf("Target Function 604: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func605(void *param, uint64_t loaded_value) {
    printf("Target Function 605: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func606(void *param, uint64_t loaded_value) {
    printf("Target Function 606: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func607(void *param, uint64_t loaded_value) {
    printf("Target Function 607: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func608(void *param, uint64_t loaded_value) {
    printf("Target Function 608: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func609(void *param, uint64_t loaded_value) {
    printf("Target Function 609: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func610(void *param, uint64_t loaded_value) {
    printf("Target Function 610: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func611(void *param, uint64_t loaded_value) {
    printf("Target Function 611: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func612(void *param, uint64_t loaded_value) {
    printf("Target Function 612: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func613(void *param, uint64_t loaded_value) {
    printf("Target Function 613: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func614(void *param, uint64_t loaded_value) {
    printf("Target Function 614: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func615(void *param, uint64_t loaded_value) {
    printf("Target Function 615: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func616(void *param, uint64_t loaded_value) {
    printf("Target Function 616: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func617(void *param, uint64_t loaded_value) {
    printf("Target Function 617: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func618(void *param, uint64_t loaded_value) {
    printf("Target Function 618: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func619(void *param, uint64_t loaded_value) {
    printf("Target Function 619: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func620(void *param, uint64_t loaded_value) {
    printf("Target Function 620: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func621(void *param, uint64_t loaded_value) {
    printf("Target Function 621: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func622(void *param, uint64_t loaded_value) {
    printf("Target Function 622: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func623(void *param, uint64_t loaded_value) {
    printf("Target Function 623: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func624(void *param, uint64_t loaded_value) {
    printf("Target Function 624: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func625(void *param, uint64_t loaded_value) {
    printf("Target Function 625: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func626(void *param, uint64_t loaded_value) {
    printf("Target Function 626: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func627(void *param, uint64_t loaded_value) {
    printf("Target Function 627: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func628(void *param, uint64_t loaded_value) {
    printf("Target Function 628: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func629(void *param, uint64_t loaded_value) {
    printf("Target Function 629: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func630(void *param, uint64_t loaded_value) {
    printf("Target Function 630: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func631(void *param, uint64_t loaded_value) {
    printf("Target Function 631: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func632(void *param, uint64_t loaded_value) {
    printf("Target Function 632: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func633(void *param, uint64_t loaded_value) {
    printf("Target Function 633: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func634(void *param, uint64_t loaded_value) {
    printf("Target Function 634: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func635(void *param, uint64_t loaded_value) {
    printf("Target Function 635: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func636(void *param, uint64_t loaded_value) {
    printf("Target Function 636: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func637(void *param, uint64_t loaded_value) {
    printf("Target Function 637: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func638(void *param, uint64_t loaded_value) {
    printf("Target Function 638: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func639(void *param, uint64_t loaded_value) {
    printf("Target Function 639: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func640(void *param, uint64_t loaded_value) {
    printf("Target Function 640: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func641(void *param, uint64_t loaded_value) {
    printf("Target Function 641: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func642(void *param, uint64_t loaded_value) {
    printf("Target Function 642: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func643(void *param, uint64_t loaded_value) {
    printf("Target Function 643: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func644(void *param, uint64_t loaded_value) {
    printf("Target Function 644: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func645(void *param, uint64_t loaded_value) {
    printf("Target Function 645: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func646(void *param, uint64_t loaded_value) {
    printf("Target Function 646: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func647(void *param, uint64_t loaded_value) {
    printf("Target Function 647: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func648(void *param, uint64_t loaded_value) {
    printf("Target Function 648: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func649(void *param, uint64_t loaded_value) {
    printf("Target Function 649: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func650(void *param, uint64_t loaded_value) {
    printf("Target Function 650: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func651(void *param, uint64_t loaded_value) {
    printf("Target Function 651: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func652(void *param, uint64_t loaded_value) {
    printf("Target Function 652: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func653(void *param, uint64_t loaded_value) {
    printf("Target Function 653: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func654(void *param, uint64_t loaded_value) {
    printf("Target Function 654: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func655(void *param, uint64_t loaded_value) {
    printf("Target Function 655: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func656(void *param, uint64_t loaded_value) {
    printf("Target Function 656: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func657(void *param, uint64_t loaded_value) {
    printf("Target Function 657: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func658(void *param, uint64_t loaded_value) {
    printf("Target Function 658: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func659(void *param, uint64_t loaded_value) {
    printf("Target Function 659: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func660(void *param, uint64_t loaded_value) {
    printf("Target Function 660: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func661(void *param, uint64_t loaded_value) {
    printf("Target Function 661: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func662(void *param, uint64_t loaded_value) {
    printf("Target Function 662: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func663(void *param, uint64_t loaded_value) {
    printf("Target Function 663: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func664(void *param, uint64_t loaded_value) {
    printf("Target Function 664: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func665(void *param, uint64_t loaded_value) {
    printf("Target Function 665: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func666(void *param, uint64_t loaded_value) {
    printf("Target Function 666: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func667(void *param, uint64_t loaded_value) {
    printf("Target Function 667: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func668(void *param, uint64_t loaded_value) {
    printf("Target Function 668: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func669(void *param, uint64_t loaded_value) {
    printf("Target Function 669: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func670(void *param, uint64_t loaded_value) {
    printf("Target Function 670: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func671(void *param, uint64_t loaded_value) {
    printf("Target Function 671: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func672(void *param, uint64_t loaded_value) {
    printf("Target Function 672: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func673(void *param, uint64_t loaded_value) {
    printf("Target Function 673: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func674(void *param, uint64_t loaded_value) {
    printf("Target Function 674: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func675(void *param, uint64_t loaded_value) {
    printf("Target Function 675: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func676(void *param, uint64_t loaded_value) {
    printf("Target Function 676: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func677(void *param, uint64_t loaded_value) {
    printf("Target Function 677: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func678(void *param, uint64_t loaded_value) {
    printf("Target Function 678: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func679(void *param, uint64_t loaded_value) {
    printf("Target Function 679: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func680(void *param, uint64_t loaded_value) {
    printf("Target Function 680: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func681(void *param, uint64_t loaded_value) {
    printf("Target Function 681: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func682(void *param, uint64_t loaded_value) {
    printf("Target Function 682: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func683(void *param, uint64_t loaded_value) {
    printf("Target Function 683: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func684(void *param, uint64_t loaded_value) {
    printf("Target Function 684: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func685(void *param, uint64_t loaded_value) {
    printf("Target Function 685: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func686(void *param, uint64_t loaded_value) {
    printf("Target Function 686: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func687(void *param, uint64_t loaded_value) {
    printf("Target Function 687: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func688(void *param, uint64_t loaded_value) {
    printf("Target Function 688: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func689(void *param, uint64_t loaded_value) {
    printf("Target Function 689: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func690(void *param, uint64_t loaded_value) {
    printf("Target Function 690: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func691(void *param, uint64_t loaded_value) {
    printf("Target Function 691: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func692(void *param, uint64_t loaded_value) {
    printf("Target Function 692: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func693(void *param, uint64_t loaded_value) {
    printf("Target Function 693: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func694(void *param, uint64_t loaded_value) {
    printf("Target Function 694: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func695(void *param, uint64_t loaded_value) {
    printf("Target Function 695: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func696(void *param, uint64_t loaded_value) {
    printf("Target Function 696: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func697(void *param, uint64_t loaded_value) {
    printf("Target Function 697: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func698(void *param, uint64_t loaded_value) {
    printf("Target Function 698: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func699(void *param, uint64_t loaded_value) {
    printf("Target Function 699: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func700(void *param, uint64_t loaded_value) {
    printf("Target Function 700: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func701(void *param, uint64_t loaded_value) {
    printf("Target Function 701: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func702(void *param, uint64_t loaded_value) {
    printf("Target Function 702: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func703(void *param, uint64_t loaded_value) {
    printf("Target Function 703: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func704(void *param, uint64_t loaded_value) {
    printf("Target Function 704: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func705(void *param, uint64_t loaded_value) {
    printf("Target Function 705: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func706(void *param, uint64_t loaded_value) {
    printf("Target Function 706: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func707(void *param, uint64_t loaded_value) {
    printf("Target Function 707: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func708(void *param, uint64_t loaded_value) {
    printf("Target Function 708: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func709(void *param, uint64_t loaded_value) {
    printf("Target Function 709: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func710(void *param, uint64_t loaded_value) {
    printf("Target Function 710: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func711(void *param, uint64_t loaded_value) {
    printf("Target Function 711: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func712(void *param, uint64_t loaded_value) {
    printf("Target Function 712: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func713(void *param, uint64_t loaded_value) {
    printf("Target Function 713: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func714(void *param, uint64_t loaded_value) {
    printf("Target Function 714: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func715(void *param, uint64_t loaded_value) {
    printf("Target Function 715: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func716(void *param, uint64_t loaded_value) {
    printf("Target Function 716: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func717(void *param, uint64_t loaded_value) {
    printf("Target Function 717: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func718(void *param, uint64_t loaded_value) {
    printf("Target Function 718: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func719(void *param, uint64_t loaded_value) {
    printf("Target Function 719: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func720(void *param, uint64_t loaded_value) {
    printf("Target Function 720: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func721(void *param, uint64_t loaded_value) {
    printf("Target Function 721: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func722(void *param, uint64_t loaded_value) {
    printf("Target Function 722: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func723(void *param, uint64_t loaded_value) {
    printf("Target Function 723: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func724(void *param, uint64_t loaded_value) {
    printf("Target Function 724: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func725(void *param, uint64_t loaded_value) {
    printf("Target Function 725: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func726(void *param, uint64_t loaded_value) {
    printf("Target Function 726: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func727(void *param, uint64_t loaded_value) {
    printf("Target Function 727: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func728(void *param, uint64_t loaded_value) {
    printf("Target Function 728: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func729(void *param, uint64_t loaded_value) {
    printf("Target Function 729: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func730(void *param, uint64_t loaded_value) {
    printf("Target Function 730: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func731(void *param, uint64_t loaded_value) {
    printf("Target Function 731: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func732(void *param, uint64_t loaded_value) {
    printf("Target Function 732: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func733(void *param, uint64_t loaded_value) {
    printf("Target Function 733: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func734(void *param, uint64_t loaded_value) {
    printf("Target Function 734: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func735(void *param, uint64_t loaded_value) {
    printf("Target Function 735: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func736(void *param, uint64_t loaded_value) {
    printf("Target Function 736: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func737(void *param, uint64_t loaded_value) {
    printf("Target Function 737: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func738(void *param, uint64_t loaded_value) {
    printf("Target Function 738: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func739(void *param, uint64_t loaded_value) {
    printf("Target Function 739: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func740(void *param, uint64_t loaded_value) {
    printf("Target Function 740: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func741(void *param, uint64_t loaded_value) {
    printf("Target Function 741: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func742(void *param, uint64_t loaded_value) {
    printf("Target Function 742: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func743(void *param, uint64_t loaded_value) {
    printf("Target Function 743: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func744(void *param, uint64_t loaded_value) {
    printf("Target Function 744: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func745(void *param, uint64_t loaded_value) {
    printf("Target Function 745: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func746(void *param, uint64_t loaded_value) {
    printf("Target Function 746: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func747(void *param, uint64_t loaded_value) {
    printf("Target Function 747: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func748(void *param, uint64_t loaded_value) {
    printf("Target Function 748: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func749(void *param, uint64_t loaded_value) {
    printf("Target Function 749: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func750(void *param, uint64_t loaded_value) {
    printf("Target Function 750: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func751(void *param, uint64_t loaded_value) {
    printf("Target Function 751: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func752(void *param, uint64_t loaded_value) {
    printf("Target Function 752: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func753(void *param, uint64_t loaded_value) {
    printf("Target Function 753: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func754(void *param, uint64_t loaded_value) {
    printf("Target Function 754: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func755(void *param, uint64_t loaded_value) {
    printf("Target Function 755: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func756(void *param, uint64_t loaded_value) {
    printf("Target Function 756: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func757(void *param, uint64_t loaded_value) {
    printf("Target Function 757: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func758(void *param, uint64_t loaded_value) {
    printf("Target Function 758: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func759(void *param, uint64_t loaded_value) {
    printf("Target Function 759: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func760(void *param, uint64_t loaded_value) {
    printf("Target Function 760: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func761(void *param, uint64_t loaded_value) {
    printf("Target Function 761: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func762(void *param, uint64_t loaded_value) {
    printf("Target Function 762: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func763(void *param, uint64_t loaded_value) {
    printf("Target Function 763: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func764(void *param, uint64_t loaded_value) {
    printf("Target Function 764: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func765(void *param, uint64_t loaded_value) {
    printf("Target Function 765: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func766(void *param, uint64_t loaded_value) {
    printf("Target Function 766: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func767(void *param, uint64_t loaded_value) {
    printf("Target Function 767: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func768(void *param, uint64_t loaded_value) {
    printf("Target Function 768: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func769(void *param, uint64_t loaded_value) {
    printf("Target Function 769: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func770(void *param, uint64_t loaded_value) {
    printf("Target Function 770: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func771(void *param, uint64_t loaded_value) {
    printf("Target Function 771: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func772(void *param, uint64_t loaded_value) {
    printf("Target Function 772: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func773(void *param, uint64_t loaded_value) {
    printf("Target Function 773: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func774(void *param, uint64_t loaded_value) {
    printf("Target Function 774: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func775(void *param, uint64_t loaded_value) {
    printf("Target Function 775: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func776(void *param, uint64_t loaded_value) {
    printf("Target Function 776: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func777(void *param, uint64_t loaded_value) {
    printf("Target Function 777: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func778(void *param, uint64_t loaded_value) {
    printf("Target Function 778: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func779(void *param, uint64_t loaded_value) {
    printf("Target Function 779: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func780(void *param, uint64_t loaded_value) {
    printf("Target Function 780: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func781(void *param, uint64_t loaded_value) {
    printf("Target Function 781: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func782(void *param, uint64_t loaded_value) {
    printf("Target Function 782: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func783(void *param, uint64_t loaded_value) {
    printf("Target Function 783: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func784(void *param, uint64_t loaded_value) {
    printf("Target Function 784: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func785(void *param, uint64_t loaded_value) {
    printf("Target Function 785: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func786(void *param, uint64_t loaded_value) {
    printf("Target Function 786: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func787(void *param, uint64_t loaded_value) {
    printf("Target Function 787: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func788(void *param, uint64_t loaded_value) {
    printf("Target Function 788: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func789(void *param, uint64_t loaded_value) {
    printf("Target Function 789: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func790(void *param, uint64_t loaded_value) {
    printf("Target Function 790: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func791(void *param, uint64_t loaded_value) {
    printf("Target Function 791: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func792(void *param, uint64_t loaded_value) {
    printf("Target Function 792: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func793(void *param, uint64_t loaded_value) {
    printf("Target Function 793: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func794(void *param, uint64_t loaded_value) {
    printf("Target Function 794: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func795(void *param, uint64_t loaded_value) {
    printf("Target Function 795: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func796(void *param, uint64_t loaded_value) {
    printf("Target Function 796: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func797(void *param, uint64_t loaded_value) {
    printf("Target Function 797: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func798(void *param, uint64_t loaded_value) {
    printf("Target Function 798: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func799(void *param, uint64_t loaded_value) {
    printf("Target Function 799: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func800(void *param, uint64_t loaded_value) {
    printf("Target Function 800: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func801(void *param, uint64_t loaded_value) {
    printf("Target Function 801: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func802(void *param, uint64_t loaded_value) {
    printf("Target Function 802: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func803(void *param, uint64_t loaded_value) {
    printf("Target Function 803: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func804(void *param, uint64_t loaded_value) {
    printf("Target Function 804: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func805(void *param, uint64_t loaded_value) {
    printf("Target Function 805: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func806(void *param, uint64_t loaded_value) {
    printf("Target Function 806: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func807(void *param, uint64_t loaded_value) {
    printf("Target Function 807: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func808(void *param, uint64_t loaded_value) {
    printf("Target Function 808: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func809(void *param, uint64_t loaded_value) {
    printf("Target Function 809: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func810(void *param, uint64_t loaded_value) {
    printf("Target Function 810: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func811(void *param, uint64_t loaded_value) {
    printf("Target Function 811: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func812(void *param, uint64_t loaded_value) {
    printf("Target Function 812: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func813(void *param, uint64_t loaded_value) {
    printf("Target Function 813: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func814(void *param, uint64_t loaded_value) {
    printf("Target Function 814: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func815(void *param, uint64_t loaded_value) {
    printf("Target Function 815: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func816(void *param, uint64_t loaded_value) {
    printf("Target Function 816: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func817(void *param, uint64_t loaded_value) {
    printf("Target Function 817: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func818(void *param, uint64_t loaded_value) {
    printf("Target Function 818: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func819(void *param, uint64_t loaded_value) {
    printf("Target Function 819: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func820(void *param, uint64_t loaded_value) {
    printf("Target Function 820: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func821(void *param, uint64_t loaded_value) {
    printf("Target Function 821: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func822(void *param, uint64_t loaded_value) {
    printf("Target Function 822: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func823(void *param, uint64_t loaded_value) {
    printf("Target Function 823: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func824(void *param, uint64_t loaded_value) {
    printf("Target Function 824: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func825(void *param, uint64_t loaded_value) {
    printf("Target Function 825: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func826(void *param, uint64_t loaded_value) {
    printf("Target Function 826: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func827(void *param, uint64_t loaded_value) {
    printf("Target Function 827: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func828(void *param, uint64_t loaded_value) {
    printf("Target Function 828: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func829(void *param, uint64_t loaded_value) {
    printf("Target Function 829: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func830(void *param, uint64_t loaded_value) {
    printf("Target Function 830: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func831(void *param, uint64_t loaded_value) {
    printf("Target Function 831: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func832(void *param, uint64_t loaded_value) {
    printf("Target Function 832: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func833(void *param, uint64_t loaded_value) {
    printf("Target Function 833: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func834(void *param, uint64_t loaded_value) {
    printf("Target Function 834: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func835(void *param, uint64_t loaded_value) {
    printf("Target Function 835: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func836(void *param, uint64_t loaded_value) {
    printf("Target Function 836: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func837(void *param, uint64_t loaded_value) {
    printf("Target Function 837: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func838(void *param, uint64_t loaded_value) {
    printf("Target Function 838: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func839(void *param, uint64_t loaded_value) {
    printf("Target Function 839: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func840(void *param, uint64_t loaded_value) {
    printf("Target Function 840: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func841(void *param, uint64_t loaded_value) {
    printf("Target Function 841: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func842(void *param, uint64_t loaded_value) {
    printf("Target Function 842: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func843(void *param, uint64_t loaded_value) {
    printf("Target Function 843: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func844(void *param, uint64_t loaded_value) {
    printf("Target Function 844: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func845(void *param, uint64_t loaded_value) {
    printf("Target Function 845: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func846(void *param, uint64_t loaded_value) {
    printf("Target Function 846: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func847(void *param, uint64_t loaded_value) {
    printf("Target Function 847: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func848(void *param, uint64_t loaded_value) {
    printf("Target Function 848: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func849(void *param, uint64_t loaded_value) {
    printf("Target Function 849: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func850(void *param, uint64_t loaded_value) {
    printf("Target Function 850: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func851(void *param, uint64_t loaded_value) {
    printf("Target Function 851: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func852(void *param, uint64_t loaded_value) {
    printf("Target Function 852: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func853(void *param, uint64_t loaded_value) {
    printf("Target Function 853: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func854(void *param, uint64_t loaded_value) {
    printf("Target Function 854: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func855(void *param, uint64_t loaded_value) {
    printf("Target Function 855: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func856(void *param, uint64_t loaded_value) {
    printf("Target Function 856: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func857(void *param, uint64_t loaded_value) {
    printf("Target Function 857: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func858(void *param, uint64_t loaded_value) {
    printf("Target Function 858: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func859(void *param, uint64_t loaded_value) {
    printf("Target Function 859: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func860(void *param, uint64_t loaded_value) {
    printf("Target Function 860: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func861(void *param, uint64_t loaded_value) {
    printf("Target Function 861: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func862(void *param, uint64_t loaded_value) {
    printf("Target Function 862: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func863(void *param, uint64_t loaded_value) {
    printf("Target Function 863: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func864(void *param, uint64_t loaded_value) {
    printf("Target Function 864: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func865(void *param, uint64_t loaded_value) {
    printf("Target Function 865: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func866(void *param, uint64_t loaded_value) {
    printf("Target Function 866: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func867(void *param, uint64_t loaded_value) {
    printf("Target Function 867: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func868(void *param, uint64_t loaded_value) {
    printf("Target Function 868: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func869(void *param, uint64_t loaded_value) {
    printf("Target Function 869: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func870(void *param, uint64_t loaded_value) {
    printf("Target Function 870: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func871(void *param, uint64_t loaded_value) {
    printf("Target Function 871: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func872(void *param, uint64_t loaded_value) {
    printf("Target Function 872: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func873(void *param, uint64_t loaded_value) {
    printf("Target Function 873: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func874(void *param, uint64_t loaded_value) {
    printf("Target Function 874: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func875(void *param, uint64_t loaded_value) {
    printf("Target Function 875: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func876(void *param, uint64_t loaded_value) {
    printf("Target Function 876: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func877(void *param, uint64_t loaded_value) {
    printf("Target Function 877: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func878(void *param, uint64_t loaded_value) {
    printf("Target Function 878: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func879(void *param, uint64_t loaded_value) {
    printf("Target Function 879: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func880(void *param, uint64_t loaded_value) {
    printf("Target Function 880: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func881(void *param, uint64_t loaded_value) {
    printf("Target Function 881: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func882(void *param, uint64_t loaded_value) {
    printf("Target Function 882: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func883(void *param, uint64_t loaded_value) {
    printf("Target Function 883: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func884(void *param, uint64_t loaded_value) {
    printf("Target Function 884: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func885(void *param, uint64_t loaded_value) {
    printf("Target Function 885: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func886(void *param, uint64_t loaded_value) {
    printf("Target Function 886: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func887(void *param, uint64_t loaded_value) {
    printf("Target Function 887: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func888(void *param, uint64_t loaded_value) {
    printf("Target Function 888: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func889(void *param, uint64_t loaded_value) {
    printf("Target Function 889: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func890(void *param, uint64_t loaded_value) {
    printf("Target Function 890: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func891(void *param, uint64_t loaded_value) {
    printf("Target Function 891: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func892(void *param, uint64_t loaded_value) {
    printf("Target Function 892: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func893(void *param, uint64_t loaded_value) {
    printf("Target Function 893: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func894(void *param, uint64_t loaded_value) {
    printf("Target Function 894: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func895(void *param, uint64_t loaded_value) {
    printf("Target Function 895: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func896(void *param, uint64_t loaded_value) {
    printf("Target Function 896: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func897(void *param, uint64_t loaded_value) {
    printf("Target Function 897: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func898(void *param, uint64_t loaded_value) {
    printf("Target Function 898: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func899(void *param, uint64_t loaded_value) {
    printf("Target Function 899: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func900(void *param, uint64_t loaded_value) {
    printf("Target Function 900: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func901(void *param, uint64_t loaded_value) {
    printf("Target Function 901: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func902(void *param, uint64_t loaded_value) {
    printf("Target Function 902: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func903(void *param, uint64_t loaded_value) {
    printf("Target Function 903: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func904(void *param, uint64_t loaded_value) {
    printf("Target Function 904: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func905(void *param, uint64_t loaded_value) {
    printf("Target Function 905: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func906(void *param, uint64_t loaded_value) {
    printf("Target Function 906: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func907(void *param, uint64_t loaded_value) {
    printf("Target Function 907: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func908(void *param, uint64_t loaded_value) {
    printf("Target Function 908: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func909(void *param, uint64_t loaded_value) {
    printf("Target Function 909: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func910(void *param, uint64_t loaded_value) {
    printf("Target Function 910: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func911(void *param, uint64_t loaded_value) {
    printf("Target Function 911: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func912(void *param, uint64_t loaded_value) {
    printf("Target Function 912: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func913(void *param, uint64_t loaded_value) {
    printf("Target Function 913: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func914(void *param, uint64_t loaded_value) {
    printf("Target Function 914: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func915(void *param, uint64_t loaded_value) {
    printf("Target Function 915: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func916(void *param, uint64_t loaded_value) {
    printf("Target Function 916: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func917(void *param, uint64_t loaded_value) {
    printf("Target Function 917: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func918(void *param, uint64_t loaded_value) {
    printf("Target Function 918: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func919(void *param, uint64_t loaded_value) {
    printf("Target Function 919: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func920(void *param, uint64_t loaded_value) {
    printf("Target Function 920: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func921(void *param, uint64_t loaded_value) {
    printf("Target Function 921: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func922(void *param, uint64_t loaded_value) {
    printf("Target Function 922: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func923(void *param, uint64_t loaded_value) {
    printf("Target Function 923: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func924(void *param, uint64_t loaded_value) {
    printf("Target Function 924: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func925(void *param, uint64_t loaded_value) {
    printf("Target Function 925: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func926(void *param, uint64_t loaded_value) {
    printf("Target Function 926: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func927(void *param, uint64_t loaded_value) {
    printf("Target Function 927: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func928(void *param, uint64_t loaded_value) {
    printf("Target Function 928: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func929(void *param, uint64_t loaded_value) {
    printf("Target Function 929: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func930(void *param, uint64_t loaded_value) {
    printf("Target Function 930: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func931(void *param, uint64_t loaded_value) {
    printf("Target Function 931: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func932(void *param, uint64_t loaded_value) {
    printf("Target Function 932: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func933(void *param, uint64_t loaded_value) {
    printf("Target Function 933: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func934(void *param, uint64_t loaded_value) {
    printf("Target Function 934: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func935(void *param, uint64_t loaded_value) {
    printf("Target Function 935: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func936(void *param, uint64_t loaded_value) {
    printf("Target Function 936: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func937(void *param, uint64_t loaded_value) {
    printf("Target Function 937: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func938(void *param, uint64_t loaded_value) {
    printf("Target Function 938: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func939(void *param, uint64_t loaded_value) {
    printf("Target Function 939: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func940(void *param, uint64_t loaded_value) {
    printf("Target Function 940: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func941(void *param, uint64_t loaded_value) {
    printf("Target Function 941: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func942(void *param, uint64_t loaded_value) {
    printf("Target Function 942: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func943(void *param, uint64_t loaded_value) {
    printf("Target Function 943: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func944(void *param, uint64_t loaded_value) {
    printf("Target Function 944: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func945(void *param, uint64_t loaded_value) {
    printf("Target Function 945: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func946(void *param, uint64_t loaded_value) {
    printf("Target Function 946: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func947(void *param, uint64_t loaded_value) {
    printf("Target Function 947: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func948(void *param, uint64_t loaded_value) {
    printf("Target Function 948: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func949(void *param, uint64_t loaded_value) {
    printf("Target Function 949: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func950(void *param, uint64_t loaded_value) {
    printf("Target Function 950: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func951(void *param, uint64_t loaded_value) {
    printf("Target Function 951: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func952(void *param, uint64_t loaded_value) {
    printf("Target Function 952: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func953(void *param, uint64_t loaded_value) {
    printf("Target Function 953: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func954(void *param, uint64_t loaded_value) {
    printf("Target Function 954: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func955(void *param, uint64_t loaded_value) {
    printf("Target Function 955: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func956(void *param, uint64_t loaded_value) {
    printf("Target Function 956: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func957(void *param, uint64_t loaded_value) {
    printf("Target Function 957: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func958(void *param, uint64_t loaded_value) {
    printf("Target Function 958: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func959(void *param, uint64_t loaded_value) {
    printf("Target Function 959: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func960(void *param, uint64_t loaded_value) {
    printf("Target Function 960: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func961(void *param, uint64_t loaded_value) {
    printf("Target Function 961: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func962(void *param, uint64_t loaded_value) {
    printf("Target Function 962: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func963(void *param, uint64_t loaded_value) {
    printf("Target Function 963: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func964(void *param, uint64_t loaded_value) {
    printf("Target Function 964: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func965(void *param, uint64_t loaded_value) {
    printf("Target Function 965: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func966(void *param, uint64_t loaded_value) {
    printf("Target Function 966: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func967(void *param, uint64_t loaded_value) {
    printf("Target Function 967: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func968(void *param, uint64_t loaded_value) {
    printf("Target Function 968: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func969(void *param, uint64_t loaded_value) {
    printf("Target Function 969: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func970(void *param, uint64_t loaded_value) {
    printf("Target Function 970: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func971(void *param, uint64_t loaded_value) {
    printf("Target Function 971: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func972(void *param, uint64_t loaded_value) {
    printf("Target Function 972: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func973(void *param, uint64_t loaded_value) {
    printf("Target Function 973: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func974(void *param, uint64_t loaded_value) {
    printf("Target Function 974: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func975(void *param, uint64_t loaded_value) {
    printf("Target Function 975: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func976(void *param, uint64_t loaded_value) {
    printf("Target Function 976: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func977(void *param, uint64_t loaded_value) {
    printf("Target Function 977: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func978(void *param, uint64_t loaded_value) {
    printf("Target Function 978: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func979(void *param, uint64_t loaded_value) {
    printf("Target Function 979: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func980(void *param, uint64_t loaded_value) {
    printf("Target Function 980: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func981(void *param, uint64_t loaded_value) {
    printf("Target Function 981: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func982(void *param, uint64_t loaded_value) {
    printf("Target Function 982: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func983(void *param, uint64_t loaded_value) {
    printf("Target Function 983: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func984(void *param, uint64_t loaded_value) {
    printf("Target Function 984: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func985(void *param, uint64_t loaded_value) {
    printf("Target Function 985: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func986(void *param, uint64_t loaded_value) {
    printf("Target Function 986: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func987(void *param, uint64_t loaded_value) {
    printf("Target Function 987: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func988(void *param, uint64_t loaded_value) {
    printf("Target Function 988: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func989(void *param, uint64_t loaded_value) {
    printf("Target Function 989: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func990(void *param, uint64_t loaded_value) {
    printf("Target Function 990: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func991(void *param, uint64_t loaded_value) {
    printf("Target Function 991: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func992(void *param, uint64_t loaded_value) {
    printf("Target Function 992: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func993(void *param, uint64_t loaded_value) {
    printf("Target Function 993: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func994(void *param, uint64_t loaded_value) {
    printf("Target Function 994: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func995(void *param, uint64_t loaded_value) {
    printf("Target Function 995: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func996(void *param, uint64_t loaded_value) {
    printf("Target Function 996: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func997(void *param, uint64_t loaded_value) {
    printf("Target Function 997: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func998(void *param, uint64_t loaded_value) {
    printf("Target Function 998: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func999(void *param, uint64_t loaded_value) {
    printf("Target Function 999: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}

void target_func1000(void *param, uint64_t loaded_value) {
    printf("Target Function 1000: param = %p, loaded_value = 0x%lx\n", param, loaded_value);
}


static inline void execute_full_asm_block_var1(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #1\n\t"     /* Load immediate 1 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 1 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[0]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var2(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #2\n\t"     /* Load immediate 2 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 2 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[1]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var3(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #3\n\t"     /* Load immediate 3 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 3 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[2]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var4(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #4\n\t"     /* Load immediate 4 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 4 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[3]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var5(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #5\n\t"     /* Load immediate 5 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 5 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[4]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var6(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #6\n\t"     /* Load immediate 6 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 6 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[5]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var7(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #7\n\t"     /* Load immediate 7 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 7 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[6]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var8(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #8\n\t"     /* Load immediate 8 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 8 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[7]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var9(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #9\n\t"     /* Load immediate 9 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 9 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[8]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var10(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #10\n\t"     /* Load immediate 10 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 10 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[9]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var11(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #11\n\t"     /* Load immediate 11 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 11 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[10]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var12(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #12\n\t"     /* Load immediate 12 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 12 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[11]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var13(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #13\n\t"     /* Load immediate 13 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 13 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[12]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var14(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #14\n\t"     /* Load immediate 14 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 14 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[13]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var15(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #15\n\t"     /* Load immediate 15 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 15 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[14]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var16(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #16\n\t"     /* Load immediate 16 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 16 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[15]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var17(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #17\n\t"     /* Load immediate 17 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 17 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[16]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var18(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #18\n\t"     /* Load immediate 18 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 18 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[17]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var19(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #19\n\t"     /* Load immediate 19 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 19 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[18]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var20(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #20\n\t"     /* Load immediate 20 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 20 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[19]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var21(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #21\n\t"     /* Load immediate 21 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 21 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[20]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var22(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #22\n\t"     /* Load immediate 22 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 22 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[21]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var23(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #23\n\t"     /* Load immediate 23 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 23 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[22]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var24(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #24\n\t"     /* Load immediate 24 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 24 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[23]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var25(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #25\n\t"     /* Load immediate 25 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 25 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[24]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var26(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #26\n\t"     /* Load immediate 26 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 26 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[25]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var27(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #27\n\t"     /* Load immediate 27 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 27 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[26]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var28(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #28\n\t"     /* Load immediate 28 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 28 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[27]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var29(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #29\n\t"     /* Load immediate 29 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 29 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[28]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var30(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #30\n\t"     /* Load immediate 30 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 30 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[29]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var31(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #31\n\t"     /* Load immediate 31 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 31 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[30]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var32(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #32\n\t"     /* Load immediate 32 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 32 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[31]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var33(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #33\n\t"     /* Load immediate 33 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 33 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[32]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var34(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #34\n\t"     /* Load immediate 34 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 34 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[33]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var35(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #35\n\t"     /* Load immediate 35 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 35 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[34]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var36(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #36\n\t"     /* Load immediate 36 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 36 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[35]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var37(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #37\n\t"     /* Load immediate 37 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 37 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[36]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var38(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #38\n\t"     /* Load immediate 38 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 38 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[37]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var39(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #39\n\t"     /* Load immediate 39 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 39 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[38]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var40(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #40\n\t"     /* Load immediate 40 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 40 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[39]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var41(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #41\n\t"     /* Load immediate 41 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 41 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[40]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var42(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #42\n\t"     /* Load immediate 42 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 42 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[41]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var43(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #43\n\t"     /* Load immediate 43 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 43 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[42]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var44(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #44\n\t"     /* Load immediate 44 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 44 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[43]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var45(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #45\n\t"     /* Load immediate 45 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 45 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[44]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var46(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #46\n\t"     /* Load immediate 46 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 46 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[45]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var47(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #47\n\t"     /* Load immediate 47 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 47 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[46]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var48(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #48\n\t"     /* Load immediate 48 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 48 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[47]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var49(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #49\n\t"     /* Load immediate 49 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 49 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[48]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var50(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #50\n\t"     /* Load immediate 50 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 50 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[49]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var51(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #51\n\t"     /* Load immediate 51 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 51 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[50]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var52(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #52\n\t"     /* Load immediate 52 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 52 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[51]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var53(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #53\n\t"     /* Load immediate 53 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 53 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[52]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var54(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #54\n\t"     /* Load immediate 54 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 54 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[53]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var55(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #55\n\t"     /* Load immediate 55 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 55 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[54]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var56(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #56\n\t"     /* Load immediate 56 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 56 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[55]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var57(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #57\n\t"     /* Load immediate 57 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 57 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[56]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var58(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #58\n\t"     /* Load immediate 58 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 58 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[57]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var59(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #59\n\t"     /* Load immediate 59 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 59 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[58]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var60(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #60\n\t"     /* Load immediate 60 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 60 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[59]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var61(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #61\n\t"     /* Load immediate 61 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 61 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[60]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var62(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #62\n\t"     /* Load immediate 62 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 62 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[61]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var63(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #63\n\t"     /* Load immediate 63 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 63 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[62]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var64(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #64\n\t"     /* Load immediate 64 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 64 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[63]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var65(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #65\n\t"     /* Load immediate 65 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 65 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[64]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var66(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #66\n\t"     /* Load immediate 66 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 66 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[65]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var67(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #67\n\t"     /* Load immediate 67 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 67 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[66]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var68(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #68\n\t"     /* Load immediate 68 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 68 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[67]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var69(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #69\n\t"     /* Load immediate 69 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 69 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[68]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var70(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #70\n\t"     /* Load immediate 70 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 70 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[69]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var71(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #71\n\t"     /* Load immediate 71 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 71 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[70]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var72(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #72\n\t"     /* Load immediate 72 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 72 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[71]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var73(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #73\n\t"     /* Load immediate 73 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 73 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[72]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var74(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #74\n\t"     /* Load immediate 74 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 74 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[73]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var75(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #75\n\t"     /* Load immediate 75 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 75 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[74]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var76(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #76\n\t"     /* Load immediate 76 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 76 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[75]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var77(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #77\n\t"     /* Load immediate 77 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 77 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[76]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var78(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #78\n\t"     /* Load immediate 78 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 78 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[77]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var79(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #79\n\t"     /* Load immediate 79 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 79 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[78]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var80(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #80\n\t"     /* Load immediate 80 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 80 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[79]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var81(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #81\n\t"     /* Load immediate 81 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 81 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[80]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var82(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #82\n\t"     /* Load immediate 82 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 82 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[81]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var83(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #83\n\t"     /* Load immediate 83 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 83 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[82]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var84(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #84\n\t"     /* Load immediate 84 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 84 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[83]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var85(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #85\n\t"     /* Load immediate 85 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 85 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[84]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var86(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #86\n\t"     /* Load immediate 86 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 86 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[85]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var87(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #87\n\t"     /* Load immediate 87 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 87 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[86]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var88(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #88\n\t"     /* Load immediate 88 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 88 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[87]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var89(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #89\n\t"     /* Load immediate 89 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 89 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[88]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var90(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #90\n\t"     /* Load immediate 90 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 90 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[89]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var91(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #91\n\t"     /* Load immediate 91 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 91 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[90]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var92(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #92\n\t"     /* Load immediate 92 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 92 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[91]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var93(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #93\n\t"     /* Load immediate 93 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 93 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[92]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var94(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #94\n\t"     /* Load immediate 94 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 94 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[93]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var95(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #95\n\t"     /* Load immediate 95 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 95 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[94]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var96(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #96\n\t"     /* Load immediate 96 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 96 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[95]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var97(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #97\n\t"     /* Load immediate 97 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 97 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[96]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var98(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #98\n\t"     /* Load immediate 98 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 98 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[97]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var99(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #99\n\t"     /* Load immediate 99 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 99 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[98]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var100(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #100\n\t"     /* Load immediate 100 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 100 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[99]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var101(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #101\n\t"     /* Load immediate 101 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 101 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[100]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var102(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #102\n\t"     /* Load immediate 102 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 102 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[101]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var103(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #103\n\t"     /* Load immediate 103 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 103 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[102]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var104(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #104\n\t"     /* Load immediate 104 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 104 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[103]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var105(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #105\n\t"     /* Load immediate 105 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 105 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[104]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var106(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #106\n\t"     /* Load immediate 106 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 106 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[105]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var107(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #107\n\t"     /* Load immediate 107 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 107 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[106]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var108(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #108\n\t"     /* Load immediate 108 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 108 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[107]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var109(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #109\n\t"     /* Load immediate 109 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 109 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[108]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var110(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #110\n\t"     /* Load immediate 110 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 110 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[109]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var111(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #111\n\t"     /* Load immediate 111 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 111 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[110]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var112(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #112\n\t"     /* Load immediate 112 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 112 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[111]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var113(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #113\n\t"     /* Load immediate 113 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 113 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[112]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var114(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #114\n\t"     /* Load immediate 114 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 114 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[113]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var115(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #115\n\t"     /* Load immediate 115 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 115 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[114]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var116(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #116\n\t"     /* Load immediate 116 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 116 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[115]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var117(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #117\n\t"     /* Load immediate 117 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 117 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[116]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var118(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #118\n\t"     /* Load immediate 118 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 118 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[117]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var119(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #119\n\t"     /* Load immediate 119 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 119 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[118]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var120(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #120\n\t"     /* Load immediate 120 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 120 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[119]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var121(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #121\n\t"     /* Load immediate 121 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 121 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[120]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var122(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #122\n\t"     /* Load immediate 122 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 122 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[121]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var123(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #123\n\t"     /* Load immediate 123 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 123 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[122]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var124(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #124\n\t"     /* Load immediate 124 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 124 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[123]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var125(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #125\n\t"     /* Load immediate 125 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 125 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[124]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var126(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #126\n\t"     /* Load immediate 126 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 126 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[125]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var127(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #127\n\t"     /* Load immediate 127 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 127 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[126]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var128(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #128\n\t"     /* Load immediate 128 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 128 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[127]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var129(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #129\n\t"     /* Load immediate 129 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 129 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[128]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var130(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #130\n\t"     /* Load immediate 130 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 130 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[129]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var131(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #131\n\t"     /* Load immediate 131 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 131 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[130]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var132(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #132\n\t"     /* Load immediate 132 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 132 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[131]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var133(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #133\n\t"     /* Load immediate 133 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 133 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[132]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var134(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #134\n\t"     /* Load immediate 134 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 134 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[133]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var135(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #135\n\t"     /* Load immediate 135 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 135 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[134]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var136(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #136\n\t"     /* Load immediate 136 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 136 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[135]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var137(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #137\n\t"     /* Load immediate 137 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 137 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[136]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var138(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #138\n\t"     /* Load immediate 138 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 138 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[137]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var139(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #139\n\t"     /* Load immediate 139 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 139 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[138]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var140(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #140\n\t"     /* Load immediate 140 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 140 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[139]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var141(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #141\n\t"     /* Load immediate 141 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 141 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[140]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var142(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #142\n\t"     /* Load immediate 142 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 142 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[141]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var143(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #143\n\t"     /* Load immediate 143 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 143 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[142]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var144(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #144\n\t"     /* Load immediate 144 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 144 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[143]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var145(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #145\n\t"     /* Load immediate 145 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 145 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[144]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var146(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #146\n\t"     /* Load immediate 146 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 146 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[145]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var147(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #147\n\t"     /* Load immediate 147 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 147 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[146]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var148(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #148\n\t"     /* Load immediate 148 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 148 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[147]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var149(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #149\n\t"     /* Load immediate 149 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 149 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[148]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var150(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #150\n\t"     /* Load immediate 150 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 150 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[149]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var151(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #151\n\t"     /* Load immediate 151 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 151 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[150]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var152(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #152\n\t"     /* Load immediate 152 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 152 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[151]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var153(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #153\n\t"     /* Load immediate 153 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 153 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[152]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var154(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #154\n\t"     /* Load immediate 154 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 154 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[153]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var155(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #155\n\t"     /* Load immediate 155 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 155 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[154]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var156(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #156\n\t"     /* Load immediate 156 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 156 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[155]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var157(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #157\n\t"     /* Load immediate 157 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 157 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[156]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var158(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #158\n\t"     /* Load immediate 158 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 158 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[157]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var159(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #159\n\t"     /* Load immediate 159 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 159 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[158]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var160(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #160\n\t"     /* Load immediate 160 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 160 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[159]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var161(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #161\n\t"     /* Load immediate 161 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 161 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[160]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var162(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #162\n\t"     /* Load immediate 162 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 162 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[161]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var163(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #163\n\t"     /* Load immediate 163 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 163 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[162]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var164(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #164\n\t"     /* Load immediate 164 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 164 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[163]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var165(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #165\n\t"     /* Load immediate 165 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 165 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[164]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var166(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #166\n\t"     /* Load immediate 166 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 166 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[165]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var167(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #167\n\t"     /* Load immediate 167 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 167 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[166]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var168(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #168\n\t"     /* Load immediate 168 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 168 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[167]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var169(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #169\n\t"     /* Load immediate 169 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 169 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[168]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var170(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #170\n\t"     /* Load immediate 170 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 170 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[169]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var171(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #171\n\t"     /* Load immediate 171 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 171 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[170]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var172(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #172\n\t"     /* Load immediate 172 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 172 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[171]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var173(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #173\n\t"     /* Load immediate 173 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 173 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[172]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var174(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #174\n\t"     /* Load immediate 174 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 174 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[173]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var175(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #175\n\t"     /* Load immediate 175 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 175 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[174]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var176(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #176\n\t"     /* Load immediate 176 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 176 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[175]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var177(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #177\n\t"     /* Load immediate 177 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 177 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[176]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var178(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #178\n\t"     /* Load immediate 178 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 178 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[177]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var179(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #179\n\t"     /* Load immediate 179 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 179 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[178]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var180(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #180\n\t"     /* Load immediate 180 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 180 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[179]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var181(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #181\n\t"     /* Load immediate 181 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 181 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[180]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var182(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #182\n\t"     /* Load immediate 182 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 182 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[181]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var183(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #183\n\t"     /* Load immediate 183 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 183 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[182]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var184(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #184\n\t"     /* Load immediate 184 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 184 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[183]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var185(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #185\n\t"     /* Load immediate 185 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 185 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[184]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var186(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #186\n\t"     /* Load immediate 186 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 186 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[185]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var187(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #187\n\t"     /* Load immediate 187 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 187 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[186]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var188(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #188\n\t"     /* Load immediate 188 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 188 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[187]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var189(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #189\n\t"     /* Load immediate 189 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 189 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[188]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var190(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #190\n\t"     /* Load immediate 190 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 190 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[189]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var191(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #191\n\t"     /* Load immediate 191 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 191 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[190]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var192(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #192\n\t"     /* Load immediate 192 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 192 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[191]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var193(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #193\n\t"     /* Load immediate 193 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 193 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[192]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var194(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #194\n\t"     /* Load immediate 194 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 194 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[193]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var195(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #195\n\t"     /* Load immediate 195 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 195 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[194]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var196(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #196\n\t"     /* Load immediate 196 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 196 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[195]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var197(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #197\n\t"     /* Load immediate 197 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 197 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[196]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var198(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #198\n\t"     /* Load immediate 198 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 198 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[197]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var199(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #199\n\t"     /* Load immediate 199 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 199 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[198]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var200(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #200\n\t"     /* Load immediate 200 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 200 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[199]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var201(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #201\n\t"     /* Load immediate 201 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 201 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[200]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var202(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #202\n\t"     /* Load immediate 202 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 202 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[201]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var203(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #203\n\t"     /* Load immediate 203 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 203 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[202]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var204(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #204\n\t"     /* Load immediate 204 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 204 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[203]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var205(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #205\n\t"     /* Load immediate 205 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 205 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[204]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var206(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #206\n\t"     /* Load immediate 206 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 206 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[205]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var207(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #207\n\t"     /* Load immediate 207 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 207 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[206]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var208(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #208\n\t"     /* Load immediate 208 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 208 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[207]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var209(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #209\n\t"     /* Load immediate 209 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 209 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[208]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var210(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #210\n\t"     /* Load immediate 210 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 210 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[209]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var211(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #211\n\t"     /* Load immediate 211 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 211 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[210]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var212(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #212\n\t"     /* Load immediate 212 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 212 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[211]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var213(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #213\n\t"     /* Load immediate 213 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 213 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[212]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var214(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #214\n\t"     /* Load immediate 214 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 214 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[213]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var215(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #215\n\t"     /* Load immediate 215 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 215 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[214]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var216(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #216\n\t"     /* Load immediate 216 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 216 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[215]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var217(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #217\n\t"     /* Load immediate 217 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 217 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[216]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var218(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #218\n\t"     /* Load immediate 218 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 218 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[217]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var219(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #219\n\t"     /* Load immediate 219 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 219 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[218]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var220(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #220\n\t"     /* Load immediate 220 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 220 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[219]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var221(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #221\n\t"     /* Load immediate 221 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 221 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[220]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var222(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #222\n\t"     /* Load immediate 222 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 222 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[221]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var223(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #223\n\t"     /* Load immediate 223 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 223 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[222]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var224(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #224\n\t"     /* Load immediate 224 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 224 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[223]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var225(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #225\n\t"     /* Load immediate 225 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 225 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[224]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var226(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #226\n\t"     /* Load immediate 226 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 226 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[225]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var227(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #227\n\t"     /* Load immediate 227 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 227 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[226]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var228(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #228\n\t"     /* Load immediate 228 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 228 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[227]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var229(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #229\n\t"     /* Load immediate 229 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 229 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[228]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var230(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #230\n\t"     /* Load immediate 230 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 230 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[229]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var231(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #231\n\t"     /* Load immediate 231 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 231 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[230]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var232(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #232\n\t"     /* Load immediate 232 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 232 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[231]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var233(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #233\n\t"     /* Load immediate 233 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 233 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[232]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var234(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #234\n\t"     /* Load immediate 234 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 234 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[233]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var235(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #235\n\t"     /* Load immediate 235 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 235 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[234]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var236(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #236\n\t"     /* Load immediate 236 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 236 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[235]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var237(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #237\n\t"     /* Load immediate 237 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 237 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[236]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var238(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #238\n\t"     /* Load immediate 238 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 238 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[237]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var239(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #239\n\t"     /* Load immediate 239 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 239 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[238]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var240(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #240\n\t"     /* Load immediate 240 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 240 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[239]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var241(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #241\n\t"     /* Load immediate 241 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 241 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[240]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var242(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #242\n\t"     /* Load immediate 242 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 242 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[241]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var243(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #243\n\t"     /* Load immediate 243 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 243 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[242]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var244(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #244\n\t"     /* Load immediate 244 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 244 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[243]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var245(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #245\n\t"     /* Load immediate 245 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 245 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[244]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var246(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #246\n\t"     /* Load immediate 246 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 246 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[245]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var247(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #247\n\t"     /* Load immediate 247 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 247 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[246]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var248(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #248\n\t"     /* Load immediate 248 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 248 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[247]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var249(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #249\n\t"     /* Load immediate 249 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 249 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[248]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var250(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #250\n\t"     /* Load immediate 250 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 250 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[249]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var251(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #251\n\t"     /* Load immediate 251 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 251 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[250]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var252(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #252\n\t"     /* Load immediate 252 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 252 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[251]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var253(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #253\n\t"     /* Load immediate 253 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 253 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[252]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var254(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #254\n\t"     /* Load immediate 254 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 254 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[253]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var255(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #255\n\t"     /* Load immediate 255 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 255 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[254]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var256(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #256\n\t"     /* Load immediate 256 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 256 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[255]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var257(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #257\n\t"     /* Load immediate 257 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 257 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[256]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var258(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #258\n\t"     /* Load immediate 258 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 258 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[257]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var259(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #259\n\t"     /* Load immediate 259 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 259 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[258]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var260(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #260\n\t"     /* Load immediate 260 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 260 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[259]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var261(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #261\n\t"     /* Load immediate 261 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 261 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[260]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var262(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #262\n\t"     /* Load immediate 262 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 262 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[261]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var263(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #263\n\t"     /* Load immediate 263 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 263 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[262]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var264(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #264\n\t"     /* Load immediate 264 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 264 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[263]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var265(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #265\n\t"     /* Load immediate 265 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 265 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[264]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var266(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #266\n\t"     /* Load immediate 266 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 266 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[265]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var267(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #267\n\t"     /* Load immediate 267 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 267 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[266]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var268(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #268\n\t"     /* Load immediate 268 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 268 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[267]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var269(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #269\n\t"     /* Load immediate 269 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 269 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[268]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var270(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #270\n\t"     /* Load immediate 270 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 270 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[269]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var271(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #271\n\t"     /* Load immediate 271 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 271 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[270]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var272(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #272\n\t"     /* Load immediate 272 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 272 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[271]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var273(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #273\n\t"     /* Load immediate 273 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 273 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[272]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var274(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #274\n\t"     /* Load immediate 274 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 274 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[273]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var275(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #275\n\t"     /* Load immediate 275 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 275 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[274]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var276(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #276\n\t"     /* Load immediate 276 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 276 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[275]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var277(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #277\n\t"     /* Load immediate 277 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 277 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[276]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var278(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #278\n\t"     /* Load immediate 278 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 278 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[277]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var279(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #279\n\t"     /* Load immediate 279 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 279 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[278]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var280(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #280\n\t"     /* Load immediate 280 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 280 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[279]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var281(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #281\n\t"     /* Load immediate 281 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 281 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[280]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var282(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #282\n\t"     /* Load immediate 282 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 282 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[281]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var283(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #283\n\t"     /* Load immediate 283 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 283 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[282]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var284(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #284\n\t"     /* Load immediate 284 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 284 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[283]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var285(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #285\n\t"     /* Load immediate 285 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 285 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[284]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var286(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #286\n\t"     /* Load immediate 286 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 286 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[285]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var287(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #287\n\t"     /* Load immediate 287 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 287 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[286]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var288(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #288\n\t"     /* Load immediate 288 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 288 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[287]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var289(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #289\n\t"     /* Load immediate 289 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 289 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[288]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var290(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #290\n\t"     /* Load immediate 290 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 290 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[289]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var291(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #291\n\t"     /* Load immediate 291 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 291 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[290]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var292(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #292\n\t"     /* Load immediate 292 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 292 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[291]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var293(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #293\n\t"     /* Load immediate 293 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 293 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[292]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var294(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #294\n\t"     /* Load immediate 294 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 294 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[293]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var295(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #295\n\t"     /* Load immediate 295 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 295 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[294]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var296(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #296\n\t"     /* Load immediate 296 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 296 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[295]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var297(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #297\n\t"     /* Load immediate 297 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 297 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[296]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var298(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #298\n\t"     /* Load immediate 298 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 298 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[297]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var299(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #299\n\t"     /* Load immediate 299 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 299 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[298]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var300(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #300\n\t"     /* Load immediate 300 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 300 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[299]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var301(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #301\n\t"     /* Load immediate 301 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 301 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[300]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var302(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #302\n\t"     /* Load immediate 302 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 302 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[301]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var303(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #303\n\t"     /* Load immediate 303 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 303 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[302]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var304(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #304\n\t"     /* Load immediate 304 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 304 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[303]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var305(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #305\n\t"     /* Load immediate 305 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 305 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[304]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var306(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #306\n\t"     /* Load immediate 306 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 306 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[305]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var307(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #307\n\t"     /* Load immediate 307 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 307 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[306]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var308(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #308\n\t"     /* Load immediate 308 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 308 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[307]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var309(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #309\n\t"     /* Load immediate 309 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 309 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[308]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var310(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #310\n\t"     /* Load immediate 310 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 310 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[309]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var311(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #311\n\t"     /* Load immediate 311 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 311 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[310]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var312(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #312\n\t"     /* Load immediate 312 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 312 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[311]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var313(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #313\n\t"     /* Load immediate 313 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 313 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[312]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var314(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #314\n\t"     /* Load immediate 314 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 314 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[313]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var315(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #315\n\t"     /* Load immediate 315 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 315 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[314]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var316(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #316\n\t"     /* Load immediate 316 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 316 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[315]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var317(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #317\n\t"     /* Load immediate 317 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 317 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[316]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var318(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #318\n\t"     /* Load immediate 318 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 318 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[317]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var319(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #319\n\t"     /* Load immediate 319 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 319 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[318]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var320(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #320\n\t"     /* Load immediate 320 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 320 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[319]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var321(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #321\n\t"     /* Load immediate 321 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 321 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[320]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var322(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #322\n\t"     /* Load immediate 322 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 322 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[321]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var323(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #323\n\t"     /* Load immediate 323 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 323 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[322]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var324(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #324\n\t"     /* Load immediate 324 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 324 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[323]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var325(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #325\n\t"     /* Load immediate 325 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 325 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[324]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var326(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #326\n\t"     /* Load immediate 326 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 326 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[325]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var327(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #327\n\t"     /* Load immediate 327 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 327 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[326]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var328(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #328\n\t"     /* Load immediate 328 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 328 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[327]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var329(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #329\n\t"     /* Load immediate 329 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 329 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[328]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var330(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #330\n\t"     /* Load immediate 330 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 330 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[329]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var331(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #331\n\t"     /* Load immediate 331 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 331 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[330]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var332(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #332\n\t"     /* Load immediate 332 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 332 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[331]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var333(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #333\n\t"     /* Load immediate 333 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 333 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[332]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var334(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #334\n\t"     /* Load immediate 334 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 334 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[333]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var335(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #335\n\t"     /* Load immediate 335 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 335 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[334]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var336(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #336\n\t"     /* Load immediate 336 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 336 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[335]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var337(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #337\n\t"     /* Load immediate 337 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 337 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[336]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var338(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #338\n\t"     /* Load immediate 338 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 338 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[337]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var339(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #339\n\t"     /* Load immediate 339 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 339 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[338]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var340(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #340\n\t"     /* Load immediate 340 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 340 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[339]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var341(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #341\n\t"     /* Load immediate 341 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 341 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[340]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var342(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #342\n\t"     /* Load immediate 342 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 342 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[341]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var343(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #343\n\t"     /* Load immediate 343 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 343 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[342]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var344(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #344\n\t"     /* Load immediate 344 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 344 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[343]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var345(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #345\n\t"     /* Load immediate 345 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 345 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[344]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var346(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #346\n\t"     /* Load immediate 346 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 346 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[345]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var347(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #347\n\t"     /* Load immediate 347 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 347 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[346]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var348(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #348\n\t"     /* Load immediate 348 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 348 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[347]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var349(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #349\n\t"     /* Load immediate 349 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 349 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[348]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var350(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #350\n\t"     /* Load immediate 350 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 350 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[349]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var351(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #351\n\t"     /* Load immediate 351 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 351 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[350]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var352(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #352\n\t"     /* Load immediate 352 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 352 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[351]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var353(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #353\n\t"     /* Load immediate 353 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 353 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[352]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var354(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #354\n\t"     /* Load immediate 354 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 354 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[353]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var355(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #355\n\t"     /* Load immediate 355 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 355 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[354]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var356(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #356\n\t"     /* Load immediate 356 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 356 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[355]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var357(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #357\n\t"     /* Load immediate 357 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 357 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[356]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var358(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #358\n\t"     /* Load immediate 358 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 358 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[357]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var359(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #359\n\t"     /* Load immediate 359 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 359 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[358]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var360(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #360\n\t"     /* Load immediate 360 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 360 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[359]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var361(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #361\n\t"     /* Load immediate 361 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 361 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[360]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var362(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #362\n\t"     /* Load immediate 362 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 362 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[361]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var363(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #363\n\t"     /* Load immediate 363 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 363 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[362]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var364(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #364\n\t"     /* Load immediate 364 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 364 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[363]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var365(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #365\n\t"     /* Load immediate 365 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 365 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[364]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var366(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #366\n\t"     /* Load immediate 366 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 366 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[365]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var367(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #367\n\t"     /* Load immediate 367 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 367 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[366]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var368(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #368\n\t"     /* Load immediate 368 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 368 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[367]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var369(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #369\n\t"     /* Load immediate 369 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 369 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[368]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var370(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #370\n\t"     /* Load immediate 370 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 370 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[369]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var371(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #371\n\t"     /* Load immediate 371 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 371 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[370]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var372(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #372\n\t"     /* Load immediate 372 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 372 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[371]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var373(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #373\n\t"     /* Load immediate 373 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 373 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[372]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var374(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #374\n\t"     /* Load immediate 374 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 374 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[373]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var375(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #375\n\t"     /* Load immediate 375 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 375 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[374]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var376(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #376\n\t"     /* Load immediate 376 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 376 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[375]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var377(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #377\n\t"     /* Load immediate 377 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 377 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[376]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var378(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #378\n\t"     /* Load immediate 378 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 378 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[377]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var379(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #379\n\t"     /* Load immediate 379 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 379 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[378]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var380(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #380\n\t"     /* Load immediate 380 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 380 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[379]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var381(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #381\n\t"     /* Load immediate 381 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 381 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[380]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var382(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #382\n\t"     /* Load immediate 382 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 382 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[381]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var383(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #383\n\t"     /* Load immediate 383 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 383 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[382]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var384(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #384\n\t"     /* Load immediate 384 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 384 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[383]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var385(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #385\n\t"     /* Load immediate 385 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 385 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[384]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var386(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #386\n\t"     /* Load immediate 386 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 386 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[385]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var387(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #387\n\t"     /* Load immediate 387 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 387 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[386]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var388(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #388\n\t"     /* Load immediate 388 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 388 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[387]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var389(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #389\n\t"     /* Load immediate 389 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 389 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[388]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var390(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #390\n\t"     /* Load immediate 390 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 390 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[389]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var391(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #391\n\t"     /* Load immediate 391 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 391 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[390]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var392(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #392\n\t"     /* Load immediate 392 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 392 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[391]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var393(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #393\n\t"     /* Load immediate 393 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 393 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[392]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var394(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #394\n\t"     /* Load immediate 394 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 394 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[393]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var395(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #395\n\t"     /* Load immediate 395 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 395 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[394]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var396(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #396\n\t"     /* Load immediate 396 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 396 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[395]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var397(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #397\n\t"     /* Load immediate 397 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 397 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[396]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var398(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #398\n\t"     /* Load immediate 398 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 398 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[397]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var399(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #399\n\t"     /* Load immediate 399 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 399 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[398]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var400(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #400\n\t"     /* Load immediate 400 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 400 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[399]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var401(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #401\n\t"     /* Load immediate 401 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 401 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[400]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var402(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #402\n\t"     /* Load immediate 402 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 402 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[401]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var403(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #403\n\t"     /* Load immediate 403 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 403 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[402]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var404(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #404\n\t"     /* Load immediate 404 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 404 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[403]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var405(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #405\n\t"     /* Load immediate 405 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 405 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[404]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var406(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #406\n\t"     /* Load immediate 406 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 406 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[405]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var407(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #407\n\t"     /* Load immediate 407 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 407 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[406]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var408(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #408\n\t"     /* Load immediate 408 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 408 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[407]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var409(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #409\n\t"     /* Load immediate 409 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 409 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[408]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var410(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #410\n\t"     /* Load immediate 410 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 410 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[409]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var411(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #411\n\t"     /* Load immediate 411 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 411 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[410]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var412(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #412\n\t"     /* Load immediate 412 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 412 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[411]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var413(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #413\n\t"     /* Load immediate 413 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 413 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[412]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var414(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #414\n\t"     /* Load immediate 414 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 414 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[413]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var415(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #415\n\t"     /* Load immediate 415 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 415 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[414]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var416(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #416\n\t"     /* Load immediate 416 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 416 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[415]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var417(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #417\n\t"     /* Load immediate 417 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 417 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[416]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var418(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #418\n\t"     /* Load immediate 418 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 418 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[417]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var419(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #419\n\t"     /* Load immediate 419 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 419 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[418]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var420(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #420\n\t"     /* Load immediate 420 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 420 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[419]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var421(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #421\n\t"     /* Load immediate 421 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 421 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[420]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var422(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #422\n\t"     /* Load immediate 422 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 422 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[421]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var423(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #423\n\t"     /* Load immediate 423 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 423 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[422]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var424(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #424\n\t"     /* Load immediate 424 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 424 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[423]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var425(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #425\n\t"     /* Load immediate 425 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 425 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[424]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var426(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #426\n\t"     /* Load immediate 426 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 426 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[425]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var427(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #427\n\t"     /* Load immediate 427 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 427 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[426]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var428(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #428\n\t"     /* Load immediate 428 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 428 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[427]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var429(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #429\n\t"     /* Load immediate 429 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 429 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[428]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var430(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #430\n\t"     /* Load immediate 430 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 430 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[429]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var431(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #431\n\t"     /* Load immediate 431 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 431 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[430]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var432(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #432\n\t"     /* Load immediate 432 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 432 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[431]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var433(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #433\n\t"     /* Load immediate 433 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 433 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[432]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var434(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #434\n\t"     /* Load immediate 434 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 434 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[433]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var435(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #435\n\t"     /* Load immediate 435 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 435 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[434]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var436(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #436\n\t"     /* Load immediate 436 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 436 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[435]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var437(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #437\n\t"     /* Load immediate 437 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 437 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[436]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var438(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #438\n\t"     /* Load immediate 438 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 438 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[437]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var439(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #439\n\t"     /* Load immediate 439 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 439 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[438]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var440(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #440\n\t"     /* Load immediate 440 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 440 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[439]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var441(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #441\n\t"     /* Load immediate 441 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 441 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[440]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var442(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #442\n\t"     /* Load immediate 442 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 442 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[441]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var443(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #443\n\t"     /* Load immediate 443 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 443 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[442]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var444(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #444\n\t"     /* Load immediate 444 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 444 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[443]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var445(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #445\n\t"     /* Load immediate 445 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 445 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[444]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var446(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #446\n\t"     /* Load immediate 446 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 446 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[445]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var447(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #447\n\t"     /* Load immediate 447 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 447 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[446]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var448(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #448\n\t"     /* Load immediate 448 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 448 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[447]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var449(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #449\n\t"     /* Load immediate 449 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 449 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[448]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var450(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #450\n\t"     /* Load immediate 450 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 450 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[449]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var451(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #451\n\t"     /* Load immediate 451 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 451 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[450]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var452(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #452\n\t"     /* Load immediate 452 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 452 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[451]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var453(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #453\n\t"     /* Load immediate 453 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 453 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[452]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var454(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #454\n\t"     /* Load immediate 454 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 454 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[453]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var455(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #455\n\t"     /* Load immediate 455 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 455 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[454]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var456(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #456\n\t"     /* Load immediate 456 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 456 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[455]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var457(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #457\n\t"     /* Load immediate 457 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 457 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[456]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var458(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #458\n\t"     /* Load immediate 458 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 458 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[457]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var459(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #459\n\t"     /* Load immediate 459 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 459 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[458]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var460(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #460\n\t"     /* Load immediate 460 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 460 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[459]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var461(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #461\n\t"     /* Load immediate 461 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 461 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[460]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var462(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #462\n\t"     /* Load immediate 462 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 462 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[461]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var463(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #463\n\t"     /* Load immediate 463 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 463 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[462]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var464(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #464\n\t"     /* Load immediate 464 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 464 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[463]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var465(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #465\n\t"     /* Load immediate 465 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 465 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[464]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var466(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #466\n\t"     /* Load immediate 466 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 466 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[465]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var467(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #467\n\t"     /* Load immediate 467 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 467 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[466]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var468(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #468\n\t"     /* Load immediate 468 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 468 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[467]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var469(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #469\n\t"     /* Load immediate 469 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 469 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[468]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var470(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #470\n\t"     /* Load immediate 470 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 470 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[469]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var471(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #471\n\t"     /* Load immediate 471 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 471 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[470]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var472(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #472\n\t"     /* Load immediate 472 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 472 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[471]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var473(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #473\n\t"     /* Load immediate 473 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 473 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[472]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var474(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #474\n\t"     /* Load immediate 474 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 474 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[473]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var475(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #475\n\t"     /* Load immediate 475 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 475 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[474]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var476(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #476\n\t"     /* Load immediate 476 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 476 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[475]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var477(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #477\n\t"     /* Load immediate 477 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 477 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[476]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var478(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #478\n\t"     /* Load immediate 478 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 478 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[477]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var479(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #479\n\t"     /* Load immediate 479 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 479 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[478]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var480(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #480\n\t"     /* Load immediate 480 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 480 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[479]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var481(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #481\n\t"     /* Load immediate 481 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 481 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[480]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var482(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #482\n\t"     /* Load immediate 482 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 482 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[481]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var483(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #483\n\t"     /* Load immediate 483 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 483 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[482]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var484(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #484\n\t"     /* Load immediate 484 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 484 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[483]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var485(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #485\n\t"     /* Load immediate 485 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 485 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[484]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var486(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #486\n\t"     /* Load immediate 486 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 486 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[485]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var487(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #487\n\t"     /* Load immediate 487 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 487 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[486]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var488(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #488\n\t"     /* Load immediate 488 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 488 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[487]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var489(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #489\n\t"     /* Load immediate 489 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 489 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[488]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var490(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #490\n\t"     /* Load immediate 490 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 490 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[489]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var491(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #491\n\t"     /* Load immediate 491 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 491 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[490]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var492(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #492\n\t"     /* Load immediate 492 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 492 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[491]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var493(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #493\n\t"     /* Load immediate 493 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 493 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[492]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var494(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #494\n\t"     /* Load immediate 494 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 494 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[493]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var495(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #495\n\t"     /* Load immediate 495 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 495 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[494]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var496(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #496\n\t"     /* Load immediate 496 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 496 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[495]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var497(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #497\n\t"     /* Load immediate 497 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 497 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[496]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var498(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #498\n\t"     /* Load immediate 498 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 498 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[497]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var499(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #499\n\t"     /* Load immediate 499 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 499 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[498]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var500(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #500\n\t"     /* Load immediate 500 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 500 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[499]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var501(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #501\n\t"     /* Load immediate 501 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 501 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[500]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var502(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #502\n\t"     /* Load immediate 502 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 502 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[501]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var503(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #503\n\t"     /* Load immediate 503 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 503 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[502]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var504(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #504\n\t"     /* Load immediate 504 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 504 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[503]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var505(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #505\n\t"     /* Load immediate 505 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 505 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[504]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var506(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #506\n\t"     /* Load immediate 506 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 506 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[505]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var507(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #507\n\t"     /* Load immediate 507 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 507 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[506]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var508(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #508\n\t"     /* Load immediate 508 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 508 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[507]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var509(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #509\n\t"     /* Load immediate 509 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 509 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[508]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var510(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #510\n\t"     /* Load immediate 510 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 510 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[509]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var511(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #511\n\t"     /* Load immediate 511 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 511 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[510]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var512(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #512\n\t"     /* Load immediate 512 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 512 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[511]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var513(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #513\n\t"     /* Load immediate 513 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 513 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[512]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var514(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #514\n\t"     /* Load immediate 514 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 514 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[513]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var515(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #515\n\t"     /* Load immediate 515 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 515 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[514]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var516(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #516\n\t"     /* Load immediate 516 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 516 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[515]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var517(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #517\n\t"     /* Load immediate 517 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 517 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[516]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var518(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #518\n\t"     /* Load immediate 518 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 518 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[517]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var519(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #519\n\t"     /* Load immediate 519 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 519 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[518]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var520(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #520\n\t"     /* Load immediate 520 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 520 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[519]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var521(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #521\n\t"     /* Load immediate 521 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 521 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[520]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var522(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #522\n\t"     /* Load immediate 522 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 522 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[521]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var523(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #523\n\t"     /* Load immediate 523 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 523 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[522]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var524(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #524\n\t"     /* Load immediate 524 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 524 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[523]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var525(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #525\n\t"     /* Load immediate 525 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 525 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[524]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var526(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #526\n\t"     /* Load immediate 526 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 526 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[525]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var527(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #527\n\t"     /* Load immediate 527 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 527 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[526]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var528(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #528\n\t"     /* Load immediate 528 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 528 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[527]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var529(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #529\n\t"     /* Load immediate 529 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 529 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[528]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var530(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #530\n\t"     /* Load immediate 530 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 530 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[529]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var531(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #531\n\t"     /* Load immediate 531 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 531 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[530]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var532(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #532\n\t"     /* Load immediate 532 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 532 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[531]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var533(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #533\n\t"     /* Load immediate 533 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 533 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[532]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var534(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #534\n\t"     /* Load immediate 534 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 534 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[533]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var535(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #535\n\t"     /* Load immediate 535 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 535 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[534]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var536(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #536\n\t"     /* Load immediate 536 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 536 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[535]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var537(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #537\n\t"     /* Load immediate 537 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 537 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[536]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var538(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #538\n\t"     /* Load immediate 538 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 538 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[537]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var539(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #539\n\t"     /* Load immediate 539 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 539 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[538]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var540(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #540\n\t"     /* Load immediate 540 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 540 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[539]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var541(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #541\n\t"     /* Load immediate 541 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 541 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[540]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var542(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #542\n\t"     /* Load immediate 542 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 542 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[541]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var543(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #543\n\t"     /* Load immediate 543 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 543 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[542]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var544(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #544\n\t"     /* Load immediate 544 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 544 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[543]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var545(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #545\n\t"     /* Load immediate 545 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 545 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[544]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var546(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #546\n\t"     /* Load immediate 546 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 546 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[545]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var547(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #547\n\t"     /* Load immediate 547 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 547 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[546]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var548(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #548\n\t"     /* Load immediate 548 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 548 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[547]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var549(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #549\n\t"     /* Load immediate 549 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 549 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[548]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var550(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #550\n\t"     /* Load immediate 550 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 550 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[549]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var551(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #551\n\t"     /* Load immediate 551 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 551 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[550]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var552(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #552\n\t"     /* Load immediate 552 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 552 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[551]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var553(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #553\n\t"     /* Load immediate 553 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 553 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[552]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var554(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #554\n\t"     /* Load immediate 554 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 554 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[553]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var555(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #555\n\t"     /* Load immediate 555 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 555 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[554]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var556(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #556\n\t"     /* Load immediate 556 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 556 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[555]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var557(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #557\n\t"     /* Load immediate 557 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 557 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[556]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var558(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #558\n\t"     /* Load immediate 558 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 558 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[557]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var559(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #559\n\t"     /* Load immediate 559 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 559 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[558]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var560(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #560\n\t"     /* Load immediate 560 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 560 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[559]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var561(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #561\n\t"     /* Load immediate 561 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 561 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[560]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var562(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #562\n\t"     /* Load immediate 562 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 562 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[561]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var563(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #563\n\t"     /* Load immediate 563 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 563 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[562]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var564(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #564\n\t"     /* Load immediate 564 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 564 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[563]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var565(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #565\n\t"     /* Load immediate 565 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 565 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[564]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var566(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #566\n\t"     /* Load immediate 566 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 566 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[565]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var567(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #567\n\t"     /* Load immediate 567 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 567 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[566]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var568(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #568\n\t"     /* Load immediate 568 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 568 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[567]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var569(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #569\n\t"     /* Load immediate 569 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 569 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[568]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var570(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #570\n\t"     /* Load immediate 570 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 570 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[569]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var571(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #571\n\t"     /* Load immediate 571 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 571 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[570]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var572(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #572\n\t"     /* Load immediate 572 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 572 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[571]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var573(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #573\n\t"     /* Load immediate 573 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 573 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[572]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var574(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #574\n\t"     /* Load immediate 574 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 574 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[573]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var575(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #575\n\t"     /* Load immediate 575 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 575 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[574]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var576(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #576\n\t"     /* Load immediate 576 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 576 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[575]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var577(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #577\n\t"     /* Load immediate 577 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 577 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[576]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var578(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #578\n\t"     /* Load immediate 578 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 578 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[577]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var579(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #579\n\t"     /* Load immediate 579 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 579 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[578]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var580(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #580\n\t"     /* Load immediate 580 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 580 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[579]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var581(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #581\n\t"     /* Load immediate 581 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 581 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[580]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var582(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #582\n\t"     /* Load immediate 582 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 582 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[581]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var583(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #583\n\t"     /* Load immediate 583 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 583 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[582]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var584(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #584\n\t"     /* Load immediate 584 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 584 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[583]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var585(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #585\n\t"     /* Load immediate 585 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 585 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[584]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var586(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #586\n\t"     /* Load immediate 586 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 586 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[585]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var587(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #587\n\t"     /* Load immediate 587 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 587 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[586]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var588(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #588\n\t"     /* Load immediate 588 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 588 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[587]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var589(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #589\n\t"     /* Load immediate 589 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 589 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[588]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var590(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #590\n\t"     /* Load immediate 590 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 590 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[589]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var591(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #591\n\t"     /* Load immediate 591 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 591 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[590]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var592(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #592\n\t"     /* Load immediate 592 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 592 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[591]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var593(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #593\n\t"     /* Load immediate 593 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 593 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[592]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var594(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #594\n\t"     /* Load immediate 594 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 594 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[593]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var595(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #595\n\t"     /* Load immediate 595 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 595 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[594]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var596(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #596\n\t"     /* Load immediate 596 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 596 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[595]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var597(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #597\n\t"     /* Load immediate 597 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 597 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[596]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var598(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #598\n\t"     /* Load immediate 598 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 598 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[597]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var599(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #599\n\t"     /* Load immediate 599 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 599 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[598]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var600(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #600\n\t"     /* Load immediate 600 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 600 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[599]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var601(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #601\n\t"     /* Load immediate 601 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 601 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[600]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var602(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #602\n\t"     /* Load immediate 602 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 602 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[601]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var603(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #603\n\t"     /* Load immediate 603 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 603 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[602]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var604(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #604\n\t"     /* Load immediate 604 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 604 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[603]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var605(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #605\n\t"     /* Load immediate 605 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 605 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[604]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var606(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #606\n\t"     /* Load immediate 606 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 606 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[605]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var607(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #607\n\t"     /* Load immediate 607 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 607 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[606]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var608(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #608\n\t"     /* Load immediate 608 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 608 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[607]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var609(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #609\n\t"     /* Load immediate 609 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 609 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[608]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var610(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #610\n\t"     /* Load immediate 610 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 610 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[609]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var611(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #611\n\t"     /* Load immediate 611 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 611 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[610]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var612(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #612\n\t"     /* Load immediate 612 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 612 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[611]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var613(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #613\n\t"     /* Load immediate 613 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 613 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[612]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var614(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #614\n\t"     /* Load immediate 614 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 614 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[613]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var615(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #615\n\t"     /* Load immediate 615 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 615 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[614]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var616(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #616\n\t"     /* Load immediate 616 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 616 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[615]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var617(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #617\n\t"     /* Load immediate 617 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 617 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[616]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var618(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #618\n\t"     /* Load immediate 618 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 618 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[617]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var619(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #619\n\t"     /* Load immediate 619 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 619 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[618]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var620(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #620\n\t"     /* Load immediate 620 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 620 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[619]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var621(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #621\n\t"     /* Load immediate 621 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 621 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[620]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var622(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #622\n\t"     /* Load immediate 622 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 622 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[621]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var623(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #623\n\t"     /* Load immediate 623 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 623 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[622]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var624(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #624\n\t"     /* Load immediate 624 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 624 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[623]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var625(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #625\n\t"     /* Load immediate 625 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 625 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[624]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var626(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #626\n\t"     /* Load immediate 626 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 626 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[625]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var627(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #627\n\t"     /* Load immediate 627 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 627 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[626]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var628(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #628\n\t"     /* Load immediate 628 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 628 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[627]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var629(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #629\n\t"     /* Load immediate 629 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 629 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[628]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var630(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #630\n\t"     /* Load immediate 630 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 630 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[629]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var631(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #631\n\t"     /* Load immediate 631 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 631 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[630]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var632(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #632\n\t"     /* Load immediate 632 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 632 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[631]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var633(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #633\n\t"     /* Load immediate 633 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 633 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[632]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var634(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #634\n\t"     /* Load immediate 634 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 634 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[633]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var635(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #635\n\t"     /* Load immediate 635 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 635 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[634]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var636(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #636\n\t"     /* Load immediate 636 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 636 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[635]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var637(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #637\n\t"     /* Load immediate 637 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 637 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[636]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var638(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #638\n\t"     /* Load immediate 638 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 638 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[637]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var639(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #639\n\t"     /* Load immediate 639 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 639 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[638]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var640(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #640\n\t"     /* Load immediate 640 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 640 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[639]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var641(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #641\n\t"     /* Load immediate 641 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 641 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[640]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var642(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #642\n\t"     /* Load immediate 642 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 642 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[641]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var643(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #643\n\t"     /* Load immediate 643 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 643 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[642]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var644(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #644\n\t"     /* Load immediate 644 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 644 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[643]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var645(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #645\n\t"     /* Load immediate 645 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 645 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[644]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var646(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #646\n\t"     /* Load immediate 646 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 646 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[645]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var647(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #647\n\t"     /* Load immediate 647 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 647 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[646]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var648(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #648\n\t"     /* Load immediate 648 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 648 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[647]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var649(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #649\n\t"     /* Load immediate 649 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 649 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[648]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var650(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #650\n\t"     /* Load immediate 650 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 650 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[649]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var651(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #651\n\t"     /* Load immediate 651 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 651 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[650]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var652(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #652\n\t"     /* Load immediate 652 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 652 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[651]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var653(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #653\n\t"     /* Load immediate 653 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 653 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[652]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var654(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #654\n\t"     /* Load immediate 654 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 654 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[653]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var655(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #655\n\t"     /* Load immediate 655 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 655 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[654]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var656(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #656\n\t"     /* Load immediate 656 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 656 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[655]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var657(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #657\n\t"     /* Load immediate 657 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 657 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[656]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var658(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #658\n\t"     /* Load immediate 658 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 658 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[657]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var659(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #659\n\t"     /* Load immediate 659 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 659 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[658]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var660(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #660\n\t"     /* Load immediate 660 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 660 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[659]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var661(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #661\n\t"     /* Load immediate 661 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 661 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[660]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var662(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #662\n\t"     /* Load immediate 662 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 662 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[661]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var663(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #663\n\t"     /* Load immediate 663 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 663 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[662]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var664(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #664\n\t"     /* Load immediate 664 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 664 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[663]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var665(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #665\n\t"     /* Load immediate 665 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 665 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[664]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var666(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #666\n\t"     /* Load immediate 666 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 666 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[665]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var667(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #667\n\t"     /* Load immediate 667 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 667 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[666]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var668(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #668\n\t"     /* Load immediate 668 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 668 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[667]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var669(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #669\n\t"     /* Load immediate 669 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 669 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[668]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var670(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #670\n\t"     /* Load immediate 670 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 670 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[669]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var671(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #671\n\t"     /* Load immediate 671 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 671 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[670]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var672(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #672\n\t"     /* Load immediate 672 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 672 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[671]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var673(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #673\n\t"     /* Load immediate 673 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 673 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[672]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var674(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #674\n\t"     /* Load immediate 674 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 674 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[673]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var675(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #675\n\t"     /* Load immediate 675 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 675 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[674]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var676(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #676\n\t"     /* Load immediate 676 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 676 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[675]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var677(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #677\n\t"     /* Load immediate 677 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 677 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[676]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var678(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #678\n\t"     /* Load immediate 678 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 678 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[677]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var679(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #679\n\t"     /* Load immediate 679 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 679 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[678]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var680(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #680\n\t"     /* Load immediate 680 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 680 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[679]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var681(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #681\n\t"     /* Load immediate 681 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 681 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[680]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var682(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #682\n\t"     /* Load immediate 682 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 682 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[681]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var683(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #683\n\t"     /* Load immediate 683 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 683 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[682]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var684(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #684\n\t"     /* Load immediate 684 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 684 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[683]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var685(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #685\n\t"     /* Load immediate 685 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 685 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[684]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var686(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #686\n\t"     /* Load immediate 686 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 686 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[685]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var687(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #687\n\t"     /* Load immediate 687 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 687 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[686]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var688(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #688\n\t"     /* Load immediate 688 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 688 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[687]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var689(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #689\n\t"     /* Load immediate 689 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 689 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[688]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var690(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #690\n\t"     /* Load immediate 690 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 690 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[689]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var691(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #691\n\t"     /* Load immediate 691 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 691 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[690]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var692(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #692\n\t"     /* Load immediate 692 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 692 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[691]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var693(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #693\n\t"     /* Load immediate 693 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 693 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[692]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var694(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #694\n\t"     /* Load immediate 694 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 694 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[693]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var695(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #695\n\t"     /* Load immediate 695 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 695 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[694]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var696(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #696\n\t"     /* Load immediate 696 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 696 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[695]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var697(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #697\n\t"     /* Load immediate 697 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 697 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[696]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var698(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #698\n\t"     /* Load immediate 698 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 698 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[697]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var699(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #699\n\t"     /* Load immediate 699 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 699 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[698]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var700(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #700\n\t"     /* Load immediate 700 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 700 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[699]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var701(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #701\n\t"     /* Load immediate 701 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 701 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[700]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var702(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #702\n\t"     /* Load immediate 702 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 702 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[701]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var703(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #703\n\t"     /* Load immediate 703 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 703 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[702]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var704(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #704\n\t"     /* Load immediate 704 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 704 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[703]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var705(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #705\n\t"     /* Load immediate 705 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 705 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[704]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var706(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #706\n\t"     /* Load immediate 706 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 706 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[705]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var707(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #707\n\t"     /* Load immediate 707 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 707 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[706]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var708(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #708\n\t"     /* Load immediate 708 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 708 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[707]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var709(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #709\n\t"     /* Load immediate 709 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 709 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[708]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var710(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #710\n\t"     /* Load immediate 710 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 710 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[709]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var711(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #711\n\t"     /* Load immediate 711 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 711 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[710]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var712(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #712\n\t"     /* Load immediate 712 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 712 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[711]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var713(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #713\n\t"     /* Load immediate 713 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 713 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[712]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var714(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #714\n\t"     /* Load immediate 714 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 714 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[713]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var715(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #715\n\t"     /* Load immediate 715 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 715 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[714]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var716(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #716\n\t"     /* Load immediate 716 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 716 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[715]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var717(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #717\n\t"     /* Load immediate 717 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 717 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[716]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var718(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #718\n\t"     /* Load immediate 718 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 718 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[717]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var719(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #719\n\t"     /* Load immediate 719 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 719 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[718]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var720(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #720\n\t"     /* Load immediate 720 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 720 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[719]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var721(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #721\n\t"     /* Load immediate 721 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 721 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[720]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var722(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #722\n\t"     /* Load immediate 722 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 722 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[721]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var723(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #723\n\t"     /* Load immediate 723 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 723 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[722]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var724(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #724\n\t"     /* Load immediate 724 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 724 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[723]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var725(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #725\n\t"     /* Load immediate 725 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 725 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[724]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var726(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #726\n\t"     /* Load immediate 726 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 726 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[725]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var727(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #727\n\t"     /* Load immediate 727 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 727 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[726]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var728(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #728\n\t"     /* Load immediate 728 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 728 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[727]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var729(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #729\n\t"     /* Load immediate 729 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 729 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[728]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var730(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #730\n\t"     /* Load immediate 730 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 730 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[729]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var731(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #731\n\t"     /* Load immediate 731 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 731 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[730]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var732(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #732\n\t"     /* Load immediate 732 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 732 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[731]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var733(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #733\n\t"     /* Load immediate 733 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 733 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[732]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var734(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #734\n\t"     /* Load immediate 734 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 734 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[733]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var735(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #735\n\t"     /* Load immediate 735 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 735 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[734]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var736(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #736\n\t"     /* Load immediate 736 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 736 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[735]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var737(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #737\n\t"     /* Load immediate 737 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 737 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[736]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var738(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #738\n\t"     /* Load immediate 738 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 738 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[737]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var739(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #739\n\t"     /* Load immediate 739 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 739 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[738]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var740(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #740\n\t"     /* Load immediate 740 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 740 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[739]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var741(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #741\n\t"     /* Load immediate 741 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 741 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[740]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var742(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #742\n\t"     /* Load immediate 742 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 742 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[741]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var743(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #743\n\t"     /* Load immediate 743 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 743 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[742]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var744(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #744\n\t"     /* Load immediate 744 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 744 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[743]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var745(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #745\n\t"     /* Load immediate 745 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 745 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[744]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var746(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #746\n\t"     /* Load immediate 746 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 746 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[745]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var747(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #747\n\t"     /* Load immediate 747 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 747 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[746]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var748(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #748\n\t"     /* Load immediate 748 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 748 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[747]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var749(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #749\n\t"     /* Load immediate 749 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 749 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[748]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var750(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #750\n\t"     /* Load immediate 750 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 750 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[749]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var751(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #751\n\t"     /* Load immediate 751 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 751 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[750]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var752(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #752\n\t"     /* Load immediate 752 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 752 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[751]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var753(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #753\n\t"     /* Load immediate 753 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 753 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[752]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var754(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #754\n\t"     /* Load immediate 754 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 754 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[753]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var755(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #755\n\t"     /* Load immediate 755 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 755 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[754]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var756(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #756\n\t"     /* Load immediate 756 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 756 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[755]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var757(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #757\n\t"     /* Load immediate 757 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 757 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[756]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var758(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #758\n\t"     /* Load immediate 758 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 758 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[757]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var759(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #759\n\t"     /* Load immediate 759 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 759 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[758]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var760(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #760\n\t"     /* Load immediate 760 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 760 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[759]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var761(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #761\n\t"     /* Load immediate 761 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 761 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[760]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var762(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #762\n\t"     /* Load immediate 762 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 762 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[761]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var763(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #763\n\t"     /* Load immediate 763 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 763 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[762]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var764(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #764\n\t"     /* Load immediate 764 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 764 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[763]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var765(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #765\n\t"     /* Load immediate 765 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 765 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[764]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var766(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #766\n\t"     /* Load immediate 766 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 766 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[765]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var767(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #767\n\t"     /* Load immediate 767 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 767 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[766]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var768(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #768\n\t"     /* Load immediate 768 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 768 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[767]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var769(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #769\n\t"     /* Load immediate 769 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 769 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[768]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var770(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #770\n\t"     /* Load immediate 770 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 770 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[769]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var771(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #771\n\t"     /* Load immediate 771 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 771 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[770]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var772(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #772\n\t"     /* Load immediate 772 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 772 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[771]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var773(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #773\n\t"     /* Load immediate 773 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 773 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[772]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var774(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #774\n\t"     /* Load immediate 774 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 774 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[773]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var775(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #775\n\t"     /* Load immediate 775 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 775 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[774]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var776(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #776\n\t"     /* Load immediate 776 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 776 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[775]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var777(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #777\n\t"     /* Load immediate 777 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 777 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[776]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var778(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #778\n\t"     /* Load immediate 778 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 778 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[777]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var779(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #779\n\t"     /* Load immediate 779 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 779 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[778]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var780(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #780\n\t"     /* Load immediate 780 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 780 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[779]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var781(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #781\n\t"     /* Load immediate 781 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 781 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[780]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var782(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #782\n\t"     /* Load immediate 782 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 782 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[781]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var783(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #783\n\t"     /* Load immediate 783 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 783 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[782]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var784(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #784\n\t"     /* Load immediate 784 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 784 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[783]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var785(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #785\n\t"     /* Load immediate 785 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 785 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[784]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var786(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #786\n\t"     /* Load immediate 786 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 786 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[785]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var787(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #787\n\t"     /* Load immediate 787 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 787 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[786]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var788(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #788\n\t"     /* Load immediate 788 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 788 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[787]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var789(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #789\n\t"     /* Load immediate 789 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 789 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[788]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var790(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #790\n\t"     /* Load immediate 790 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 790 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[789]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var791(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #791\n\t"     /* Load immediate 791 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 791 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[790]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var792(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #792\n\t"     /* Load immediate 792 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 792 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[791]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var793(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #793\n\t"     /* Load immediate 793 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 793 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[792]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var794(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #794\n\t"     /* Load immediate 794 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 794 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[793]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var795(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #795\n\t"     /* Load immediate 795 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 795 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[794]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var796(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #796\n\t"     /* Load immediate 796 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 796 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[795]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var797(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #797\n\t"     /* Load immediate 797 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 797 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[796]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var798(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #798\n\t"     /* Load immediate 798 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 798 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[797]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var799(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #799\n\t"     /* Load immediate 799 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 799 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[798]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var800(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #800\n\t"     /* Load immediate 800 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 800 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[799]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var801(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #801\n\t"     /* Load immediate 801 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 801 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[800]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var802(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #802\n\t"     /* Load immediate 802 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 802 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[801]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var803(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #803\n\t"     /* Load immediate 803 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 803 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[802]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var804(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #804\n\t"     /* Load immediate 804 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 804 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[803]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var805(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #805\n\t"     /* Load immediate 805 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 805 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[804]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var806(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #806\n\t"     /* Load immediate 806 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 806 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[805]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var807(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #807\n\t"     /* Load immediate 807 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 807 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[806]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var808(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #808\n\t"     /* Load immediate 808 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 808 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[807]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var809(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #809\n\t"     /* Load immediate 809 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 809 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[808]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var810(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #810\n\t"     /* Load immediate 810 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 810 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[809]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var811(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #811\n\t"     /* Load immediate 811 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 811 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[810]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var812(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #812\n\t"     /* Load immediate 812 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 812 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[811]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var813(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #813\n\t"     /* Load immediate 813 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 813 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[812]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var814(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #814\n\t"     /* Load immediate 814 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 814 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[813]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var815(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #815\n\t"     /* Load immediate 815 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 815 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[814]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var816(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #816\n\t"     /* Load immediate 816 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 816 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[815]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var817(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #817\n\t"     /* Load immediate 817 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 817 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[816]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var818(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #818\n\t"     /* Load immediate 818 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 818 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[817]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var819(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #819\n\t"     /* Load immediate 819 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 819 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[818]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var820(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #820\n\t"     /* Load immediate 820 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 820 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[819]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var821(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #821\n\t"     /* Load immediate 821 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 821 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[820]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var822(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #822\n\t"     /* Load immediate 822 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 822 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[821]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var823(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #823\n\t"     /* Load immediate 823 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 823 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[822]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var824(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #824\n\t"     /* Load immediate 824 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 824 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[823]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var825(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #825\n\t"     /* Load immediate 825 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 825 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[824]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var826(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #826\n\t"     /* Load immediate 826 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 826 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[825]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var827(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #827\n\t"     /* Load immediate 827 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 827 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[826]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var828(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #828\n\t"     /* Load immediate 828 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 828 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[827]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var829(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #829\n\t"     /* Load immediate 829 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 829 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[828]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var830(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #830\n\t"     /* Load immediate 830 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 830 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[829]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var831(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #831\n\t"     /* Load immediate 831 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 831 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[830]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var832(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #832\n\t"     /* Load immediate 832 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 832 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[831]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var833(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #833\n\t"     /* Load immediate 833 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 833 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[832]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var834(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #834\n\t"     /* Load immediate 834 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 834 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[833]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var835(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #835\n\t"     /* Load immediate 835 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 835 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[834]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var836(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #836\n\t"     /* Load immediate 836 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 836 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[835]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var837(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #837\n\t"     /* Load immediate 837 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 837 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[836]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var838(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #838\n\t"     /* Load immediate 838 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 838 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[837]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var839(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #839\n\t"     /* Load immediate 839 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 839 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[838]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var840(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #840\n\t"     /* Load immediate 840 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 840 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[839]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var841(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #841\n\t"     /* Load immediate 841 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 841 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[840]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var842(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #842\n\t"     /* Load immediate 842 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 842 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[841]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var843(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #843\n\t"     /* Load immediate 843 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 843 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[842]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var844(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #844\n\t"     /* Load immediate 844 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 844 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[843]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var845(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #845\n\t"     /* Load immediate 845 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 845 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[844]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var846(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #846\n\t"     /* Load immediate 846 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 846 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[845]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var847(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #847\n\t"     /* Load immediate 847 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 847 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[846]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var848(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #848\n\t"     /* Load immediate 848 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 848 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[847]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var849(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #849\n\t"     /* Load immediate 849 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 849 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[848]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var850(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #850\n\t"     /* Load immediate 850 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 850 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[849]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var851(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #851\n\t"     /* Load immediate 851 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 851 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[850]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var852(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #852\n\t"     /* Load immediate 852 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 852 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[851]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var853(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #853\n\t"     /* Load immediate 853 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 853 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[852]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var854(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #854\n\t"     /* Load immediate 854 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 854 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[853]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var855(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #855\n\t"     /* Load immediate 855 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 855 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[854]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var856(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #856\n\t"     /* Load immediate 856 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 856 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[855]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var857(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #857\n\t"     /* Load immediate 857 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 857 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[856]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var858(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #858\n\t"     /* Load immediate 858 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 858 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[857]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var859(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #859\n\t"     /* Load immediate 859 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 859 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[858]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var860(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #860\n\t"     /* Load immediate 860 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 860 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[859]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var861(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #861\n\t"     /* Load immediate 861 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 861 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[860]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var862(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #862\n\t"     /* Load immediate 862 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 862 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[861]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var863(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #863\n\t"     /* Load immediate 863 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 863 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[862]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var864(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #864\n\t"     /* Load immediate 864 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 864 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[863]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var865(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #865\n\t"     /* Load immediate 865 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 865 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[864]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var866(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #866\n\t"     /* Load immediate 866 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 866 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[865]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var867(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #867\n\t"     /* Load immediate 867 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 867 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[866]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var868(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #868\n\t"     /* Load immediate 868 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 868 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[867]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var869(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #869\n\t"     /* Load immediate 869 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 869 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[868]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var870(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #870\n\t"     /* Load immediate 870 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 870 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[869]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var871(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #871\n\t"     /* Load immediate 871 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 871 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[870]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var872(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #872\n\t"     /* Load immediate 872 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 872 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[871]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var873(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #873\n\t"     /* Load immediate 873 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 873 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[872]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var874(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #874\n\t"     /* Load immediate 874 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 874 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[873]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var875(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #875\n\t"     /* Load immediate 875 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 875 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[874]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var876(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #876\n\t"     /* Load immediate 876 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 876 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[875]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var877(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #877\n\t"     /* Load immediate 877 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 877 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[876]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var878(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #878\n\t"     /* Load immediate 878 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 878 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[877]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var879(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #879\n\t"     /* Load immediate 879 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 879 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[878]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var880(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #880\n\t"     /* Load immediate 880 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 880 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[879]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var881(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #881\n\t"     /* Load immediate 881 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 881 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[880]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var882(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #882\n\t"     /* Load immediate 882 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 882 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[881]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var883(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #883\n\t"     /* Load immediate 883 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 883 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[882]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var884(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #884\n\t"     /* Load immediate 884 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 884 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[883]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var885(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #885\n\t"     /* Load immediate 885 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 885 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[884]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var886(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #886\n\t"     /* Load immediate 886 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 886 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[885]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var887(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #887\n\t"     /* Load immediate 887 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 887 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[886]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var888(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #888\n\t"     /* Load immediate 888 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 888 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[887]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var889(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #889\n\t"     /* Load immediate 889 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 889 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[888]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var890(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #890\n\t"     /* Load immediate 890 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 890 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[889]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var891(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #891\n\t"     /* Load immediate 891 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 891 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[890]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var892(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #892\n\t"     /* Load immediate 892 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 892 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[891]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var893(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #893\n\t"     /* Load immediate 893 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 893 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[892]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var894(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #894\n\t"     /* Load immediate 894 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 894 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[893]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var895(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #895\n\t"     /* Load immediate 895 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 895 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[894]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var896(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #896\n\t"     /* Load immediate 896 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 896 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[895]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var897(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #897\n\t"     /* Load immediate 897 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 897 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[896]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var898(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #898\n\t"     /* Load immediate 898 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 898 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[897]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var899(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #899\n\t"     /* Load immediate 899 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 899 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[898]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var900(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #900\n\t"     /* Load immediate 900 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 900 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[899]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var901(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #901\n\t"     /* Load immediate 901 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 901 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[900]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var902(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #902\n\t"     /* Load immediate 902 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 902 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[901]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var903(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #903\n\t"     /* Load immediate 903 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 903 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[902]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var904(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #904\n\t"     /* Load immediate 904 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 904 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[903]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var905(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #905\n\t"     /* Load immediate 905 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 905 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[904]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var906(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #906\n\t"     /* Load immediate 906 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 906 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[905]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var907(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #907\n\t"     /* Load immediate 907 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 907 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[906]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var908(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #908\n\t"     /* Load immediate 908 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 908 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[907]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var909(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #909\n\t"     /* Load immediate 909 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 909 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[908]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var910(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #910\n\t"     /* Load immediate 910 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 910 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[909]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var911(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #911\n\t"     /* Load immediate 911 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 911 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[910]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var912(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #912\n\t"     /* Load immediate 912 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 912 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[911]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var913(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #913\n\t"     /* Load immediate 913 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 913 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[912]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var914(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #914\n\t"     /* Load immediate 914 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 914 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[913]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var915(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #915\n\t"     /* Load immediate 915 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 915 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[914]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var916(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #916\n\t"     /* Load immediate 916 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 916 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[915]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var917(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #917\n\t"     /* Load immediate 917 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 917 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[916]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var918(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #918\n\t"     /* Load immediate 918 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 918 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[917]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var919(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #919\n\t"     /* Load immediate 919 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 919 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[918]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var920(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #920\n\t"     /* Load immediate 920 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 920 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[919]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var921(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #921\n\t"     /* Load immediate 921 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 921 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[920]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var922(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #922\n\t"     /* Load immediate 922 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 922 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[921]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var923(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #923\n\t"     /* Load immediate 923 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 923 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[922]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var924(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #924\n\t"     /* Load immediate 924 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 924 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[923]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var925(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #925\n\t"     /* Load immediate 925 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 925 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[924]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var926(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #926\n\t"     /* Load immediate 926 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 926 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[925]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var927(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #927\n\t"     /* Load immediate 927 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 927 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[926]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var928(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #928\n\t"     /* Load immediate 928 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 928 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[927]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var929(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #929\n\t"     /* Load immediate 929 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 929 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[928]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var930(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #930\n\t"     /* Load immediate 930 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 930 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[929]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var931(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #931\n\t"     /* Load immediate 931 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 931 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[930]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var932(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #932\n\t"     /* Load immediate 932 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 932 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[931]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var933(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #933\n\t"     /* Load immediate 933 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 933 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[932]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var934(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #934\n\t"     /* Load immediate 934 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 934 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[933]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var935(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #935\n\t"     /* Load immediate 935 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 935 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[934]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var936(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #936\n\t"     /* Load immediate 936 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 936 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[935]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var937(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #937\n\t"     /* Load immediate 937 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 937 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[936]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var938(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #938\n\t"     /* Load immediate 938 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 938 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[937]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var939(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #939\n\t"     /* Load immediate 939 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 939 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[938]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var940(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #940\n\t"     /* Load immediate 940 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 940 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[939]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var941(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #941\n\t"     /* Load immediate 941 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 941 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[940]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var942(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #942\n\t"     /* Load immediate 942 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 942 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[941]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var943(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #943\n\t"     /* Load immediate 943 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 943 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[942]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var944(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #944\n\t"     /* Load immediate 944 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 944 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[943]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var945(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #945\n\t"     /* Load immediate 945 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 945 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[944]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var946(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #946\n\t"     /* Load immediate 946 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 946 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[945]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var947(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #947\n\t"     /* Load immediate 947 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 947 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[946]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var948(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #948\n\t"     /* Load immediate 948 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 948 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[947]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var949(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #949\n\t"     /* Load immediate 949 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 949 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[948]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var950(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #950\n\t"     /* Load immediate 950 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 950 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[949]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var951(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #951\n\t"     /* Load immediate 951 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 951 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[950]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var952(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #952\n\t"     /* Load immediate 952 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 952 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[951]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var953(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #953\n\t"     /* Load immediate 953 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 953 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[952]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var954(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #954\n\t"     /* Load immediate 954 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 954 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[953]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var955(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #955\n\t"     /* Load immediate 955 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 955 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[954]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var956(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #956\n\t"     /* Load immediate 956 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 956 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[955]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var957(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #957\n\t"     /* Load immediate 957 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 957 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[956]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var958(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #958\n\t"     /* Load immediate 958 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 958 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[957]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var959(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #959\n\t"     /* Load immediate 959 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 959 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[958]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var960(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #960\n\t"     /* Load immediate 960 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 960 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[959]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var961(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #961\n\t"     /* Load immediate 961 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 961 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[960]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var962(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #962\n\t"     /* Load immediate 962 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 962 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[961]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var963(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #963\n\t"     /* Load immediate 963 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 963 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[962]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var964(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #964\n\t"     /* Load immediate 964 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 964 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[963]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var965(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #965\n\t"     /* Load immediate 965 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 965 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[964]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var966(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #966\n\t"     /* Load immediate 966 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 966 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[965]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var967(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #967\n\t"     /* Load immediate 967 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 967 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[966]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var968(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #968\n\t"     /* Load immediate 968 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 968 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[967]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var969(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #969\n\t"     /* Load immediate 969 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 969 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[968]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var970(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #970\n\t"     /* Load immediate 970 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 970 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[969]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var971(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #971\n\t"     /* Load immediate 971 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 971 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[970]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var972(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #972\n\t"     /* Load immediate 972 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 972 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[971]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var973(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #973\n\t"     /* Load immediate 973 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 973 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[972]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var974(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #974\n\t"     /* Load immediate 974 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 974 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[973]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var975(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #975\n\t"     /* Load immediate 975 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 975 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[974]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var976(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #976\n\t"     /* Load immediate 976 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 976 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[975]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var977(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #977\n\t"     /* Load immediate 977 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 977 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[976]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var978(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #978\n\t"     /* Load immediate 978 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 978 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[977]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var979(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #979\n\t"     /* Load immediate 979 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 979 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[978]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var980(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #980\n\t"     /* Load immediate 980 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 980 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[979]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var981(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #981\n\t"     /* Load immediate 981 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 981 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[980]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var982(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #982\n\t"     /* Load immediate 982 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 982 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[981]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var983(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #983\n\t"     /* Load immediate 983 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 983 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[982]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var984(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #984\n\t"     /* Load immediate 984 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 984 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[983]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var985(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #985\n\t"     /* Load immediate 985 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 985 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[984]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var986(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #986\n\t"     /* Load immediate 986 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 986 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[985]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var987(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #987\n\t"     /* Load immediate 987 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 987 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[986]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var988(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #988\n\t"     /* Load immediate 988 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 988 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[987]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var989(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #989\n\t"     /* Load immediate 989 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 989 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[988]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var990(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #990\n\t"     /* Load immediate 990 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 990 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[989]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var991(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #991\n\t"     /* Load immediate 991 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 991 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[990]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var992(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #992\n\t"     /* Load immediate 992 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 992 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[991]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var993(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #993\n\t"     /* Load immediate 993 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 993 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[992]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var994(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #994\n\t"     /* Load immediate 994 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 994 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[993]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var995(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #995\n\t"     /* Load immediate 995 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 995 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[994]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var996(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #996\n\t"     /* Load immediate 996 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 996 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[995]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var997(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #997\n\t"     /* Load immediate 997 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 997 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[996]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var998(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #998\n\t"     /* Load immediate 998 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 998 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[997]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var999(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #999\n\t"     /* Load immediate 999 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 999 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[998]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

static inline void execute_full_asm_block_var1000(void (*target)(void*, uint64_t)) {
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\n\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\n\t"     /* Load value from memory into x2 */
        "mov x1, #1000\n\t"     /* Load immediate 1000 into x1 */
        "add x0, sp, x1\n\t"   /* Compute x0 = sp + 1000 */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[999]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}

int main(void) {
    execute_full_asm_block_var1(target_func1);
    execute_full_asm_block_var2(target_func2);
    execute_full_asm_block_var3(target_func3);
    execute_full_asm_block_var4(target_func4);
    execute_full_asm_block_var5(target_func5);
    execute_full_asm_block_var6(target_func6);
    execute_full_asm_block_var7(target_func7);
    execute_full_asm_block_var8(target_func8);
    execute_full_asm_block_var9(target_func9);
    execute_full_asm_block_var10(target_func10);
    execute_full_asm_block_var11(target_func11);
    execute_full_asm_block_var12(target_func12);
    execute_full_asm_block_var13(target_func13);
    execute_full_asm_block_var14(target_func14);
    execute_full_asm_block_var15(target_func15);
    execute_full_asm_block_var16(target_func16);
    execute_full_asm_block_var17(target_func17);
    execute_full_asm_block_var18(target_func18);
    execute_full_asm_block_var19(target_func19);
    execute_full_asm_block_var20(target_func20);
    execute_full_asm_block_var21(target_func21);
    execute_full_asm_block_var22(target_func22);
    execute_full_asm_block_var23(target_func23);
    execute_full_asm_block_var24(target_func24);
    execute_full_asm_block_var25(target_func25);
    execute_full_asm_block_var26(target_func26);
    execute_full_asm_block_var27(target_func27);
    execute_full_asm_block_var28(target_func28);
    execute_full_asm_block_var29(target_func29);
    execute_full_asm_block_var30(target_func30);
    execute_full_asm_block_var31(target_func31);
    execute_full_asm_block_var32(target_func32);
    execute_full_asm_block_var33(target_func33);
    execute_full_asm_block_var34(target_func34);
    execute_full_asm_block_var35(target_func35);
    execute_full_asm_block_var36(target_func36);
    execute_full_asm_block_var37(target_func37);
    execute_full_asm_block_var38(target_func38);
    execute_full_asm_block_var39(target_func39);
    execute_full_asm_block_var40(target_func40);
    execute_full_asm_block_var41(target_func41);
    execute_full_asm_block_var42(target_func42);
    execute_full_asm_block_var43(target_func43);
    execute_full_asm_block_var44(target_func44);
    execute_full_asm_block_var45(target_func45);
    execute_full_asm_block_var46(target_func46);
    execute_full_asm_block_var47(target_func47);
    execute_full_asm_block_var48(target_func48);
    execute_full_asm_block_var49(target_func49);
    execute_full_asm_block_var50(target_func50);
    execute_full_asm_block_var51(target_func51);
    execute_full_asm_block_var52(target_func52);
    execute_full_asm_block_var53(target_func53);
    execute_full_asm_block_var54(target_func54);
    execute_full_asm_block_var55(target_func55);
    execute_full_asm_block_var56(target_func56);
    execute_full_asm_block_var57(target_func57);
    execute_full_asm_block_var58(target_func58);
    execute_full_asm_block_var59(target_func59);
    execute_full_asm_block_var60(target_func60);
    execute_full_asm_block_var61(target_func61);
    execute_full_asm_block_var62(target_func62);
    execute_full_asm_block_var63(target_func63);
    execute_full_asm_block_var64(target_func64);
    execute_full_asm_block_var65(target_func65);
    execute_full_asm_block_var66(target_func66);
    execute_full_asm_block_var67(target_func67);
    execute_full_asm_block_var68(target_func68);
    execute_full_asm_block_var69(target_func69);
    execute_full_asm_block_var70(target_func70);
    execute_full_asm_block_var71(target_func71);
    execute_full_asm_block_var72(target_func72);
    execute_full_asm_block_var73(target_func73);
    execute_full_asm_block_var74(target_func74);
    execute_full_asm_block_var75(target_func75);
    execute_full_asm_block_var76(target_func76);
    execute_full_asm_block_var77(target_func77);
    execute_full_asm_block_var78(target_func78);
    execute_full_asm_block_var79(target_func79);
    execute_full_asm_block_var80(target_func80);
    execute_full_asm_block_var81(target_func81);
    execute_full_asm_block_var82(target_func82);
    execute_full_asm_block_var83(target_func83);
    execute_full_asm_block_var84(target_func84);
    execute_full_asm_block_var85(target_func85);
    execute_full_asm_block_var86(target_func86);
    execute_full_asm_block_var87(target_func87);
    execute_full_asm_block_var88(target_func88);
    execute_full_asm_block_var89(target_func89);
    execute_full_asm_block_var90(target_func90);
    execute_full_asm_block_var91(target_func91);
    execute_full_asm_block_var92(target_func92);
    execute_full_asm_block_var93(target_func93);
    execute_full_asm_block_var94(target_func94);
    execute_full_asm_block_var95(target_func95);
    execute_full_asm_block_var96(target_func96);
    execute_full_asm_block_var97(target_func97);
    execute_full_asm_block_var98(target_func98);
    execute_full_asm_block_var99(target_func99);
    execute_full_asm_block_var100(target_func100);
    execute_full_asm_block_var101(target_func101);
    execute_full_asm_block_var102(target_func102);
    execute_full_asm_block_var103(target_func103);
    execute_full_asm_block_var104(target_func104);
    execute_full_asm_block_var105(target_func105);
    execute_full_asm_block_var106(target_func106);
    execute_full_asm_block_var107(target_func107);
    execute_full_asm_block_var108(target_func108);
    execute_full_asm_block_var109(target_func109);
    execute_full_asm_block_var110(target_func110);
    execute_full_asm_block_var111(target_func111);
    execute_full_asm_block_var112(target_func112);
    execute_full_asm_block_var113(target_func113);
    execute_full_asm_block_var114(target_func114);
    execute_full_asm_block_var115(target_func115);
    execute_full_asm_block_var116(target_func116);
    execute_full_asm_block_var117(target_func117);
    execute_full_asm_block_var118(target_func118);
    execute_full_asm_block_var119(target_func119);
    execute_full_asm_block_var120(target_func120);
    execute_full_asm_block_var121(target_func121);
    execute_full_asm_block_var122(target_func122);
    execute_full_asm_block_var123(target_func123);
    execute_full_asm_block_var124(target_func124);
    execute_full_asm_block_var125(target_func125);
    execute_full_asm_block_var126(target_func126);
    execute_full_asm_block_var127(target_func127);
    execute_full_asm_block_var128(target_func128);
    execute_full_asm_block_var129(target_func129);
    execute_full_asm_block_var130(target_func130);
    execute_full_asm_block_var131(target_func131);
    execute_full_asm_block_var132(target_func132);
    execute_full_asm_block_var133(target_func133);
    execute_full_asm_block_var134(target_func134);
    execute_full_asm_block_var135(target_func135);
    execute_full_asm_block_var136(target_func136);
    execute_full_asm_block_var137(target_func137);
    execute_full_asm_block_var138(target_func138);
    execute_full_asm_block_var139(target_func139);
    execute_full_asm_block_var140(target_func140);
    execute_full_asm_block_var141(target_func141);
    execute_full_asm_block_var142(target_func142);
    execute_full_asm_block_var143(target_func143);
    execute_full_asm_block_var144(target_func144);
    execute_full_asm_block_var145(target_func145);
    execute_full_asm_block_var146(target_func146);
    execute_full_asm_block_var147(target_func147);
    execute_full_asm_block_var148(target_func148);
    execute_full_asm_block_var149(target_func149);
    execute_full_asm_block_var150(target_func150);
    execute_full_asm_block_var151(target_func151);
    execute_full_asm_block_var152(target_func152);
    execute_full_asm_block_var153(target_func153);
    execute_full_asm_block_var154(target_func154);
    execute_full_asm_block_var155(target_func155);
    execute_full_asm_block_var156(target_func156);
    execute_full_asm_block_var157(target_func157);
    execute_full_asm_block_var158(target_func158);
    execute_full_asm_block_var159(target_func159);
    execute_full_asm_block_var160(target_func160);
    execute_full_asm_block_var161(target_func161);
    execute_full_asm_block_var162(target_func162);
    execute_full_asm_block_var163(target_func163);
    execute_full_asm_block_var164(target_func164);
    execute_full_asm_block_var165(target_func165);
    execute_full_asm_block_var166(target_func166);
    execute_full_asm_block_var167(target_func167);
    execute_full_asm_block_var168(target_func168);
    execute_full_asm_block_var169(target_func169);
    execute_full_asm_block_var170(target_func170);
    execute_full_asm_block_var171(target_func171);
    execute_full_asm_block_var172(target_func172);
    execute_full_asm_block_var173(target_func173);
    execute_full_asm_block_var174(target_func174);
    execute_full_asm_block_var175(target_func175);
    execute_full_asm_block_var176(target_func176);
    execute_full_asm_block_var177(target_func177);
    execute_full_asm_block_var178(target_func178);
    execute_full_asm_block_var179(target_func179);
    execute_full_asm_block_var180(target_func180);
    execute_full_asm_block_var181(target_func181);
    execute_full_asm_block_var182(target_func182);
    execute_full_asm_block_var183(target_func183);
    execute_full_asm_block_var184(target_func184);
    execute_full_asm_block_var185(target_func185);
    execute_full_asm_block_var186(target_func186);
    execute_full_asm_block_var187(target_func187);
    execute_full_asm_block_var188(target_func188);
    execute_full_asm_block_var189(target_func189);
    execute_full_asm_block_var190(target_func190);
    execute_full_asm_block_var191(target_func191);
    execute_full_asm_block_var192(target_func192);
    execute_full_asm_block_var193(target_func193);
    execute_full_asm_block_var194(target_func194);
    execute_full_asm_block_var195(target_func195);
    execute_full_asm_block_var196(target_func196);
    execute_full_asm_block_var197(target_func197);
    execute_full_asm_block_var198(target_func198);
    execute_full_asm_block_var199(target_func199);
    execute_full_asm_block_var200(target_func200);
    execute_full_asm_block_var201(target_func201);
    execute_full_asm_block_var202(target_func202);
    execute_full_asm_block_var203(target_func203);
    execute_full_asm_block_var204(target_func204);
    execute_full_asm_block_var205(target_func205);
    execute_full_asm_block_var206(target_func206);
    execute_full_asm_block_var207(target_func207);
    execute_full_asm_block_var208(target_func208);
    execute_full_asm_block_var209(target_func209);
    execute_full_asm_block_var210(target_func210);
    execute_full_asm_block_var211(target_func211);
    execute_full_asm_block_var212(target_func212);
    execute_full_asm_block_var213(target_func213);
    execute_full_asm_block_var214(target_func214);
    execute_full_asm_block_var215(target_func215);
    execute_full_asm_block_var216(target_func216);
    execute_full_asm_block_var217(target_func217);
    execute_full_asm_block_var218(target_func218);
    execute_full_asm_block_var219(target_func219);
    execute_full_asm_block_var220(target_func220);
    execute_full_asm_block_var221(target_func221);
    execute_full_asm_block_var222(target_func222);
    execute_full_asm_block_var223(target_func223);
    execute_full_asm_block_var224(target_func224);
    execute_full_asm_block_var225(target_func225);
    execute_full_asm_block_var226(target_func226);
    execute_full_asm_block_var227(target_func227);
    execute_full_asm_block_var228(target_func228);
    execute_full_asm_block_var229(target_func229);
    execute_full_asm_block_var230(target_func230);
    execute_full_asm_block_var231(target_func231);
    execute_full_asm_block_var232(target_func232);
    execute_full_asm_block_var233(target_func233);
    execute_full_asm_block_var234(target_func234);
    execute_full_asm_block_var235(target_func235);
    execute_full_asm_block_var236(target_func236);
    execute_full_asm_block_var237(target_func237);
    execute_full_asm_block_var238(target_func238);
    execute_full_asm_block_var239(target_func239);
    execute_full_asm_block_var240(target_func240);
    execute_full_asm_block_var241(target_func241);
    execute_full_asm_block_var242(target_func242);
    execute_full_asm_block_var243(target_func243);
    execute_full_asm_block_var244(target_func244);
    execute_full_asm_block_var245(target_func245);
    execute_full_asm_block_var246(target_func246);
    execute_full_asm_block_var247(target_func247);
    execute_full_asm_block_var248(target_func248);
    execute_full_asm_block_var249(target_func249);
    execute_full_asm_block_var250(target_func250);
    execute_full_asm_block_var251(target_func251);
    execute_full_asm_block_var252(target_func252);
    execute_full_asm_block_var253(target_func253);
    execute_full_asm_block_var254(target_func254);
    execute_full_asm_block_var255(target_func255);
    execute_full_asm_block_var256(target_func256);
    execute_full_asm_block_var257(target_func257);
    execute_full_asm_block_var258(target_func258);
    execute_full_asm_block_var259(target_func259);
    execute_full_asm_block_var260(target_func260);
    execute_full_asm_block_var261(target_func261);
    execute_full_asm_block_var262(target_func262);
    execute_full_asm_block_var263(target_func263);
    execute_full_asm_block_var264(target_func264);
    execute_full_asm_block_var265(target_func265);
    execute_full_asm_block_var266(target_func266);
    execute_full_asm_block_var267(target_func267);
    execute_full_asm_block_var268(target_func268);
    execute_full_asm_block_var269(target_func269);
    execute_full_asm_block_var270(target_func270);
    execute_full_asm_block_var271(target_func271);
    execute_full_asm_block_var272(target_func272);
    execute_full_asm_block_var273(target_func273);
    execute_full_asm_block_var274(target_func274);
    execute_full_asm_block_var275(target_func275);
    execute_full_asm_block_var276(target_func276);
    execute_full_asm_block_var277(target_func277);
    execute_full_asm_block_var278(target_func278);
    execute_full_asm_block_var279(target_func279);
    execute_full_asm_block_var280(target_func280);
    execute_full_asm_block_var281(target_func281);
    execute_full_asm_block_var282(target_func282);
    execute_full_asm_block_var283(target_func283);
    execute_full_asm_block_var284(target_func284);
    execute_full_asm_block_var285(target_func285);
    execute_full_asm_block_var286(target_func286);
    execute_full_asm_block_var287(target_func287);
    execute_full_asm_block_var288(target_func288);
    execute_full_asm_block_var289(target_func289);
    execute_full_asm_block_var290(target_func290);
    execute_full_asm_block_var291(target_func291);
    execute_full_asm_block_var292(target_func292);
    execute_full_asm_block_var293(target_func293);
    execute_full_asm_block_var294(target_func294);
    execute_full_asm_block_var295(target_func295);
    execute_full_asm_block_var296(target_func296);
    execute_full_asm_block_var297(target_func297);
    execute_full_asm_block_var298(target_func298);
    execute_full_asm_block_var299(target_func299);
    execute_full_asm_block_var300(target_func300);
    execute_full_asm_block_var301(target_func301);
    execute_full_asm_block_var302(target_func302);
    execute_full_asm_block_var303(target_func303);
    execute_full_asm_block_var304(target_func304);
    execute_full_asm_block_var305(target_func305);
    execute_full_asm_block_var306(target_func306);
    execute_full_asm_block_var307(target_func307);
    execute_full_asm_block_var308(target_func308);
    execute_full_asm_block_var309(target_func309);
    execute_full_asm_block_var310(target_func310);
    execute_full_asm_block_var311(target_func311);
    execute_full_asm_block_var312(target_func312);
    execute_full_asm_block_var313(target_func313);
    execute_full_asm_block_var314(target_func314);
    execute_full_asm_block_var315(target_func315);
    execute_full_asm_block_var316(target_func316);
    execute_full_asm_block_var317(target_func317);
    execute_full_asm_block_var318(target_func318);
    execute_full_asm_block_var319(target_func319);
    execute_full_asm_block_var320(target_func320);
    execute_full_asm_block_var321(target_func321);
    execute_full_asm_block_var322(target_func322);
    execute_full_asm_block_var323(target_func323);
    execute_full_asm_block_var324(target_func324);
    execute_full_asm_block_var325(target_func325);
    execute_full_asm_block_var326(target_func326);
    execute_full_asm_block_var327(target_func327);
    execute_full_asm_block_var328(target_func328);
    execute_full_asm_block_var329(target_func329);
    execute_full_asm_block_var330(target_func330);
    execute_full_asm_block_var331(target_func331);
    execute_full_asm_block_var332(target_func332);
    execute_full_asm_block_var333(target_func333);
    execute_full_asm_block_var334(target_func334);
    execute_full_asm_block_var335(target_func335);
    execute_full_asm_block_var336(target_func336);
    execute_full_asm_block_var337(target_func337);
    execute_full_asm_block_var338(target_func338);
    execute_full_asm_block_var339(target_func339);
    execute_full_asm_block_var340(target_func340);
    execute_full_asm_block_var341(target_func341);
    execute_full_asm_block_var342(target_func342);
    execute_full_asm_block_var343(target_func343);
    execute_full_asm_block_var344(target_func344);
    execute_full_asm_block_var345(target_func345);
    execute_full_asm_block_var346(target_func346);
    execute_full_asm_block_var347(target_func347);
    execute_full_asm_block_var348(target_func348);
    execute_full_asm_block_var349(target_func349);
    execute_full_asm_block_var350(target_func350);
    execute_full_asm_block_var351(target_func351);
    execute_full_asm_block_var352(target_func352);
    execute_full_asm_block_var353(target_func353);
    execute_full_asm_block_var354(target_func354);
    execute_full_asm_block_var355(target_func355);
    execute_full_asm_block_var356(target_func356);
    execute_full_asm_block_var357(target_func357);
    execute_full_asm_block_var358(target_func358);
    execute_full_asm_block_var359(target_func359);
    execute_full_asm_block_var360(target_func360);
    execute_full_asm_block_var361(target_func361);
    execute_full_asm_block_var362(target_func362);
    execute_full_asm_block_var363(target_func363);
    execute_full_asm_block_var364(target_func364);
    execute_full_asm_block_var365(target_func365);
    execute_full_asm_block_var366(target_func366);
    execute_full_asm_block_var367(target_func367);
    execute_full_asm_block_var368(target_func368);
    execute_full_asm_block_var369(target_func369);
    execute_full_asm_block_var370(target_func370);
    execute_full_asm_block_var371(target_func371);
    execute_full_asm_block_var372(target_func372);
    execute_full_asm_block_var373(target_func373);
    execute_full_asm_block_var374(target_func374);
    execute_full_asm_block_var375(target_func375);
    execute_full_asm_block_var376(target_func376);
    execute_full_asm_block_var377(target_func377);
    execute_full_asm_block_var378(target_func378);
    execute_full_asm_block_var379(target_func379);
    execute_full_asm_block_var380(target_func380);
    execute_full_asm_block_var381(target_func381);
    execute_full_asm_block_var382(target_func382);
    execute_full_asm_block_var383(target_func383);
    execute_full_asm_block_var384(target_func384);
    execute_full_asm_block_var385(target_func385);
    execute_full_asm_block_var386(target_func386);
    execute_full_asm_block_var387(target_func387);
    execute_full_asm_block_var388(target_func388);
    execute_full_asm_block_var389(target_func389);
    execute_full_asm_block_var390(target_func390);
    execute_full_asm_block_var391(target_func391);
    execute_full_asm_block_var392(target_func392);
    execute_full_asm_block_var393(target_func393);
    execute_full_asm_block_var394(target_func394);
    execute_full_asm_block_var395(target_func395);
    execute_full_asm_block_var396(target_func396);
    execute_full_asm_block_var397(target_func397);
    execute_full_asm_block_var398(target_func398);
    execute_full_asm_block_var399(target_func399);
    execute_full_asm_block_var400(target_func400);
    execute_full_asm_block_var401(target_func401);
    execute_full_asm_block_var402(target_func402);
    execute_full_asm_block_var403(target_func403);
    execute_full_asm_block_var404(target_func404);
    execute_full_asm_block_var405(target_func405);
    execute_full_asm_block_var406(target_func406);
    execute_full_asm_block_var407(target_func407);
    execute_full_asm_block_var408(target_func408);
    execute_full_asm_block_var409(target_func409);
    execute_full_asm_block_var410(target_func410);
    execute_full_asm_block_var411(target_func411);
    execute_full_asm_block_var412(target_func412);
    execute_full_asm_block_var413(target_func413);
    execute_full_asm_block_var414(target_func414);
    execute_full_asm_block_var415(target_func415);
    execute_full_asm_block_var416(target_func416);
    execute_full_asm_block_var417(target_func417);
    execute_full_asm_block_var418(target_func418);
    execute_full_asm_block_var419(target_func419);
    execute_full_asm_block_var420(target_func420);
    execute_full_asm_block_var421(target_func421);
    execute_full_asm_block_var422(target_func422);
    execute_full_asm_block_var423(target_func423);
    execute_full_asm_block_var424(target_func424);
    execute_full_asm_block_var425(target_func425);
    execute_full_asm_block_var426(target_func426);
    execute_full_asm_block_var427(target_func427);
    execute_full_asm_block_var428(target_func428);
    execute_full_asm_block_var429(target_func429);
    execute_full_asm_block_var430(target_func430);
    execute_full_asm_block_var431(target_func431);
    execute_full_asm_block_var432(target_func432);
    execute_full_asm_block_var433(target_func433);
    execute_full_asm_block_var434(target_func434);
    execute_full_asm_block_var435(target_func435);
    execute_full_asm_block_var436(target_func436);
    execute_full_asm_block_var437(target_func437);
    execute_full_asm_block_var438(target_func438);
    execute_full_asm_block_var439(target_func439);
    execute_full_asm_block_var440(target_func440);
    execute_full_asm_block_var441(target_func441);
    execute_full_asm_block_var442(target_func442);
    execute_full_asm_block_var443(target_func443);
    execute_full_asm_block_var444(target_func444);
    execute_full_asm_block_var445(target_func445);
    execute_full_asm_block_var446(target_func446);
    execute_full_asm_block_var447(target_func447);
    execute_full_asm_block_var448(target_func448);
    execute_full_asm_block_var449(target_func449);
    execute_full_asm_block_var450(target_func450);
    execute_full_asm_block_var451(target_func451);
    execute_full_asm_block_var452(target_func452);
    execute_full_asm_block_var453(target_func453);
    execute_full_asm_block_var454(target_func454);
    execute_full_asm_block_var455(target_func455);
    execute_full_asm_block_var456(target_func456);
    execute_full_asm_block_var457(target_func457);
    execute_full_asm_block_var458(target_func458);
    execute_full_asm_block_var459(target_func459);
    execute_full_asm_block_var460(target_func460);
    execute_full_asm_block_var461(target_func461);
    execute_full_asm_block_var462(target_func462);
    execute_full_asm_block_var463(target_func463);
    execute_full_asm_block_var464(target_func464);
    execute_full_asm_block_var465(target_func465);
    execute_full_asm_block_var466(target_func466);
    execute_full_asm_block_var467(target_func467);
    execute_full_asm_block_var468(target_func468);
    execute_full_asm_block_var469(target_func469);
    execute_full_asm_block_var470(target_func470);
    execute_full_asm_block_var471(target_func471);
    execute_full_asm_block_var472(target_func472);
    execute_full_asm_block_var473(target_func473);
    execute_full_asm_block_var474(target_func474);
    execute_full_asm_block_var475(target_func475);
    execute_full_asm_block_var476(target_func476);
    execute_full_asm_block_var477(target_func477);
    execute_full_asm_block_var478(target_func478);
    execute_full_asm_block_var479(target_func479);
    execute_full_asm_block_var480(target_func480);
    execute_full_asm_block_var481(target_func481);
    execute_full_asm_block_var482(target_func482);
    execute_full_asm_block_var483(target_func483);
    execute_full_asm_block_var484(target_func484);
    execute_full_asm_block_var485(target_func485);
    execute_full_asm_block_var486(target_func486);
    execute_full_asm_block_var487(target_func487);
    execute_full_asm_block_var488(target_func488);
    execute_full_asm_block_var489(target_func489);
    execute_full_asm_block_var490(target_func490);
    execute_full_asm_block_var491(target_func491);
    execute_full_asm_block_var492(target_func492);
    execute_full_asm_block_var493(target_func493);
    execute_full_asm_block_var494(target_func494);
    execute_full_asm_block_var495(target_func495);
    execute_full_asm_block_var496(target_func496);
    execute_full_asm_block_var497(target_func497);
    execute_full_asm_block_var498(target_func498);
    execute_full_asm_block_var499(target_func499);
    execute_full_asm_block_var500(target_func500);
    execute_full_asm_block_var501(target_func501);
    execute_full_asm_block_var502(target_func502);
    execute_full_asm_block_var503(target_func503);
    execute_full_asm_block_var504(target_func504);
    execute_full_asm_block_var505(target_func505);
    execute_full_asm_block_var506(target_func506);
    execute_full_asm_block_var507(target_func507);
    execute_full_asm_block_var508(target_func508);
    execute_full_asm_block_var509(target_func509);
    execute_full_asm_block_var510(target_func510);
    execute_full_asm_block_var511(target_func511);
    execute_full_asm_block_var512(target_func512);
    execute_full_asm_block_var513(target_func513);
    execute_full_asm_block_var514(target_func514);
    execute_full_asm_block_var515(target_func515);
    execute_full_asm_block_var516(target_func516);
    execute_full_asm_block_var517(target_func517);
    execute_full_asm_block_var518(target_func518);
    execute_full_asm_block_var519(target_func519);
    execute_full_asm_block_var520(target_func520);
    execute_full_asm_block_var521(target_func521);
    execute_full_asm_block_var522(target_func522);
    execute_full_asm_block_var523(target_func523);
    execute_full_asm_block_var524(target_func524);
    execute_full_asm_block_var525(target_func525);
    execute_full_asm_block_var526(target_func526);
    execute_full_asm_block_var527(target_func527);
    execute_full_asm_block_var528(target_func528);
    execute_full_asm_block_var529(target_func529);
    execute_full_asm_block_var530(target_func530);
    execute_full_asm_block_var531(target_func531);
    execute_full_asm_block_var532(target_func532);
    execute_full_asm_block_var533(target_func533);
    execute_full_asm_block_var534(target_func534);
    execute_full_asm_block_var535(target_func535);
    execute_full_asm_block_var536(target_func536);
    execute_full_asm_block_var537(target_func537);
    execute_full_asm_block_var538(target_func538);
    execute_full_asm_block_var539(target_func539);
    execute_full_asm_block_var540(target_func540);
    execute_full_asm_block_var541(target_func541);
    execute_full_asm_block_var542(target_func542);
    execute_full_asm_block_var543(target_func543);
    execute_full_asm_block_var544(target_func544);
    execute_full_asm_block_var545(target_func545);
    execute_full_asm_block_var546(target_func546);
    execute_full_asm_block_var547(target_func547);
    execute_full_asm_block_var548(target_func548);
    execute_full_asm_block_var549(target_func549);
    execute_full_asm_block_var550(target_func550);
    execute_full_asm_block_var551(target_func551);
    execute_full_asm_block_var552(target_func552);
    execute_full_asm_block_var553(target_func553);
    execute_full_asm_block_var554(target_func554);
    execute_full_asm_block_var555(target_func555);
    execute_full_asm_block_var556(target_func556);
    execute_full_asm_block_var557(target_func557);
    execute_full_asm_block_var558(target_func558);
    execute_full_asm_block_var559(target_func559);
    execute_full_asm_block_var560(target_func560);
    execute_full_asm_block_var561(target_func561);
    execute_full_asm_block_var562(target_func562);
    execute_full_asm_block_var563(target_func563);
    execute_full_asm_block_var564(target_func564);
    execute_full_asm_block_var565(target_func565);
    execute_full_asm_block_var566(target_func566);
    execute_full_asm_block_var567(target_func567);
    execute_full_asm_block_var568(target_func568);
    execute_full_asm_block_var569(target_func569);
    execute_full_asm_block_var570(target_func570);
    execute_full_asm_block_var571(target_func571);
    execute_full_asm_block_var572(target_func572);
    execute_full_asm_block_var573(target_func573);
    execute_full_asm_block_var574(target_func574);
    execute_full_asm_block_var575(target_func575);
    execute_full_asm_block_var576(target_func576);
    execute_full_asm_block_var577(target_func577);
    execute_full_asm_block_var578(target_func578);
    execute_full_asm_block_var579(target_func579);
    execute_full_asm_block_var580(target_func580);
    execute_full_asm_block_var581(target_func581);
    execute_full_asm_block_var582(target_func582);
    execute_full_asm_block_var583(target_func583);
    execute_full_asm_block_var584(target_func584);
    execute_full_asm_block_var585(target_func585);
    execute_full_asm_block_var586(target_func586);
    execute_full_asm_block_var587(target_func587);
    execute_full_asm_block_var588(target_func588);
    execute_full_asm_block_var589(target_func589);
    execute_full_asm_block_var590(target_func590);
    execute_full_asm_block_var591(target_func591);
    execute_full_asm_block_var592(target_func592);
    execute_full_asm_block_var593(target_func593);
    execute_full_asm_block_var594(target_func594);
    execute_full_asm_block_var595(target_func595);
    execute_full_asm_block_var596(target_func596);
    execute_full_asm_block_var597(target_func597);
    execute_full_asm_block_var598(target_func598);
    execute_full_asm_block_var599(target_func599);
    execute_full_asm_block_var600(target_func600);
    execute_full_asm_block_var601(target_func601);
    execute_full_asm_block_var602(target_func602);
    execute_full_asm_block_var603(target_func603);
    execute_full_asm_block_var604(target_func604);
    execute_full_asm_block_var605(target_func605);
    execute_full_asm_block_var606(target_func606);
    execute_full_asm_block_var607(target_func607);
    execute_full_asm_block_var608(target_func608);
    execute_full_asm_block_var609(target_func609);
    execute_full_asm_block_var610(target_func610);
    execute_full_asm_block_var611(target_func611);
    execute_full_asm_block_var612(target_func612);
    execute_full_asm_block_var613(target_func613);
    execute_full_asm_block_var614(target_func614);
    execute_full_asm_block_var615(target_func615);
    execute_full_asm_block_var616(target_func616);
    execute_full_asm_block_var617(target_func617);
    execute_full_asm_block_var618(target_func618);
    execute_full_asm_block_var619(target_func619);
    execute_full_asm_block_var620(target_func620);
    execute_full_asm_block_var621(target_func621);
    execute_full_asm_block_var622(target_func622);
    execute_full_asm_block_var623(target_func623);
    execute_full_asm_block_var624(target_func624);
    execute_full_asm_block_var625(target_func625);
    execute_full_asm_block_var626(target_func626);
    execute_full_asm_block_var627(target_func627);
    execute_full_asm_block_var628(target_func628);
    execute_full_asm_block_var629(target_func629);
    execute_full_asm_block_var630(target_func630);
    execute_full_asm_block_var631(target_func631);
    execute_full_asm_block_var632(target_func632);
    execute_full_asm_block_var633(target_func633);
    execute_full_asm_block_var634(target_func634);
    execute_full_asm_block_var635(target_func635);
    execute_full_asm_block_var636(target_func636);
    execute_full_asm_block_var637(target_func637);
    execute_full_asm_block_var638(target_func638);
    execute_full_asm_block_var639(target_func639);
    execute_full_asm_block_var640(target_func640);
    execute_full_asm_block_var641(target_func641);
    execute_full_asm_block_var642(target_func642);
    execute_full_asm_block_var643(target_func643);
    execute_full_asm_block_var644(target_func644);
    execute_full_asm_block_var645(target_func645);
    execute_full_asm_block_var646(target_func646);
    execute_full_asm_block_var647(target_func647);
    execute_full_asm_block_var648(target_func648);
    execute_full_asm_block_var649(target_func649);
    execute_full_asm_block_var650(target_func650);
    execute_full_asm_block_var651(target_func651);
    execute_full_asm_block_var652(target_func652);
    execute_full_asm_block_var653(target_func653);
    execute_full_asm_block_var654(target_func654);
    execute_full_asm_block_var655(target_func655);
    execute_full_asm_block_var656(target_func656);
    execute_full_asm_block_var657(target_func657);
    execute_full_asm_block_var658(target_func658);
    execute_full_asm_block_var659(target_func659);
    execute_full_asm_block_var660(target_func660);
    execute_full_asm_block_var661(target_func661);
    execute_full_asm_block_var662(target_func662);
    execute_full_asm_block_var663(target_func663);
    execute_full_asm_block_var664(target_func664);
    execute_full_asm_block_var665(target_func665);
    execute_full_asm_block_var666(target_func666);
    execute_full_asm_block_var667(target_func667);
    execute_full_asm_block_var668(target_func668);
    execute_full_asm_block_var669(target_func669);
    execute_full_asm_block_var670(target_func670);
    execute_full_asm_block_var671(target_func671);
    execute_full_asm_block_var672(target_func672);
    execute_full_asm_block_var673(target_func673);
    execute_full_asm_block_var674(target_func674);
    execute_full_asm_block_var675(target_func675);
    execute_full_asm_block_var676(target_func676);
    execute_full_asm_block_var677(target_func677);
    execute_full_asm_block_var678(target_func678);
    execute_full_asm_block_var679(target_func679);
    execute_full_asm_block_var680(target_func680);
    execute_full_asm_block_var681(target_func681);
    execute_full_asm_block_var682(target_func682);
    execute_full_asm_block_var683(target_func683);
    execute_full_asm_block_var684(target_func684);
    execute_full_asm_block_var685(target_func685);
    execute_full_asm_block_var686(target_func686);
    execute_full_asm_block_var687(target_func687);
    execute_full_asm_block_var688(target_func688);
    execute_full_asm_block_var689(target_func689);
    execute_full_asm_block_var690(target_func690);
    execute_full_asm_block_var691(target_func691);
    execute_full_asm_block_var692(target_func692);
    execute_full_asm_block_var693(target_func693);
    execute_full_asm_block_var694(target_func694);
    execute_full_asm_block_var695(target_func695);
    execute_full_asm_block_var696(target_func696);
    execute_full_asm_block_var697(target_func697);
    execute_full_asm_block_var698(target_func698);
    execute_full_asm_block_var699(target_func699);
    execute_full_asm_block_var700(target_func700);
    execute_full_asm_block_var701(target_func701);
    execute_full_asm_block_var702(target_func702);
    execute_full_asm_block_var703(target_func703);
    execute_full_asm_block_var704(target_func704);
    execute_full_asm_block_var705(target_func705);
    execute_full_asm_block_var706(target_func706);
    execute_full_asm_block_var707(target_func707);
    execute_full_asm_block_var708(target_func708);
    execute_full_asm_block_var709(target_func709);
    execute_full_asm_block_var710(target_func710);
    execute_full_asm_block_var711(target_func711);
    execute_full_asm_block_var712(target_func712);
    execute_full_asm_block_var713(target_func713);
    execute_full_asm_block_var714(target_func714);
    execute_full_asm_block_var715(target_func715);
    execute_full_asm_block_var716(target_func716);
    execute_full_asm_block_var717(target_func717);
    execute_full_asm_block_var718(target_func718);
    execute_full_asm_block_var719(target_func719);
    execute_full_asm_block_var720(target_func720);
    execute_full_asm_block_var721(target_func721);
    execute_full_asm_block_var722(target_func722);
    execute_full_asm_block_var723(target_func723);
    execute_full_asm_block_var724(target_func724);
    execute_full_asm_block_var725(target_func725);
    execute_full_asm_block_var726(target_func726);
    execute_full_asm_block_var727(target_func727);
    execute_full_asm_block_var728(target_func728);
    execute_full_asm_block_var729(target_func729);
    execute_full_asm_block_var730(target_func730);
    execute_full_asm_block_var731(target_func731);
    execute_full_asm_block_var732(target_func732);
    execute_full_asm_block_var733(target_func733);
    execute_full_asm_block_var734(target_func734);
    execute_full_asm_block_var735(target_func735);
    execute_full_asm_block_var736(target_func736);
    execute_full_asm_block_var737(target_func737);
    execute_full_asm_block_var738(target_func738);
    execute_full_asm_block_var739(target_func739);
    execute_full_asm_block_var740(target_func740);
    execute_full_asm_block_var741(target_func741);
    execute_full_asm_block_var742(target_func742);
    execute_full_asm_block_var743(target_func743);
    execute_full_asm_block_var744(target_func744);
    execute_full_asm_block_var745(target_func745);
    execute_full_asm_block_var746(target_func746);
    execute_full_asm_block_var747(target_func747);
    execute_full_asm_block_var748(target_func748);
    execute_full_asm_block_var749(target_func749);
    execute_full_asm_block_var750(target_func750);
    execute_full_asm_block_var751(target_func751);
    execute_full_asm_block_var752(target_func752);
    execute_full_asm_block_var753(target_func753);
    execute_full_asm_block_var754(target_func754);
    execute_full_asm_block_var755(target_func755);
    execute_full_asm_block_var756(target_func756);
    execute_full_asm_block_var757(target_func757);
    execute_full_asm_block_var758(target_func758);
    execute_full_asm_block_var759(target_func759);
    execute_full_asm_block_var760(target_func760);
    execute_full_asm_block_var761(target_func761);
    execute_full_asm_block_var762(target_func762);
    execute_full_asm_block_var763(target_func763);
    execute_full_asm_block_var764(target_func764);
    execute_full_asm_block_var765(target_func765);
    execute_full_asm_block_var766(target_func766);
    execute_full_asm_block_var767(target_func767);
    execute_full_asm_block_var768(target_func768);
    execute_full_asm_block_var769(target_func769);
    execute_full_asm_block_var770(target_func770);
    execute_full_asm_block_var771(target_func771);
    execute_full_asm_block_var772(target_func772);
    execute_full_asm_block_var773(target_func773);
    execute_full_asm_block_var774(target_func774);
    execute_full_asm_block_var775(target_func775);
    execute_full_asm_block_var776(target_func776);
    execute_full_asm_block_var777(target_func777);
    execute_full_asm_block_var778(target_func778);
    execute_full_asm_block_var779(target_func779);
    execute_full_asm_block_var780(target_func780);
    execute_full_asm_block_var781(target_func781);
    execute_full_asm_block_var782(target_func782);
    execute_full_asm_block_var783(target_func783);
    execute_full_asm_block_var784(target_func784);
    execute_full_asm_block_var785(target_func785);
    execute_full_asm_block_var786(target_func786);
    execute_full_asm_block_var787(target_func787);
    execute_full_asm_block_var788(target_func788);
    execute_full_asm_block_var789(target_func789);
    execute_full_asm_block_var790(target_func790);
    execute_full_asm_block_var791(target_func791);
    execute_full_asm_block_var792(target_func792);
    execute_full_asm_block_var793(target_func793);
    execute_full_asm_block_var794(target_func794);
    execute_full_asm_block_var795(target_func795);
    execute_full_asm_block_var796(target_func796);
    execute_full_asm_block_var797(target_func797);
    execute_full_asm_block_var798(target_func798);
    execute_full_asm_block_var799(target_func799);
    execute_full_asm_block_var800(target_func800);
    execute_full_asm_block_var801(target_func801);
    execute_full_asm_block_var802(target_func802);
    execute_full_asm_block_var803(target_func803);
    execute_full_asm_block_var804(target_func804);
    execute_full_asm_block_var805(target_func805);
    execute_full_asm_block_var806(target_func806);
    execute_full_asm_block_var807(target_func807);
    execute_full_asm_block_var808(target_func808);
    execute_full_asm_block_var809(target_func809);
    execute_full_asm_block_var810(target_func810);
    execute_full_asm_block_var811(target_func811);
    execute_full_asm_block_var812(target_func812);
    execute_full_asm_block_var813(target_func813);
    execute_full_asm_block_var814(target_func814);
    execute_full_asm_block_var815(target_func815);
    execute_full_asm_block_var816(target_func816);
    execute_full_asm_block_var817(target_func817);
    execute_full_asm_block_var818(target_func818);
    execute_full_asm_block_var819(target_func819);
    execute_full_asm_block_var820(target_func820);
    execute_full_asm_block_var821(target_func821);
    execute_full_asm_block_var822(target_func822);
    execute_full_asm_block_var823(target_func823);
    execute_full_asm_block_var824(target_func824);
    execute_full_asm_block_var825(target_func825);
    execute_full_asm_block_var826(target_func826);
    execute_full_asm_block_var827(target_func827);
    execute_full_asm_block_var828(target_func828);
    execute_full_asm_block_var829(target_func829);
    execute_full_asm_block_var830(target_func830);
    execute_full_asm_block_var831(target_func831);
    execute_full_asm_block_var832(target_func832);
    execute_full_asm_block_var833(target_func833);
    execute_full_asm_block_var834(target_func834);
    execute_full_asm_block_var835(target_func835);
    execute_full_asm_block_var836(target_func836);
    execute_full_asm_block_var837(target_func837);
    execute_full_asm_block_var838(target_func838);
    execute_full_asm_block_var839(target_func839);
    execute_full_asm_block_var840(target_func840);
    execute_full_asm_block_var841(target_func841);
    execute_full_asm_block_var842(target_func842);
    execute_full_asm_block_var843(target_func843);
    execute_full_asm_block_var844(target_func844);
    execute_full_asm_block_var845(target_func845);
    execute_full_asm_block_var846(target_func846);
    execute_full_asm_block_var847(target_func847);
    execute_full_asm_block_var848(target_func848);
    execute_full_asm_block_var849(target_func849);
    execute_full_asm_block_var850(target_func850);
    execute_full_asm_block_var851(target_func851);
    execute_full_asm_block_var852(target_func852);
    execute_full_asm_block_var853(target_func853);
    execute_full_asm_block_var854(target_func854);
    execute_full_asm_block_var855(target_func855);
    execute_full_asm_block_var856(target_func856);
    execute_full_asm_block_var857(target_func857);
    execute_full_asm_block_var858(target_func858);
    execute_full_asm_block_var859(target_func859);
    execute_full_asm_block_var860(target_func860);
    execute_full_asm_block_var861(target_func861);
    execute_full_asm_block_var862(target_func862);
    execute_full_asm_block_var863(target_func863);
    execute_full_asm_block_var864(target_func864);
    execute_full_asm_block_var865(target_func865);
    execute_full_asm_block_var866(target_func866);
    execute_full_asm_block_var867(target_func867);
    execute_full_asm_block_var868(target_func868);
    execute_full_asm_block_var869(target_func869);
    execute_full_asm_block_var870(target_func870);
    execute_full_asm_block_var871(target_func871);
    execute_full_asm_block_var872(target_func872);
    execute_full_asm_block_var873(target_func873);
    execute_full_asm_block_var874(target_func874);
    execute_full_asm_block_var875(target_func875);
    execute_full_asm_block_var876(target_func876);
    execute_full_asm_block_var877(target_func877);
    execute_full_asm_block_var878(target_func878);
    execute_full_asm_block_var879(target_func879);
    execute_full_asm_block_var880(target_func880);
    execute_full_asm_block_var881(target_func881);
    execute_full_asm_block_var882(target_func882);
    execute_full_asm_block_var883(target_func883);
    execute_full_asm_block_var884(target_func884);
    execute_full_asm_block_var885(target_func885);
    execute_full_asm_block_var886(target_func886);
    execute_full_asm_block_var887(target_func887);
    execute_full_asm_block_var888(target_func888);
    execute_full_asm_block_var889(target_func889);
    execute_full_asm_block_var890(target_func890);
    execute_full_asm_block_var891(target_func891);
    execute_full_asm_block_var892(target_func892);
    execute_full_asm_block_var893(target_func893);
    execute_full_asm_block_var894(target_func894);
    execute_full_asm_block_var895(target_func895);
    execute_full_asm_block_var896(target_func896);
    execute_full_asm_block_var897(target_func897);
    execute_full_asm_block_var898(target_func898);
    execute_full_asm_block_var899(target_func899);
    execute_full_asm_block_var900(target_func900);
    execute_full_asm_block_var901(target_func901);
    execute_full_asm_block_var902(target_func902);
    execute_full_asm_block_var903(target_func903);
    execute_full_asm_block_var904(target_func904);
    execute_full_asm_block_var905(target_func905);
    execute_full_asm_block_var906(target_func906);
    execute_full_asm_block_var907(target_func907);
    execute_full_asm_block_var908(target_func908);
    execute_full_asm_block_var909(target_func909);
    execute_full_asm_block_var910(target_func910);
    execute_full_asm_block_var911(target_func911);
    execute_full_asm_block_var912(target_func912);
    execute_full_asm_block_var913(target_func913);
    execute_full_asm_block_var914(target_func914);
    execute_full_asm_block_var915(target_func915);
    execute_full_asm_block_var916(target_func916);
    execute_full_asm_block_var917(target_func917);
    execute_full_asm_block_var918(target_func918);
    execute_full_asm_block_var919(target_func919);
    execute_full_asm_block_var920(target_func920);
    execute_full_asm_block_var921(target_func921);
    execute_full_asm_block_var922(target_func922);
    execute_full_asm_block_var923(target_func923);
    execute_full_asm_block_var924(target_func924);
    execute_full_asm_block_var925(target_func925);
    execute_full_asm_block_var926(target_func926);
    execute_full_asm_block_var927(target_func927);
    execute_full_asm_block_var928(target_func928);
    execute_full_asm_block_var929(target_func929);
    execute_full_asm_block_var930(target_func930);
    execute_full_asm_block_var931(target_func931);
    execute_full_asm_block_var932(target_func932);
    execute_full_asm_block_var933(target_func933);
    execute_full_asm_block_var934(target_func934);
    execute_full_asm_block_var935(target_func935);
    execute_full_asm_block_var936(target_func936);
    execute_full_asm_block_var937(target_func937);
    execute_full_asm_block_var938(target_func938);
    execute_full_asm_block_var939(target_func939);
    execute_full_asm_block_var940(target_func940);
    execute_full_asm_block_var941(target_func941);
    execute_full_asm_block_var942(target_func942);
    execute_full_asm_block_var943(target_func943);
    execute_full_asm_block_var944(target_func944);
    execute_full_asm_block_var945(target_func945);
    execute_full_asm_block_var946(target_func946);
    execute_full_asm_block_var947(target_func947);
    execute_full_asm_block_var948(target_func948);
    execute_full_asm_block_var949(target_func949);
    execute_full_asm_block_var950(target_func950);
    execute_full_asm_block_var951(target_func951);
    execute_full_asm_block_var952(target_func952);
    execute_full_asm_block_var953(target_func953);
    execute_full_asm_block_var954(target_func954);
    execute_full_asm_block_var955(target_func955);
    execute_full_asm_block_var956(target_func956);
    execute_full_asm_block_var957(target_func957);
    execute_full_asm_block_var958(target_func958);
    execute_full_asm_block_var959(target_func959);
    execute_full_asm_block_var960(target_func960);
    execute_full_asm_block_var961(target_func961);
    execute_full_asm_block_var962(target_func962);
    execute_full_asm_block_var963(target_func963);
    execute_full_asm_block_var964(target_func964);
    execute_full_asm_block_var965(target_func965);
    execute_full_asm_block_var966(target_func966);
    execute_full_asm_block_var967(target_func967);
    execute_full_asm_block_var968(target_func968);
    execute_full_asm_block_var969(target_func969);
    execute_full_asm_block_var970(target_func970);
    execute_full_asm_block_var971(target_func971);
    execute_full_asm_block_var972(target_func972);
    execute_full_asm_block_var973(target_func973);
    execute_full_asm_block_var974(target_func974);
    execute_full_asm_block_var975(target_func975);
    execute_full_asm_block_var976(target_func976);
    execute_full_asm_block_var977(target_func977);
    execute_full_asm_block_var978(target_func978);
    execute_full_asm_block_var979(target_func979);
    execute_full_asm_block_var980(target_func980);
    execute_full_asm_block_var981(target_func981);
    execute_full_asm_block_var982(target_func982);
    execute_full_asm_block_var983(target_func983);
    execute_full_asm_block_var984(target_func984);
    execute_full_asm_block_var985(target_func985);
    execute_full_asm_block_var986(target_func986);
    execute_full_asm_block_var987(target_func987);
    execute_full_asm_block_var988(target_func988);
    execute_full_asm_block_var989(target_func989);
    execute_full_asm_block_var990(target_func990);
    execute_full_asm_block_var991(target_func991);
    execute_full_asm_block_var992(target_func992);
    execute_full_asm_block_var993(target_func993);
    execute_full_asm_block_var994(target_func994);
    execute_full_asm_block_var995(target_func995);
    execute_full_asm_block_var996(target_func996);
    execute_full_asm_block_var997(target_func997);
    execute_full_asm_block_var998(target_func998);
    execute_full_asm_block_var999(target_func999);
    execute_full_asm_block_var1000(target_func1000);
    return 0;
}
