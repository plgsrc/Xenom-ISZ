#include "cheats.h"
#include "notes.h"
#include <string.h>

#define ENTRY_COUNT 300
 
void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
    int     index;
 
    if (type == 0)
        index = new_entry((char *)name, cheatfunction);
    else if (type == 1)
        index = new_radio_entry((char *)name, cheatfunction);
    else if (type == 2)
        index = new_spoiler((char *)name);
    else return;
    set_note(note, index);
}
 
void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 0);
}
 
void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 1);
}
 
void new_spoiler_with_note(const char *name, const char *note)
{
    with_note_common(name, note, NULL, 2);
}

	static const char * const A_note = "Health,Filled,                     Hydrated,Battery All 9999%";
	static const char * const B_note = "Press D-Pad Down";
	static const char * const C_note = "Press D-Pad Down";
	static const char * const D_note = "Press D-Pad Down";
	static const char * const E_note = "Press Y Teleport Respawn";
	static const char * const F_note = "It has side effects :(";
	static const char * const G_note = "All guns support.";
	static const char * const H_note = "D-Pad Up/Save                      D-Pad Down/Go";
	
void	my_menus(void)
{

	int index;
	int i;
	
	set_hid_address(0x10002000);
	new_unselectable_entry("[JPN 00040000001BEA00]  !=Note");
	new_unselectable_entry("Twitter Account @Xenom_MK8D");
	new_unselectable_entry("------------------------------");
	new_spoiler("Status Codes");
		new_entry_with_note("All Status  !",A_note,Xenom31);
		new_entry("9999% Health", Xenom17);
		new_entry("9999% Filled", Xenom18);
		new_entry("9999% Hydrated", Xenom19);
		new_entry("9999% Battery", Xenom20);
		new_entry("150% Health Press Y", Xenom8);
		exit_spoiler();
	new_spoiler("Movement Codes");
		new_radio_entry_with_note("Air Car   !",B_note,Car);
		new_radio_entry_with_note("Air Dog   !",C_note,Dog);
		new_radio_entry_with_note("Air Bike  !",D_note,Bike);
		new_entry("Always Running", Xenom7);
		new_entry("Moonjump Low  (Press Y+B)", Xenom26);
		new_entry("Moonjump High (Press START)", Xenom11);
		new_entry("Moonjump Rise (Press L)", Xenom44);
		new_entry_with_note("Instant Respawn  !",E_note,Xenom16);
		new_entry_with_note("Teleport  !",H_note,Xenom30);
		exit_spoiler();
	new_spoiler("Effect Codes");
		new_entry("Gun flotation", Xenom2);
		new_entry("Health Decrease Press A+L", Xenom27);
		new_entry_with_note("Rapid Fire [BETA]  !",F_note,Xenom24);
		new_entry("Face Modifier", Xenom47);
		new_entry("FastGameSpeed", Xenom29);
		new_entry("FastGameSpeed Press A", Xenom9);
		exit_spoiler();
	new_spoiler("Contrast Codes");
		new_entry("Contrast Modifier", Xenom12);
		new_entry("Darkness 1", Xenom13);
		new_entry("Darkness 2", Xenom14);
		new_entry("Darkness 3", Xenom15);
		new_entry("Always day time 10:00", Xenom4);
		new_entry("X-Ray World", Xenom48);
		exit_spoiler();
	new_spoiler("Clothes");
		new_radio_entry("Red", Xenom35);
		new_radio_entry("Blue", Xenom36);
		new_radio_entry("Yellow", Xenom37);
		new_radio_entry("Gleen", Xenom38);
		new_radio_entry("Gray", Xenom39);
		new_radio_entry("White", Xenom40);
		new_radio_entry("Black", Xenom41);
		exit_spoiler();
	new_spoiler("Bag");
		new_entry("Red", Xenom43);
		exit_spoiler();
	new_spoiler("Other Codes");
			new_entry_with_note("NoLeload  !",G_note,Xenom45);
			new_entry("Car No Vibration", Xenom10);
			new_entry("Display player names", Xenom46);
			exit_spoiler();
	new_unselectable_entry("Codes Xenom,DD0N,Taifel,SSJ3.");
	new_unselectable_entry("                XeFoXy,T-Noah");
		exit_spoiler();

	for (i = 2; i <= index; i++)
		set_note(notes[i - 2], i);
}


