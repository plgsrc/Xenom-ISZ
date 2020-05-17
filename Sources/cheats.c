#include "cheats.h"
#include "hid.h"


char	*builder_name = "Xenom_MK7";


void	Car(void)
{
	if (is_pressed(BUTTON_DD))
	{
		WRITEU32(0x00482FB4, 0x00000012);
	}
}
	
void	Dog(void)
{
	if (is_pressed(BUTTON_DD))
	{
		WRITEU32(0x00482FB4, 0x00000011);
	}
}

void	Bike(void)
{
	if (is_pressed(BUTTON_DD))
	{
		WRITEU32(0x00482FB4, 0x0000000C);
	}
}

void	Xenom1(void)
{
	WRITEU32(0x00000000, 0x00000000);
}

void	Xenom2(void)
{
	WRITEU32(0x00483008, 0x00000004);
}

void	Xenom4(void)
{
	WRITEU32(0x00418740, 0x00000010);
}

void	Xenom22(void)
{
	WRITEU32(0x00483008, 0x00000002);
}

void	Xenom7(void)

{
	WRITEU32(0x00482FE0, 0x3F800EBE);
}

void	Xenom9(void)
{
	if (is_pressed(BUTTON_A))
	{
		WRITEU32(0x08804CC4, 0x00000000);
	}
}

void	Xenom10(void)
{
	WRITEU32(0x0048F1AC, 0x088E5998);
}

void	Xenom12(void)
{
	WRITEU32(0x00418730, 0x6FFFFFFF);
}

void	Xenom13(void)
{
	WRITEU32(0x00418733, 0x6FFFFFFF);
}

void	Xenom14(void)
{
	WRITEU32(0x00418730, 0x4A800000);
}

void	Xenom15(void)
{
	WRITEU32(0x00418730, 0x4C800000);
}

void	Xenom16(void)
{
	if (is_pressed(BUTTON_Y))
	{
		WRITEU32(0x00482FB4, 0x00000003);
	}
}

void	Xenom17(void)
{
	WRITEU32(0x00483614, 0x0000270F);
}

void	Xenom18(void)
{
	WRITEU32(0x0048361C, 0x0000270F);
}

void	Xenom19(void)
{
	WRITEU32(0x00483620, 0x0000270F);
}

void	Xenom20(void)
{
	WRITEU32(0x00483628, 0x0000270F);
}

void	Xenom11(void)
{
	if (is_pressed(BUTTON_ST))
	{
		WRITEU32(0x00482F10, 0x43E00000);
	}
}

void	Xenom24(void)
{
	if (is_pressed(BUTTON_R))
	{
		WRITEU32(0x08804CCC, 0x77359400);
	}
}

void	Xenom26(void)
{
	if (is_pressed(BUTTON_Y + B))
	{
		WRITEU32(0x00482F10, 0x421C0000);
	}
}

void	Xenom27(void)
{
	if (is_pressed(BUTTON_A + L))
	{
		WRITEU32(0x00482F10, 0xC4CB1DA1);
	}
}

void	Xenom29(void)
{
	WRITEU32(0x08804CC4, 0x00000000);
}

void	Xenom30(void)
{
    static u32    outdoor_X[3] = { 0 };
    static u32    outdoor_Y[3] = { 0 };
    static u32    outdoor_Z[3] = { 0 };
    int           loc;
    int           slot;
    if (is_pressed(BUTTON_DU + BUTTON_A))
    {
        {
            outdoor_X[slot] = READU32(0x00482F0C);
            outdoor_Y[slot] = READU32(0x00482F10);
            outdoor_Z[slot] = READU32(0x00482F14);
        }
    }
    else if (is_pressed(BUTTON_DD + BUTTON_A))
    {
        {
            WRITEU32(0x00482F0C, outdoor_X[slot]);
            WRITEU32(0x00482F10, outdoor_Y[slot]);
            WRITEU32(0x00482F14, outdoor_Z[slot]);
        }
    }
}

