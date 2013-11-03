/* Copyright 2013 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <QDialog>
#include "logic/BaseVersion.h"

class BaseInstance;

namespace Ui
{
class CopyInstanceDialog;
}

class CopyInstanceDialog : public QDialog
{
	Q_OBJECT

public:
	explicit CopyInstanceDialog(BaseInstance *original, QWidget *parent = 0);
	~CopyInstanceDialog();

	void updateDialogState();

	QString instName() const;
	QString iconKey() const;

private
slots:
	void on_iconButton_clicked();
	void on_instNameTextBox_textChanged(const QString &arg1);

private:
	Ui::CopyInstanceDialog *ui;
	QString InstIconKey;
	BaseInstance *m_original;
};
