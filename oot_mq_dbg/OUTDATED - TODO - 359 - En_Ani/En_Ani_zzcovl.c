#include <z64ovl/oot/debug.h>

#define OBJ_ID 236

typedef struct {
	z64_actor_t actor;
	uint8_t unknown[376];
} entity_t; /* 02B4 */


/*** function prototypes ***/
void func_809B0370(void); /* 0 internal, 0 external, 2 lines */
void data_809B0DD4(void); /* 0 internal, 1 external, 17 lines */
void data_809B048C(void); /* 0 internal, 1 external, 10 lines */
void func_809B04B4(void); /* 0 internal, 1 external, 15 lines */
void data_809B0D90(void); /* 0 internal, 0 external, 18 lines */
void func_809B0A28(void); /* 0 internal, 1 external, 18 lines */
void func_809B0994(void); /* 0 internal, 2 external, 38 lines */
void func_809B0988(void); /* 0 internal, 0 external, 3 lines */
void data_809B0E14(void); /* 0 internal, 4 external, 67 lines */
void data_809B0BFC(void); /* 1 internal, 0 external, 5 lines */
void data_809B0BE8(void); /* 1 internal, 0 external, 5 lines */
void data_809B0BD4(void); /* 1 internal, 0 external, 5 lines */
void data_809B0BC0(void); /* 1 internal, 0 external, 5 lines */
void func_809B0A6C(void); /* 0 internal, 3 external, 45 lines */
void data_809B0B18(void); /* 0 internal, 4 external, 42 lines */
void data_809B04F0(void); /* 1 internal, 1 external, 14 lines */
void data_809B0524(void); /* 1 internal, 1 external, 14 lines */
void data_809B05F0(void); /* 1 internal, 2 external, 24 lines */
void data_809B0558(void); /* 1 internal, 2 external, 42 lines */
void data_809B0C10(void); /* 1 internal, 5 external, 107 lines */
void data_809B0378(void); /* 1 internal, 6 external, 71 lines */
void data_809B07F8(void); /* 2 internal, 1 external, 110 lines */
void data_809B064C(void); /* 2 internal, 2 external, 116 lines */


/*** variables ***/
const uint32_t data_809B0F40[] =
{
	0x0A001139,
	0x10010000,
	0x00000000,
	0x00000000,
	0x00000000,
	0xFFCFFFFF,
	0x00000000,
	0x00010100,
	0x001E0028,
	0x00000000,
	0x00000000
};
const uint32_t data_809B0F6C[] =
{
	0xC850000A,
	0x30F40352
};
const uint32_t data_809B0F74[] =
{
	0x44480000,
	0x43FA0000,
	0x00000000
};
const uint32_t data_809B0F80[] =
{
	0x06000408,
	0x06001518,
	0x06001D18,
	0x00000000,
};
const uint32_t data_809B0F90[] =
{
	0x2E2E2F7A,
	0x5F656E5F,
	0x616E692E,
	0x63000000
};
const uint32_t data_809B0FA0[] =
{
	0x2E2E2F7A,
	0x5F656E5F,
	0x616E692E,
	0x63000000
};
const uint32_t data_809B0FB0[] =
{
	(uint32_t)(void*)data_809B0BC0,
	(uint32_t)(void*)data_809B0BD4,
	(uint32_t)(void*)data_809B0BE8,
	(uint32_t)(void*)data_809B0BFC,
	(uint32_t)(void*)data_809B0C10,
	0x00000000,
	0x00000000,
	0x00000000
};


