#include "BrightTheme.h"

QString BrightTheme::id()
{
	return "bright";
}

QString BrightTheme::name()
{
	return QObject::tr("Bright");
}

QString BrightTheme::qtTheme()
{
	return "Fusion";
}

QPalette BrightTheme::colorScheme()
{
	QPalette brightPalette;
	brightPalette.setColor(QPalette::Window, QColor(239,240,241));
	brightPalette.setColor(QPalette::WindowText, QColor(49,54,59));
	brightPalette.setColor(QPalette::Base, QColor(252,252,252));
	brightPalette.setColor(QPalette::AlternateBase, QColor(239,240,241));
	brightPalette.setColor(QPalette::ToolTipBase, QColor(49,54,59));
	brightPalette.setColor(QPalette::ToolTipText, QColor(239,240,241));
	brightPalette.setColor(QPalette::Text,  QColor(49,54,59));
	brightPalette.setColor(QPalette::Button, QColor(239,240,241));
	brightPalette.setColor(QPalette::ButtonText, QColor(49,54,59));
	brightPalette.setColor(QPalette::BrightText, Qt::red);
	brightPalette.setColor(QPalette::Link, QColor(41, 128, 185));

	brightPalette.setColor(QPalette::Highlight, QColor(61, 174, 233));
	brightPalette.setColor(QPalette::HighlightedText, QColor(239,240,241));
	return brightPalette;
}


QString BrightTheme::appStyleSheet()
{
	return QString();
}