void	Xenom31(void)
{
	WRITEU32(0x00483614, 0x0000270F);
	WRITEU32(0x0048361C, 0x0000270F);
	WRITEU32(0x00483620, 0x0000270F);
	WRITEU32(0x00483628, 0x0000270F);
}

void	Xenom35(void)
{
	WRITEU32(0x0048362C, 0x00000000);
}

void	Xenom36(void)
{
	WRITEU32(0x0048362C, 0x00000002);
}

void	Xenom37(void)
{
	WRITEU32(0x0048362C, 0x00000007);
}

void	Xenom38(void)
{
	WRITEU32(0x0048362C, 0x00000003);
}

void	Xenom39(void)
{
	WRITEU32(0x0048362C, 0x00000008);
}

void	Xenom40(void)
{
	WRITEU32(0x0048362C, 0x00000006);
}

void	Xenom41(void)
{
	WRITEU32(0x0048362C, 0x00000001);
}

void	Xenom8(void)
{
	if (is_pressed(BUTTON_Y))
	{
		WRITEU32(0x00483614, 150);
	}
}

void	Xenom43(void)
{
	WRITEU32(0x00483634, 0x00000000);
}

void	Xenom44(void)
{
	u32 offset = 0x00000000;
	u32 data = 0x00000000;
	offset = 0x00000000;
	WRITEU32(offset + 0x02421C4, 0x0A000016);
	WRITEU32(offset + 0x0242234, 0xED800A08);
	WRITEU32(offset + 0x024ABB8, 0x2A000099);
	if (is_pressed(0x00000200)) {
		WRITEU32(offset + 0x02421C4, 0xEA000016);
		WRITEU32(offset + 0x0242234, 0xEAFFFFE9);
		WRITEU32(offset + 0x024ABB8, 0xEA000099);
		WRITEU32(offset + 0x0482F28, 0x3F000000);
	}
	offset = 0x00000000;
	data = 0x00000000;
}

void	Xenom45(void)
{
	u32 offset = 0x00000000;
	u32 data = 0x00000000;
	offset = 0x00000000;
	if (READU32(offset + 0x0429610) != 0x00000000) {
		offset = READU32(offset + 0x0429610);
		WRITEU16(offset + 0x00000C8, 0x0000);
	}
	offset = 0x00000000;
	data = 0x00000000;
	offset = 0x00000000;
	if (READU32(offset + 0x042964C) != 0x00000000) {
		offset = READU32(offset + 0x042964C);
		WRITEU16(offset + 0x00000C8, 0x0000);
	}
	offset = 0x00000000;
	data = 0x00000000;
	offset = 0x00000000;
	if (READU32(offset + 0x0429688) != 0x00000000) {
		offset = READU32(offset + 0x0429688);
		WRITEU16(offset + 0x00000C8, 0x0000);
	}
	offset = 0x00000000;
	data = 0x00000000;
	offset = 0x00000000;
	if (READU32(offset + 0x04296C4) != 0x00000000) {
		offset = READU32(offset + 0x04296C4);
		WRITEU16(offset + 0x00000C8, 0x0000);
	}
	offset = 0x00000000;
	data = 0x00000000;
	offset = 0x00000000;
	if (READU32(offset + 0x0429700) != 0x00000000) {
		offset = READU32(offset + 0x0429700);
		WRITEU16(offset + 0x00000C8, 0x0000);
	}
	offset = 0x00000000;
	data = 0x00000000;
}

void	Xenom46(void)
{
	u32 offset = 0x00000000;
	u32 data = 0x00000000;
	offset = 0x00483740;
	for (int i = 0x0; i < 0x00000010; i++) {
		WRITEU8(offset + 0x0000000, 0x01);
		offset += 0x00000848;
	}
	offset = 0x00000000;
	data = 0x00000000;
}

void	Xenom47(void)
{
	u32 offset = 0x00000000;
	u32 data = 0x00000000;
	WRITEU32(offset + 0x0482FF4, 0x00000002);
}

void	Xenom48(void)
{
	u32 offset = 0x00000000;
	u32 data = 0x00000000;
	WRITEU32(offset + 0x0419834, 0x47C34FFE);
}