/*** functions ***/
void func_809B0370(void) /* 0 internal, 0 external, 2 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B0370: \n"
	);
	asm(
		"jr              $ra                                    \n"
		"sw              $a1,688($a0)                           \n"
	);
}
void data_809B0DD4(void) /* 0 internal, 1 external, 17 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0DD4: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"addiu           $at,$zero,15                           \n"
		"sw              $ra,20($sp)                            \n"
		"sw              $a0,24($sp)                            \n"
		"sw              $a2,32($sp)                            \n"
		"bne             $a1,$at,.L000044                       \n"
		"sw              $a3,36($sp)                            \n"
		"lw              $a1,40($sp)                            \n"
		"lui             $a0,%hi(data_809B0F74)                 \n"
		"addiu           $a0,$a0,%lo(data_809B0F74)             \n"
		"jal             0x800D1AF4                 \n"
		"addiu           $a1,$a1,56                             \n"
		".L000044:                                              \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B048C(void) /* 0 internal, 1 external, 10 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B048C: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"or              $a2,$a0,$zero                          \n"
		"sw              $ra,20($sp)                            \n"
		"or              $a0,$a1,$zero                          \n"
		"jal             0x8005C3AC                 \n"
		"addiu           $a1,$a2,332                            \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void func_809B04B4(void) /* 0 internal, 1 external, 15 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B04B4: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"sw              $ra,20($sp)                            \n"
		"sw              $a2,32($sp)                            \n"
		"lhu             $t6,680($a0)                           \n"
		"or              $a3,$a2,$zero                          \n"
		"sh              $a3,270($a0)                           \n"
		"ori             $t7,$t6,0x1                            \n"
		"sh              $t7,680($a0)                           \n"
		"jal             0x8002F2CC                 \n"
		"lui             $a2,0x42C8                             \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"or              $v0,$zero,$zero                        \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0D90(void) /* 0 internal, 0 external, 18 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0D90: \n"
	);
	asm(
		"addiu           $at,$zero,15                           \n"
		"sw              $a0,0($sp)                             \n"
		"sw              $a2,8($sp)                             \n"
		"bne             $a1,$at,.L000043                       \n"
		"sw              $a3,12($sp)                            \n"
		"lw              $v0,20($sp)                            \n"
		"lw              $v1,16($sp)                            \n"
		"lh              $t7,670($v0)                           \n"
		"lh              $t6,0($v1)                             \n"
		"lh              $t9,4($v1)                             \n"
		"addu            $t8,$t6,$t7                            \n"
		"sh              $t8,0($v1)                             \n"
		"lh              $t0,668($v0)                           \n"
		"addu            $t1,$t9,$t0                            \n"
		"sh              $t1,4($v1)                             \n"
		".L000043:                                              \n"
		"jr              $ra                                    \n"
		"or              $v0,$zero,$zero                        \n"
	);
}
void func_809B0A28(void) /* 0 internal, 1 external, 18 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B0A28: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"sw              $a1,28($sp)                            \n"
		"or              $a1,$a0,$zero                          \n"
		"sw              $ra,20($sp)                            \n"
		"sw              $a0,24($sp)                            \n"
		"sw              $a1,24($sp)                            \n"
		"jal             0x800A49FC                 \n"
		"addiu           $a0,$a0,408                            \n"
		"beq             $v0,$zero,.L000029                     \n"
		"lw              $a1,24($sp)                            \n"
		"lhu             $t6,682($a1)                           \n"
		"addiu           $t7,$t6,1                              \n"
		"sh              $t7,682($a1)                           \n"
		".L000029:                                              \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void func_809B0994(void) /* 0 internal, 2 external, 38 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B0994: \n"
	);
	asm(
		"addiu           $sp,$sp,-40                            \n"
		"sw              $ra,36($sp)                            \n"
		"sw              $a0,40($sp)                            \n"
		"lw              $t6,7564($a1)                          \n"
		"addiu           $at,$zero,4                            \n"
		"lui             $a0,0x0600                             \n"
		"lhu             $t7,0($t6)                             \n"
		"bnel            $t7,$at,.L000028                       \n"
		"lw              $ra,36($sp)                            \n"
		"jal             0x800A2000                 \n"
		"addiu           $a0,$a0,28912                          \n"
		"mtc1            $v0,$f4                                \n"
		"lui             $at,0xC080                             \n"
		"mtc1            $at,$f8                                \n"
		"cvt.s.w         $f6,$f4                                \n"
		"lw              $v1,40($sp)                            \n"
		"lui             $a1,0x0600                             \n"
		"addiu           $t8,$zero,2                            \n"
		"sw              $t8,20($sp)                            \n"
		"addiu           $a1,$a1,28912                          \n"
		"swc1            $f6,16($sp)                            \n"
		"lui             $a2,0x3F80                             \n"
		"addiu           $a3,$zero,0                            \n"
		"swc1            $f8,24($sp)                            \n"
		"jal             0x800A51A0                 \n"
		"addiu           $a0,$v1,408                            \n"
		"lw              $v1,40($sp)                            \n"
		"lui             $t1,0x8003                             \n"
		"addiu           $t1,$t1,-18964                         \n"
		"lhu             $t9,682($v1)                           \n"
		"sw              $t1,192($v1)                           \n"
		"addiu           $t0,$t9,1                              \n"
		"sh              $t0,682($v1)                           \n"
		"lw              $ra,36($sp)                            \n"
		".L000028:                                              \n"
		"addiu           $sp,$sp,40                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void func_809B0988(void) /* 0 internal, 0 external, 3 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B0988: \n"
	);
	asm(
		"sw              $a0,0($sp)                             \n"
		"jr              $ra                                    \n"
		"sw              $a1,4($sp)                             \n"
	);
}
void data_809B0E14(void) /* 0 internal, 4 external, 67 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0E14: \n"
	);
	asm(
		"addiu           $sp,$sp,-88                            \n"
		"sw              $ra,44($sp)                            \n"
		"sw              $s0,40($sp)                            \n"
		"sw              $a1,92($sp)                            \n"
		"lw              $a1,0($a1)                             \n"
		"or              $s0,$a0,$zero                          \n"
		"lui             $a2,%hi(data_809B0F90)                 \n"
		"addiu           $a2,$a2,%lo(data_809B0F90)             \n"
		"addiu           $a0,$sp,60                             \n"
		"addiu           $a3,$zero,719                          \n"
		"jal             0x800C6AC4                 \n"
		"sw              $a1,76($sp)                            \n"
		"lw              $t7,92($sp)                            \n"
		"jal             0x800943C8                 \n"
		"lw              $a0,0($t7)                             \n"
		"lw              $a1,76($sp)                            \n"
		"lui             $t9,0xDB06                             \n"
		"ori             $t9,$t9,0x20                           \n"
		"lw              $v1,704($a1)                           \n"
		"lui             $a0,%hi(data_809B0F80)                 \n"
		"lui             $t6,0x8016                             \n"
		"addiu           $t8,$v1,8                              \n"
		"sw              $t8,704($a1)                           \n"
		"sw              $t9,0($v1)                             \n"
		"lh              $t0,684($s0)                           \n"
		"lui             $at,0x00FF                             \n"
		"ori             $at,$at,0xffff                         \n"
		"sll             $t1,$t0,2                              \n"
		"addu            $a0,$a0,$t1                            \n"
		"lw              $a0,%lo(data_809B0F80)($a0)            \n"
		"lui             $t0,%hi(data_809B0DD4)                 \n"
		"lui             $t9,%hi(data_809B0D90)                 \n"
		"sll             $t3,$a0,4                              \n"
		"srl             $t4,$t3,28                             \n"
		"sll             $t5,$t4,2                              \n"
		"addu            $t6,$t6,$t5                            \n"
		"lw              $t6,28584($t6)                         \n"
		"and             $t2,$a0,$at                            \n"
		"lui             $at,0x8000                             \n"
		"addu            $t7,$t2,$t6                            \n"
		"addu            $t8,$t7,$at                            \n"
		"sw              $t8,4($v1)                             \n"
		"lbu             $a3,410($s0)                           \n"
		"lw              $a2,440($s0)                           \n"
		"lw              $a1,412($s0)                           \n"
		"addiu           $t9,$t9,%lo(data_809B0D90)             \n"
		"addiu           $t0,$t0,%lo(data_809B0DD4)             \n"
		"sw              $t0,20($sp)                            \n"
		"sw              $t9,16($sp)                            \n"
		"sw              $s0,24($sp)                            \n"
		"jal             0x800A1AC8                 \n"
		"lw              $a0,92($sp)                            \n"
		"lw              $t1,92($sp)                            \n"
		"lui             $a2,%hi(data_809B0FA0)                 \n"
		"addiu           $a2,$a2,%lo(data_809B0FA0)             \n"
		"addiu           $a0,$sp,60                             \n"
		"addiu           $a3,$zero,736                          \n"
		"jal             0x800C6B54                 \n"
		"lw              $a1,0($t1)                             \n"
		"lw              $ra,44($sp)                            \n"
		"lw              $s0,40($sp)                            \n"
		"addiu           $sp,$sp,88                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
		"nop                                                    \n"
		"nop                                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0BFC(void) /* 1 internal, 0 external, 5 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0BFC: \n"
	);
	asm(
		"or              $a0,$s0,$zero                          \n"
		"jal             func_809B0A28                          \n"
		"or              $a1,$s1,$zero                          \n"
		"b               .L000034                               \n"
		"lhu             $t0,7540($s1)                          \n"
	);
	/* fall through to next function */
	asm(
		"b   .Ldata_809B0C10 \n"
		"nop                 \n"
	);
}
void data_809B0BE8(void) /* 1 internal, 0 external, 5 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0BE8: \n"
	);
	asm(
		"or              $a0,$s0,$zero                          \n"
		"jal             func_809B0994                          \n"
		"or              $a1,$s1,$zero                          \n"
		"b               .L000034                               \n"
		"lhu             $t0,7540($s1)                          \n"
	);
	/* fall through to next function */
	asm(
		"b   .Ldata_809B0BFC \n"
		"nop                 \n"
	);
}
void data_809B0BD4(void) /* 1 internal, 0 external, 5 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0BD4: \n"
	);
	asm(
		"or              $a0,$s0,$zero                          \n"
		"jal             func_809B0A28                          \n"
		"or              $a1,$s1,$zero                          \n"
		"b               .L000034                               \n"
		"lhu             $t0,7540($s1)                          \n"
	);
	/* fall through to next function */
	asm(
		"b   .Ldata_809B0BE8 \n"
		"nop                 \n"
	);
}
void data_809B0BC0(void) /* 1 internal, 0 external, 5 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0BC0: \n"
	);
	asm(
		"or              $a0,$s0,$zero                          \n"
		"jal             func_809B0A6C                          \n"
		"or              $a1,$s1,$zero                          \n"
		"b               .L000034                               \n"
		"lhu             $t0,7540($s1)                          \n"
	);
	/* fall through to next function */
	asm(
		"b   .Ldata_809B0BD4 \n"
		"nop                 \n"
	);
}
void func_809B0A6C(void) /* 0 internal, 3 external, 45 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Lfunc_809B0A6C: \n"
	);
	asm(
		"addiu           $sp,$sp,-56                            \n"
		"sw              $s0,40($sp)                            \n"
		"or              $s0,$a0,$zero                          \n"
		"sw              $ra,44($sp)                            \n"
		"addiu           $a0,$a0,408                            \n"
		"sw              $a1,60($sp)                            \n"
		"jal             0x800A49FC                 \n"
		"sw              $a0,48($sp)                            \n"
		"beq             $v0,$zero,.L000030                     \n"
		"lui             $a0,0x0600                             \n"
		"mtc1            $zero,$f4                              \n"
		"nop                                                    \n"
		"swc1            $f4,432($s0)                           \n"
		".L000030:                                              \n"
		"lw              $t6,60($sp)                            \n"
		"addiu           $at,$zero,2                            \n"
		"lw              $t7,7564($t6)                          \n"
		"lhu             $t8,0($t7)                             \n"
		"bnel            $t8,$at,.L000031                       \n"
		"lw              $ra,44($sp)                            \n"
		"jal             0x800A2000                 \n"
		"addiu           $a0,$a0,26552                          \n"
		"mtc1            $v0,$f6                                \n"
		"mtc1            $zero,$f0                              \n"
		"lui             $a1,0x0600                             \n"
		"cvt.s.w         $f8,$f6                                \n"
		"addiu           $t9,$zero,2                            \n"
		"mfc1            $a3,$f0                                \n"
		"sw              $t9,20($sp)                            \n"
		"addiu           $a1,$a1,26552                          \n"
		"lw              $a0,48($sp)                            \n"
		"swc1            $f8,16($sp)                            \n"
		"lui             $a2,0x3F80                             \n"
		"jal             0x800A51A0                 \n"
		"swc1            $f0,24($sp)                            \n"
		"lhu             $t0,682($s0)                           \n"
		"sw              $zero,192($s0)                         \n"
		"addiu           $t1,$t0,1                              \n"
		"sh              $t1,682($s0)                           \n"
		"lw              $ra,44($sp)                            \n"
		".L000031:                                              \n"
		"lw              $s0,40($sp)                            \n"
		"addiu           $sp,$sp,56                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0B18(void) /* 0 internal, 4 external, 42 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0B18: \n"
	);
	asm(
		"addiu           $sp,$sp,-72                            \n"
		"sw              $s0,36($sp)                            \n"
		"or              $s0,$a0,$zero                          \n"
		"sw              $s1,40($sp)                            \n"
		"or              $s1,$a1,$zero                          \n"
		"sw              $ra,44($sp)                            \n"
		"addiu           $a2,$s0,332                            \n"
		"or              $a1,$a2,$zero                          \n"
		"jal             0x800626DC                 \n"
		"sw              $a2,52($sp)                            \n"
		"lui             $at,0x0001                             \n"
		"ori             $at,$at,0x1e60                         \n"
		"lw              $a2,52($sp)                            \n"
		"addu            $a1,$s1,$at                            \n"
		"jal             0x8005DC4C                 \n"
		"or              $a0,$s1,$zero                          \n"
		"jal             0x8002D8E0                 \n"
		"or              $a0,$s0,$zero                          \n"
		"mtc1            $zero,$f0                              \n"
		"addiu           $t6,$zero,4                            \n"
		"sw              $t6,20($sp)                            \n"
		"mfc1            $a2,$f0                                \n"
		"mfc1            $a3,$f0                                \n"
		"or              $a0,$s1,$zero                          \n"
		"or              $a1,$s0,$zero                          \n"
		"jal             0x8002E4B4                 \n"
		"swc1            $f0,16($sp)                            \n"
		"lbu             $t7,7532($s1)                          \n"
		"beq             $t7,$zero,.L000032                     \n"
		"nop                                                    \n"
		"lw              $t8,7564($s1)                          \n"
		"beq             $t8,$zero,.L000032                     \n"
		"nop                                                    \n"
		"lhu             $t9,682($s0)                           \n"
		"sltiu           $at,$t9,5                              \n"
		"beq             $at,$zero,.L000033                     \n"
		"sll             $t9,$t9,2                              \n"
		"lui             $at,%hi(data_809B0FB0)                 \n"
		"addu            $at,$at,$t9                            \n"
		"lw              $t9,%lo(data_809B0FB0)($at)            \n"
		"jr              $t9                                    \n"
		"nop                                                    \n"
	);
}
void data_809B04F0(void) /* 1 internal, 1 external, 14 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B04F0: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"sw              $ra,20($sp)                            \n"
		"jal             0x8002F334                 \n"
		"sw              $a0,24($sp)                            \n"
		"beq             $v0,$zero,.L000002                     \n"
		"lw              $a0,24($sp)                            \n"
		"lui             $a1,%hi(data_809B064C)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B064C)             \n"
		".L000002:                                              \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0524(void) /* 1 internal, 1 external, 14 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0524: \n"
	);
	asm(
		"addiu           $sp,$sp,-24                            \n"
		"sw              $ra,20($sp)                            \n"
		"jal             0x8002F334                 \n"
		"sw              $a0,24($sp)                            \n"
		"beq             $v0,$zero,.L000003                     \n"
		"lw              $a0,24($sp)                            \n"
		"lui             $a1,%hi(data_809B07F8)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B07F8)             \n"
		".L000003:                                              \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $sp,$sp,24                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B05F0(void) /* 1 internal, 2 external, 24 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B05F0: \n"
	);
	asm(
		"addiu           $sp,$sp,-32                            \n"
		"sw              $ra,28($sp)                            \n"
		"sw              $a0,32($sp)                            \n"
		"jal             0x8002F334                 \n"
		"sw              $a1,36($sp)                            \n"
		"beq             $v0,$zero,.L000008                     \n"
		"lw              $a0,32($sp)                            \n"
		"lui             $a1,%hi(data_809B0558)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B0558)             \n"
		".L000008:                                              \n"
		"lui             $at,0x4348                             \n"
		"mtc1            $at,$f4                                \n"
		"lui             $a3,0x461C                             \n"
		"ori             $a3,$a3,0x4000                         \n"
		"lw              $a0,32($sp)                            \n"
		"lw              $a1,36($sp)                            \n"
		"addiu           $a2,$zero,62                           \n"
		"jal             0x8002F434                 \n"
		"swc1            $f4,16($sp)                            \n"
		"lw              $ra,28($sp)                            \n"
		"addiu           $sp,$sp,32                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0558(void) /* 1 internal, 2 external, 42 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0558: \n"
	);
	asm(
		"addiu           $sp,$sp,-32                            \n"
		"sw              $ra,28($sp)                            \n"
		"sw              $a1,36($sp)                            \n"
		"jal             0x8002F410                 \n"
		"sw              $a0,32($sp)                            \n"
		"beq             $v0,$zero,.L000004                     \n"
		"lw              $a0,32($sp)                            \n"
		"sw              $zero,280($a0)                         \n"
		"lui             $t6,0x8016                             \n"
		"lw              $t6,-6556($t6)                         \n"
		"lui             $a1,%hi(data_809B0524)                 \n"
		"beq             $t6,$zero,.L000005                     \n"
		"nop                                                    \n"
		"lui             $a1,%hi(data_809B04F0)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B04F0)             \n"
		"b               .L000006                               \n"
		"nop                                                    \n"
		".L000005:                                              \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B0524)             \n"
		".L000006:                                              \n"
		"lui             $t7,0x8016                             \n"
		"lhu             $t7,-2734($t7)                         \n"
		"lui             $at,0x8016                             \n"
		"ori             $t8,$t7,0x20                           \n"
		"b               .L000007                               \n"
		"sh              $t8,-2734($at)                         \n"
		".L000004:                                              \n"
		"lui             $at,0x4348                             \n"
		"mtc1            $at,$f4                                \n"
		"lui             $a3,0x461C                             \n"
		"ori             $a3,$a3,0x4000                         \n"
		"lw              $a1,36($sp)                            \n"
		"addiu           $a2,$zero,62                           \n"
		"jal             0x8002F434                 \n"
		"swc1            $f4,16($sp)                            \n"
		".L000007:                                              \n"
		"lw              $ra,28($sp)                            \n"
		"addiu           $sp,$sp,32                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B0C10(void) /* 1 internal, 5 external, 107 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0C10: \n"
	);
	asm(
		"or              $a0,$s0,$zero                          \n"
		"jal             func_809B0988                          \n"
		"or              $a1,$s1,$zero                          \n"
		".L000033:                                              \n"
		"lhu             $t0,7540($s1)                          \n"
		".L000034:                                              \n"
		"addiu           $at,$zero,100                          \n"
		"bnel            $t0,$at,.L000035                       \n"
		"lhu             $t1,680($s0)                           \n"
		"jal             0x800788CC                 \n"
		"addiu           $a0,$zero,6213                         \n"
		"b               .L000035                               \n"
		"lhu             $t1,680($s0)                           \n"
		".L000032:                                              \n"
		"jal             0x800A49FC                 \n"
		"addiu           $a0,$s0,408                            \n"
		"beql            $v0,$zero,.L000036                     \n"
		"lw              $t9,688($s0)                           \n"
		"mtc1            $zero,$f4                              \n"
		"nop                                                    \n"
		"swc1            $f4,432($s0)                           \n"
		"lw              $t9,688($s0)                           \n"
		".L000036:                                              \n"
		"or              $a0,$s0,$zero                          \n"
		"or              $a1,$s1,$zero                          \n"
		"jalr            $t9                                    \n"
		"nop                                                    \n"
		"lhu             $t1,680($s0)                           \n"
		".L000035:                                              \n"
		"addiu           $a0,$s0,668                            \n"
		"or              $a1,$zero,$zero                        \n"
		"andi            $t2,$t1,0x1                            \n"
		"beq             $t2,$zero,.L000037                     \n"
		"addiu           $a2,$zero,6                            \n"
		"lw              $t4,56($s0)                            \n"
		"or              $a0,$s1,$zero                          \n"
		"or              $a1,$s0,$zero                          \n"
		"sw              $t4,16($sp)                            \n"
		"lw              $t3,60($s0)                            \n"
		"addiu           $a2,$s0,668                            \n"
		"addiu           $a3,$s0,674                            \n"
		"sw              $t3,20($sp)                            \n"
		"lw              $t4,64($s0)                            \n"
		"jal             0x80038290                 \n"
		"sw              $t4,24($sp)                            \n"
		"sh              $zero,678($s0)                         \n"
		"lh              $v1,678($s0)                           \n"
		"sh              $v1,676($s0)                           \n"
		"b               .L000038                               \n"
		"sh              $v1,674($s0)                           \n"
		".L000037:                                              \n"
		"addiu           $t5,$zero,100                          \n"
		"sw              $t5,16($sp)                            \n"
		"jal             0x8007869C                 \n"
		"addiu           $a3,$zero,6200                         \n"
		"addiu           $t6,$zero,100                          \n"
		"sw              $t6,16($sp)                            \n"
		"addiu           $a0,$s0,670                            \n"
		"or              $a1,$zero,$zero                        \n"
		"addiu           $a2,$zero,6                            \n"
		"jal             0x8007869C                 \n"
		"addiu           $a3,$zero,6200                         \n"
		"addiu           $t7,$zero,100                          \n"
		"sw              $t7,16($sp)                            \n"
		"addiu           $a0,$s0,674                            \n"
		"or              $a1,$zero,$zero                        \n"
		"addiu           $a2,$zero,6                            \n"
		"jal             0x8007869C                 \n"
		"addiu           $a3,$zero,6200                         \n"
		"addiu           $t8,$zero,100                          \n"
		"sw              $t8,16($sp)                            \n"
		"addiu           $a0,$s0,676                            \n"
		"or              $a1,$zero,$zero                        \n"
		"addiu           $a2,$zero,6                            \n"
		"jal             0x8007869C                 \n"
		"addiu           $a3,$zero,6200                         \n"
		".L000038:                                              \n"
		"lh              $v1,686($s0)                           \n"
		"addiu           $a0,$zero,60                           \n"
		"bne             $v1,$zero,.L000039                     \n"
		"addiu           $t0,$v1,-1                             \n"
		"b               .L000040                               \n"
		"or              $v0,$zero,$zero                        \n"
		".L000039:                                              \n"
		"sh              $t0,686($s0)                           \n"
		"lh              $v1,686($s0)                           \n"
		"or              $v0,$v1,$zero                          \n"
		".L000040:                                              \n"
		"bnel            $v0,$zero,.L000041                     \n"
		"sh              $v1,684($s0)                           \n"
		"jal             0x80077D90                 \n"
		"addiu           $a1,$zero,60                           \n"
		"sh              $v0,686($s0)                           \n"
		"lh              $v1,686($s0)                           \n"
		"sh              $v1,684($s0)                           \n"
		".L000041:                                              \n"
		"lh              $t9,684($s0)                           \n"
		"slti            $at,$t9,3                              \n"
		"bnel            $at,$zero,.L000042                     \n"
		"lw              $ra,44($sp)                            \n"
		"sh              $zero,684($s0)                         \n"
		"lw              $ra,44($sp)                            \n"
		".L000042:                                              \n"
		"lw              $s0,36($sp)                            \n"
		"lw              $s1,40($sp)                            \n"
		"jr              $ra                                    \n"
		"addiu           $sp,$sp,72                             \n"
	);
}
void data_809B0378(void) /* 1 internal, 6 external, 71 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B0378: \n"
	);
	asm(
		"addiu           $sp,$sp,-64                            \n"
		"sw              $a1,68($sp)                            \n"
		"sw              $ra,44($sp)                            \n"
		"sw              $s0,40($sp)                            \n"
		"lui             $a1,%hi(data_809B0F6C)                 \n"
		"or              $s0,$a0,$zero                          \n"
		"jal             0x800780DC                 \n"
		"addiu           $a1,$a1,%lo(data_809B0F6C)             \n"
		"lui             $a2,0x8003                             \n"
		"addiu           $a2,$a2,-18964                         \n"
		"addiu           $a0,$s0,180                            \n"
		"lui             $a1,0xC52F                             \n"
		"jal             0x8002B1E0                 \n"
		"lui             $a3,0x4210                             \n"
		"addiu           $a1,$s0,408                            \n"
		"lui             $a2,0x0600                             \n"
		"lui             $a3,0x0600                             \n"
		"addiu           $t6,$s0,476                            \n"
		"addiu           $t7,$s0,572                            \n"
		"addiu           $t8,$zero,16                           \n"
		"sw              $t8,24($sp)                            \n"
		"sw              $t7,20($sp)                            \n"
		"sw              $t6,16($sp)                            \n"
		"addiu           $a3,$a3,30444                          \n"
		"addiu           $a2,$a2,240                            \n"
		"sw              $a1,52($sp)                            \n"
		"jal             0x800A46F8                 \n"
		"lw              $a0,68($sp)                            \n"
		"lui             $a1,0x0600                             \n"
		"addiu           $a1,$a1,30444                          \n"
		"jal             0x800A51E8                 \n"
		"lw              $a0,52($sp)                            \n"
		"addiu           $a1,$s0,332                            \n"
		"sw              $a1,52($sp)                            \n"
		"jal             0x8005C364                 \n"
		"lw              $a0,68($sp)                            \n"
		"lui             $a3,%hi(data_809B0F40)                 \n"
		"lw              $a1,52($sp)                            \n"
		"addiu           $a3,$a3,%lo(data_809B0F40)             \n"
		"lw              $a0,68($sp)                            \n"
		"jal             0x8005C4AC                 \n"
		"or              $a2,$s0,$zero                          \n"
		"addiu           $t9,$zero,255                          \n"
		"sb              $t9,174($s0)                           \n"
		"lui             $t0,0x8016                             \n"
		"lw              $t0,-6556($t0)                         \n"
		"or              $a0,$s0,$zero                          \n"
		"lui             $a1,%hi(data_809B07F8)                 \n"
		"beq             $t0,$zero,.L000000                     \n"
		"nop                                                    \n"
		"lui             $a1,%hi(data_809B064C)                 \n"
		"addiu           $a1,$a1,%lo(data_809B064C)             \n"
		"jal             func_809B0370                          \n"
		"or              $a0,$s0,$zero                          \n"
		"b               .L000001                               \n"
		"lui             $at,0xBF80                             \n"
		".L000000:                                              \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B07F8)             \n"
		"lui             $at,0xBF80                             \n"
		".L000001:                                              \n"
		"mtc1            $at,$f0                                \n"
		"sh              $zero,682($s0)                         \n"
		"sh              $zero,680($s0)                         \n"
		"swc1            $f0,112($s0)                           \n"
		"swc1            $f0,96($s0)                            \n"
		"lw              $ra,44($sp)                            \n"
		"lw              $s0,40($sp)                            \n"
		"addiu           $sp,$sp,64                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B07F8(void) /* 2 internal, 1 external, 110 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B07F8: \n"
	);
	asm(
		"addiu           $sp,$sp,-32                            \n"
		"sw              $ra,20($sp)                            \n"
		"lh              $t7,182($a0)                           \n"
		"lh              $t6,138($a0)                           \n"
		"sw              $a1,36($sp)                            \n"
		"sw              $a0,32($sp)                            \n"
		"subu            $v1,$t6,$t7                            \n"
		"sll             $v1,$v1,16                             \n"
		"sra             $v1,$v1,16                             \n"
		"jal             0x8002F194                 \n"
		"sh              $v1,28($sp)                            \n"
		"lh              $v1,28($sp)                            \n"
		"lw              $a0,32($sp)                            \n"
		"beq             $v0,$zero,.L000018                     \n"
		"lw              $a1,36($sp)                            \n"
		"lhu             $v0,270($a0)                           \n"
		"addiu           $at,$zero,20566                        \n"
		"lui             $a1,%hi(data_809B0524)                 \n"
		"bnel            $v0,$at,.L000019                       \n"
		"addiu           $at,$zero,20565                        \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B0524)             \n"
		"b               .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		"addiu           $at,$zero,20565                        \n"
		".L000019:                                              \n"
		"bne             $v0,$at,.L000021                       \n"
		"lui             $a1,%hi(data_809B0524)                 \n"
		"lui             $a1,%hi(data_809B05F0)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B05F0)             \n"
		"b               .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000021:                                              \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B0524)             \n"
		"b               .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000018:                                              \n"
		"slti            $at,$v1,-13999                         \n"
		"bnel            $at,$zero,.L000022                     \n"
		"slti            $at,$v1,-999                           \n"
		"bgez            $v1,.L000023                           \n"
		"lui             $at,0x4316                             \n"
		"lwc1            $f4,144($a0)                           \n"
		"mtc1            $at,$f6                                \n"
		"lui             $at,0xC2A0                             \n"
		"c.lt.s          $f4,$f6                                \n"
		"nop                                                    \n"
		"bc1fl           .L000022                               \n"
		"slti            $at,$v1,-999                           \n"
		"mtc1            $at,$f8                                \n"
		"lwc1            $f10,148($a0)                          \n"
		"lui             $v0,0x8016                             \n"
		"addiu           $v0,$v0,-6560                          \n"
		"c.lt.s          $f8,$f10                               \n"
		"nop                                                    \n"
		"bc1fl           .L000022                               \n"
		"slti            $at,$v1,-999                           \n"
		"lhu             $t8,3826($v0)                          \n"
		"andi            $t9,$t8,0x20                           \n"
		"beq             $t9,$zero,.L000024                     \n"
		"nop                                                    \n"
		"jal             func_809B04B4                          \n"
		"addiu           $a2,$zero,20566                        \n"
		"b               .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000024:                                              \n"
		"jal             func_809B04B4                          \n"
		"addiu           $a2,$zero,20565                        \n"
		"b               .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000023:                                              \n"
		"slti            $at,$v1,-999                           \n"
		".L000022:                                              \n"
		"bne             $at,$zero,.L000025                     \n"
		"slti            $at,$v1,14000                          \n"
		"beq             $at,$zero,.L000025                     \n"
		"lui             $at,0x43AF                             \n"
		"mtc1            $at,$f18                               \n"
		"lwc1            $f16,144($a0)                          \n"
		"lui             $v0,0x8016                             \n"
		"addiu           $v0,$v0,-6560                          \n"
		"c.lt.s          $f16,$f18                              \n"
		"nop                                                    \n"
		"bc1fl           .L000020                               \n"
		"lw              $ra,20($sp)                            \n"
		"lhu             $t0,3800($v0)                          \n"
		"andi            $t1,$t0,0x8000                         \n"
		"bnel            $t1,$zero,.L000026                     \n"
		"lhu             $t2,3826($v0)                          \n"
		"b               .L000027                               \n"
		"addiu           $a2,$zero,20562                        \n"
		"lhu             $t2,3826($v0)                          \n"
		".L000026:                                              \n"
		"addiu           $a2,$zero,20563                        \n"
		"andi            $t3,$t2,0x20                           \n"
		"beq             $t3,$zero,.L000027                     \n"
		"nop                                                    \n"
		"b               .L000027                               \n"
		"addiu           $a2,$zero,20564                        \n"
		".L000027:                                              \n"
		"jal             func_809B04B4                          \n"
		"nop                                                    \n"
		".L000025:                                              \n"
		"lw              $ra,20($sp)                            \n"
		".L000020:                                              \n"
		"addiu           $sp,$sp,32                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
void data_809B064C(void) /* 2 internal, 2 external, 116 lines */
{
	asm(
		".set noat        \n"
		".set noreorder   \n"
		".Ldata_809B064C: \n"
	);
	asm(
		"addiu           $sp,$sp,-32                            \n"
		"or              $a3,$a0,$zero                          \n"
		"sw              $ra,20($sp)                            \n"
		"sw              $a1,36($sp)                            \n"
		"or              $a0,$a1,$zero                          \n"
		"addiu           $a1,$zero,10                           \n"
		"jal             0x8006C360                 \n"
		"sw              $a3,32($sp)                            \n"
		"lw              $a1,36($sp)                            \n"
		"lw              $a3,32($sp)                            \n"
		"bne             $v0,$zero,.L000009                     \n"
		"andi            $a2,$v0,0xffff                         \n"
		"lui             $t6,0x8016                             \n"
		"lw              $t6,-6544($t6)                         \n"
		"addiu           $a2,$zero,20560                        \n"
		"beq             $t6,$zero,.L000009                     \n"
		"nop                                                    \n"
		"b               .L000009                               \n"
		"addiu           $a2,$zero,20561                        \n"
		".L000009:                                              \n"
		"lh              $t7,138($a3)                           \n"
		"lh              $t8,182($a3)                           \n"
		"sw              $a3,32($sp)                            \n"
		"sh              $a2,30($sp)                            \n"
		"subu            $v1,$t7,$t8                            \n"
		"sll             $v1,$v1,16                             \n"
		"sra             $v1,$v1,16                             \n"
		"sh              $v1,28($sp)                            \n"
		"jal             0x8002F194                 \n"
		"or              $a0,$a3,$zero                          \n"
		"lh              $v1,28($sp)                            \n"
		"lw              $a1,36($sp)                            \n"
		"lhu             $a2,30($sp)                            \n"
		"beq             $v0,$zero,.L000010                     \n"
		"lw              $a3,32($sp)                            \n"
		"lhu             $v0,270($a3)                           \n"
		"addiu           $at,$zero,20566                        \n"
		"or              $a0,$a3,$zero                          \n"
		"bne             $v0,$at,.L000011                       \n"
		"lui             $a1,%hi(data_809B04F0)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B04F0)             \n"
		"b               .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000011:                                              \n"
		"addiu           $at,$zero,20565                        \n"
		"bne             $v0,$at,.L000013                       \n"
		"or              $a0,$a3,$zero                          \n"
		"lui             $a1,%hi(data_809B05F0)                 \n"
		"addiu           $a1,$a1,%lo(data_809B05F0)             \n"
		"jal             func_809B0370                          \n"
		"or              $a0,$a3,$zero                          \n"
		"b               .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000013:                                              \n"
		"lui             $a1,%hi(data_809B04F0)                 \n"
		"jal             func_809B0370                          \n"
		"addiu           $a1,$a1,%lo(data_809B04F0)             \n"
		"b               .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000010:                                              \n"
		"slti            $at,$v1,-13999                         \n"
		"bnel            $at,$zero,.L000014                     \n"
		"slti            $at,$v1,-999                           \n"
		"bgez            $v1,.L000015                           \n"
		"lui             $at,0x4316                             \n"
		"lwc1            $f4,144($a3)                           \n"
		"mtc1            $at,$f6                                \n"
		"lui             $at,0xC2A0                             \n"
		"c.lt.s          $f4,$f6                                \n"
		"nop                                                    \n"
		"bc1fl           .L000014                               \n"
		"slti            $at,$v1,-999                           \n"
		"mtc1            $at,$f8                                \n"
		"lwc1            $f10,148($a3)                          \n"
		"lui             $t9,0x8016                             \n"
		"c.lt.s          $f8,$f10                               \n"
		"nop                                                    \n"
		"bc1fl           .L000014                               \n"
		"slti            $at,$v1,-999                           \n"
		"lhu             $t9,-2734($t9)                         \n"
		"addiu           $a2,$zero,20566                        \n"
		"or              $a0,$a3,$zero                          \n"
		"andi            $t0,$t9,0x20                           \n"
		"beq             $t0,$zero,.L000016                     \n"
		"nop                                                    \n"
		"jal             func_809B04B4                          \n"
		"or              $a0,$a3,$zero                          \n"
		"b               .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000016:                                              \n"
		"jal             func_809B04B4                          \n"
		"addiu           $a2,$zero,20565                        \n"
		"b               .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		".L000015:                                              \n"
		"slti            $at,$v1,-999                           \n"
		".L000014:                                              \n"
		"bne             $at,$zero,.L000017                     \n"
		"slti            $at,$v1,14000                          \n"
		"beq             $at,$zero,.L000017                     \n"
		"lui             $at,0x43AF                             \n"
		"mtc1            $at,$f18                               \n"
		"lwc1            $f16,144($a3)                          \n"
		"c.lt.s          $f16,$f18                              \n"
		"nop                                                    \n"
		"bc1fl           .L000012                               \n"
		"lw              $ra,20($sp)                            \n"
		"jal             func_809B04B4                          \n"
		"or              $a0,$a3,$zero                          \n"
		".L000017:                                              \n"
		"lw              $ra,20($sp)                            \n"
		".L000012:                                              \n"
		"addiu           $sp,$sp,32                             \n"
		"jr              $ra                                    \n"
		"nop                                                    \n"
	);
}
const z64_actor_init_t init_vars = {
	.number = 0xDEAD, .padding = 0xBEEF, /* <-- magic values, do not change */
	.type = 0x04,
	.room = 0x00,
	.flags = 0x00000009,
	.object = OBJ_ID,
	.instance_size = sizeof(entity_t),
	.init = data_809B0378,
	.dest = data_809B048C,
	.main = data_809B0B18,
	.draw = data_809B0E14
};
