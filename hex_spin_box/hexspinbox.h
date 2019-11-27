#ifndef HEXSPINBOX_H
#define HEXSPINBOX_H

#include <QSpinBox>

class QRegExpValidator;

namespace hspb {

class HexSpinBox : public QSpinBox
{
	Q_OBJECT

public:
	explicit HexSpinBox(QWidget *parent = nullptr);
	~HexSpinBox() override;

	explicit HexSpinBox(const HexSpinBox&) = delete ;
	explicit HexSpinBox(HexSpinBox&&)      = delete ;

public:
	HexSpinBox operator= (const HexSpinBox&) = delete ;
	HexSpinBox operator= (HexSpinBox&&)      = delete ;

protected:
	QValidator::State validate(QString& text, int& pos) const override;
	int valueFromText(const QString& text) const override;
	QString textFromValue(int value) const override;

private:
	QRegExpValidator* _pValidator;
};

} // namespace hspb

#endif // HEXSPINBOX_H
