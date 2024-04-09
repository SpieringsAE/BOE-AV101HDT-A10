static const struct display_timing boe_av101hdt_a10_timing = {
	.pixelclock = { 74210000, 75330000, 76780000, },
	.hactive = { 1280, 1280, 1280, }, //total { 1330, 1350, 1376, }
	.hfront_porch = { 10, 42, 33, },
	.hback_porch = { 10, 18, 33, },
	.hsync_len = { 30, 10, 30, },
    .vactive = { 720, 720, 720, }, //total { 930, 930, 930, }
	.vfront_porch = { 200, 183, 200, },
	.vback_porch = { 8, 8, 8, },
	.vsync_len = { 2, 19, 2, },
	.flags = DISPLAY_FLAGS_DE_HIGH | DISPLAY_FLAGS_HSYNC_LOW | DISPLAY_FLAGS_VSYNC_LOW,
};

static const struct panel_desc boe_av101hdt_a10 = {
    .timings = &boe_av101hdt_a10_timing,
    .num_timings = 1,
    .bpc = 8,
    .size = {
        .width = 224,
        .height = 126,
    },
    .bus_format = MEDIA_BUS_FMT_RGB888_1X24,

	{
        .compatible = "boe,av101hdt-a10",
        .data = &boe_av101hdt_a10,
    }