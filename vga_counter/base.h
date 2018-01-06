const uint8_t base_bin[] PROGMEM = {
	0x01,		// bitmap type
	0x22, 0x00,	// bitmap width
	0x08, 0x00,	// bitmap height
	0xe3, 0x89, 0x31, 0xe3, 0x01, 
	0x04, 0x09, 0x21, 0x04, 0x01, 
	0x04, 0x11, 0x21, 0x04, 0x01, 
	0x04, 0xe1, 0x20, 0x04, 0x01, 
	0x04, 0x51, 0x20, 0x04, 0x01, 
	0x00, 0x89, 0x20, 0x00, 0x01, 
	0x00, 0x09, 0x21, 0x00, 0x01, 
	0x00, 0x19, 0x39, 0xe0, 0x03, 
};
const uint8_t base_dec[] PROGMEM = {
	0x01,		// bitmap type
	0x23, 0x00,	// bitmap width
	0x08, 0x00,	// bitmap height
	0xc3, 0x9c, 0x67, 0xcd, 0x06, 
	0x84, 0x10, 0x24, 0x89, 0x04, 
	0x84, 0x10, 0x24, 0x89, 0x04, 
	0x84, 0x10, 0x24, 0x89, 0x04, 
	0x84, 0x10, 0x24, 0x89, 0x04, 
	0x80, 0x10, 0x24, 0x89, 0x04, 
	0x80, 0x10, 0x24, 0x89, 0x04, 
	0xe0, 0x10, 0xc4, 0xc7, 0x03, 
};
const uint8_t base_hex[] PROGMEM = {
	0x01,		// bitmap type
	0x38, 0x00,	// bitmap width
	0x0a, 0x00,	// bitmap height
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf3, 0x35, 0xb3, 0x7d, 0xb1, 0xef, 0xfb, 
	0x04, 0x49, 0x24, 0x21, 0x21, 0x09, 0x82, 
	0x04, 0x49, 0x24, 0x21, 0x22, 0x29, 0x8a, 
	0x04, 0x49, 0xc4, 0x20, 0x1c, 0x29, 0x8a, 
	0x84, 0x48, 0x84, 0x20, 0x0a, 0x29, 0x8a, 
	0x40, 0x48, 0x80, 0x20, 0x11, 0x29, 0x89, 
	0x40, 0x48, 0x00, 0x21, 0x21, 0xa9, 0x88, 
	0xc0, 0x68, 0xf0, 0x21, 0x23, 0xa6, 0x89, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
};
const uint8_t base_oct[] PROGMEM = {
	0x01,		// bitmap type
	0x25, 0x00,	// bitmap width
	0x0a, 0x00,	// bitmap height
	0x20, 0x00, 0x00, 0x00, 0x00, 
	0xe3, 0x93, 0xf9, 0x9c, 0x18, 
	0x04, 0x52, 0x81, 0x90, 0x10, 
	0x04, 0x12, 0x89, 0x10, 0x11, 
	0x04, 0x12, 0x89, 0x10, 0x0e, 
	0x04, 0x11, 0x89, 0x10, 0x05, 
	0x80, 0x10, 0x49, 0x90, 0x08, 
	0x80, 0x10, 0x29, 0x90, 0x10, 
	0x80, 0xe1, 0x68, 0x90, 0x11, 
	0x00, 0x00, 0x08, 0x00, 0x00, 
};
