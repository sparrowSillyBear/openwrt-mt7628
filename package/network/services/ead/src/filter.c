/* precompiled expression: udp and dst port 56026 */

static struct bpf_insn pktfilter_insns[] = {
	{ .code = 0x0028, .jt = 0x00, .jf = 0x00, .k = 0x0000000c },
	{ .code = 0x0015, .jt = 0x00, .jf = 0x04, .k = 0x000086dd },
	{ .code = 0x0030, .jt = 0x00, .jf = 0x00, .k = 0x00000014 },
	{ .code = 0x0015, .jt = 0x00, .jf = 0x0b, .k = 0x00000011 },
	{ .code = 0x0028, .jt = 0x00, .jf = 0x00, .k = 0x00000038 },
	{ .code = 0x0015, .jt = 0x08, .jf = 0x09, .k = 0x0000dada },
	{ .code = 0x0015, .jt = 0x00, .jf = 0x08, .k = 0x00000800 },
	{ .code = 0x0030, .jt = 0x00, .jf = 0x00, .k = 0x00000017 },
	{ .code = 0x0015, .jt = 0x00, .jf = 0x06, .k = 0x00000011 },
	{ .code = 0x0028, .jt = 0x00, .jf = 0x00, .k = 0x00000014 },
	{ .code = 0x0045, .jt = 0x04, .jf = 0x00, .k = 0x00001fff },
	{ .code = 0x00b1, .jt = 0x00, .jf = 0x00, .k = 0x0000000e },
	{ .code = 0x0048, .jt = 0x00, .jf = 0x00, .k = 0x00000010 },
	{ .code = 0x0015, .jt = 0x00, .jf = 0x01, .k = 0x0000dada },
	{ .code = 0x0006, .jt = 0x00, .jf = 0x00, .k = 0x000005dc },
	{ .code = 0x0006, .jt = 0x00, .jf = 0x00, .k = 0x00000000 },
};

static struct bpf_program pktfilter = {
	.bf_len = 16,
	.bf_insns = pktfilter_insns,
};