/***************************************************************************
 *   Copyright (C) 2005 by yunfan                                          *
 *   yunfan_zg@163.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "evaqunmemberpickerui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <q3frame.h>
#include <qlabel.h>
#include <q3header.h>
#include <q3listview.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <q3whatsthis.h>
#include <qimage.h>
#include <qpixmap.h>
//Added by qt3to4:
#include <Q3VBoxLayout>
#include <Q3GridLayout>
 
#include "evaguimain.h"
#include "defines.h"

//X #include <klocale.h>

/*
 *  Constructs a EvaQunMemberPickerUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
EvaQunMemberPickerUI::EvaQunMemberPickerUI( QWidget* parent, const char* name, Qt::WFlags fl )
    : QWidget( parent, name, fl )
{
	if ( !name )
		setName( "EvaQunMemberPickerUI" );
	EvaQunMemberPickerUILayout = new Q3GridLayout( this, 1, 1, 0, 0, "EvaQunMemberPickerUILayout"); 
	
	fraMain = new Q3Frame( this, "fraMain" );
	fraMain->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, fraMain->sizePolicy().hasHeightForWidth() ) );
	fraMain->setFrameShape( Q3Frame::GroupBoxPanel );
	fraMain->setFrameShadow( Q3Frame::Raised );
	fraMainLayout = new Q3GridLayout( fraMain, 1, 1, 6, 3, "fraMainLayout"); 
	
	layout1 = new Q3VBoxLayout( 0, 0, 6, "layout1"); 
	
	line1 = new Q3Frame( fraMain, "line1" );
	line1->setFrameShape( Q3Frame::HLine );
	line1->setFrameShadow( Q3Frame::Raised );
	line1->setFrameShape( Q3Frame::HLine );
	layout1->addWidget( line1 );
	
	line2 = new Q3Frame( fraMain, "line2" );
	line2->setFrameShape( Q3Frame::HLine );
	line2->setFrameShadow( Q3Frame::Raised );
	line2->setFrameShape( Q3Frame::HLine );
	layout1->addWidget( line2 );
	
	lblTitle = new QLabel( fraMain, "lblTitle" );
	layout1->addWidget( lblTitle );
	
	lvBuddyList = new Q3ListView( fraMain, "lvBuddyList" );
	lvBuddyList->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, lvBuddyList->sizePolicy().hasHeightForWidth() ) );
	lvBuddyList->addColumn("");
	lvBuddyList->setSelectionMode(Q3ListView::Single);
	layout1->addWidget( lvBuddyList );
	
	fraMainLayout->addLayout( layout1, 0, 0 );
	
	EvaQunMemberPickerUILayout->addWidget( fraMain, 0, 0 );
	languageChange();
	resize( QSize(220, 337).expandedTo(minimumSizeHint()) );
//X 	clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
EvaQunMemberPickerUI::~EvaQunMemberPickerUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void EvaQunMemberPickerUI::languageChange()
{
	setCaption( i18n( "Qun Member Picker" ) );
	lblTitle->setText( i18n( "Please select members from your list" ) );
}

