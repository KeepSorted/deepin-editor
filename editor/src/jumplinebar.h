/* -*- Mode: C++; indent-tabs-mode: nil; tab-width: 4 -*-
 * -*- coding: utf-8 -*-
 *
 * Copyright (C) 2011 ~ 2018 Deepin, Inc.
 *               2011 ~ 2018 Wang Yong
 *
 * Author:     Wang Yong <wangyong@deepin.com>
 * Maintainer: Wang Yong <wangyong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef JUMPLINEBAR_H
#define JUMPLINEBAR_H

#include "linebar.h"

#include <QHBoxLayout>
#include <QIntValidator>
#include <QLabel>
#include <QPainter>
#include <QWidget>

DWIDGET_USE_NAMESPACE

class JumpLineBar : public QWidget
{
    Q_OBJECT
    
public:
    JumpLineBar(QWidget *parent = 0);
    
public slots:    
    void focus();
    bool isFocus();
    
    void activeInput(QString file, int row, int column, int lineCount, int scrollOffset);
    
    void handleFocusOut();
    void handleLineChanged();
    
    void jumpCancel();
    void jumpConfirm();
    
signals:
    void backToPosition(QString file, int row, int column, int scrollOffset);
    void jumpToLine(QString file, int line, bool focusEditor);
    void lostFocusExit();
    
protected:
    void paintEvent(QPaintEvent *event);
    
private:
    LineBar *editLine;
    QHBoxLayout *layout;
    QIntValidator *lineValidator;
    QLabel *label;
    QString jumpFile;
    int jumpFileScrollOffset;
    int rowBeforeJump;
    int columnBeforeJump;
};

#endif
