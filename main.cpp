#include "./hex_spin_box/hexspinbox.h"
#include "./app/application.h"

int main(int argc, char *argv[])
{
	hspb::Application a(argc, argv);
	hspb::HexSpinBox w;

	w.show();
	return a.exec();
}
