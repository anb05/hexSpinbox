#include "hexspinbox.h"

#include <QRegExp>

namespace hspb {

HexSpinBox::HexSpinBox(QWidget *parent)
	: QSpinBox(parent)
{
	setRange(0, 0xff);
	_pValidator = new QRegExpValidator(QRegExp("[0-9A-Fa-f]{1,8}"), this);


}

HexSpinBox::~HexSpinBox() = default;

QValidator::State HexSpinBox::validate(QString& text, int& pos) const
{
	return _pValidator->validate(text, pos);
}

int HexSpinBox::valueFromText(const QString& text) const
{
	bool ok {false};
	return text.toInt(&ok, 16);
}

QString HexSpinBox::textFromValue(int value) const
{
	return QString::number(value, 16).toUpper();
}

} // namespace hspb
