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
#ifndef EVAMAINWINDOW_H
#define EVAMAINWINDOW_H

#include "evamainuibase.h"
#include <qpoint.h>
#include <qsize.h>
#include <qtooltip.h>
#include <qmap.h>
//Added by qt3to4:
#include <QMoveEvent>
#include <QResizeEvent>
#include <QPixmap>
#include <QMenu>

//X #include <kurl.h>
//X #include <khtml_part.h>
#include <list>
#include <string>
#include "evalistview.h"
#include "evaguimain.h"
//X #include "evadcopview.h"

class MainWindowTip : public QToolTip{
public:
	MainWindowTip(QWidget *parent);
	virtual ~MainWindowTip() {}
	
protected:
	void maybeTip(const QPoint &);
};

class QResizeEvent;
class Q3ListViewItem;
class QMenu;
//X class KHTMLPart;
class EvaContactListView;
class EvaQunsListView;
class EvaRecentContactsListView;
class EvaScriptWidget;

class EvaMainWindow : public EvaMainUIBase// , virtual public EvaDCOPViewInterface
{
	Q_OBJECT
public:
	EvaMainWindow( QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = 0); // | WDestructiveClose
	~EvaMainWindow();
	
	void setMainInfo(const unsigned int id, const QString &nick, QPixmap *p);
	QRect tipRect(const QPoint &pos);
	QString myInfoTip();
	unsigned int getQQ() const { return qqNum; }
	void setSystemMenu( QMenu *sys);
	void setStatusMenu( QMenu *status);
	
	void setPosAndSize();
	const QPoint &getPosition() const { return nowPosition; }
	const QSize &getSize() const { return nowSize; }

	void changeGroupTo(const unsigned int id, const int index);
	void addBuddy(const unsigned int id);

	void updateBuddy(const unsigned int id);
	void updateMyInfo();

	void addQun(const unsigned int id);
	void updateQun(const unsigned int id);

	void clearList();
	void clearQunList();



	void updateContacts();
	void updateQuns();
	void updateRecentContacts();
	
	void ShowTab(int key);
	void showInfoFrame(bool showInfo = false);
	void UpdateLoginInfo(int value, const QString &msg);

	/// DCOP Actions calls
//X 	int  addTab(QString scriptName, QString name, QString image, QString contents);
	//void removeTab( int id); // it is in public slots
//X 	void removeTabs(QString scriptName);
//X 	bool updateTab(int id, QString contents);
//X 	void addButton(QString scriptName, QString buttonName, QString image, QString tip);
//X 	void removeButton(QString scriptName, QString buttonName);
//X 	void removeButtons(QString scriptName);
//X 	bool isTabExisted(int id);
//X 	void bringToFront(int id);
//X 	void openChatWindow(unsigned int id, bool isQun);
//X 	void updateStatusBar( QString message);
//X 	void openUrl(int id, QString url);

public slots:
        void friendStatusChanged( unsigned int id );
	void changeToOnline(unsigned int id);
	void changeToOffline(unsigned int id);
	void changeToLeave(unsigned int id);
	void changeToInvisible(unsigned int id);
	void newMessage(unsigned int id);
	void gotMessage(unsigned int id);
	void newQunMessage(unsigned int id);
	void gotQunMessage(unsigned int id);

	void addBuddyToRecentList(const unsigned int id, bool isMyWord = false);
	void addQunToRecentList(const unsigned int id, bool isMyWord = false);
	void slotFaceSizeChanged();
        void toggleVisible();
	
	void deleteBuddy(unsigned int id);
	
	void online();
	void offline();
	void leave();
	void invisible();

	bool removeTab(int id); //! DCOP call
signals:
	void groupDeleted(const int);  // paremeter is the group index
	//void groupAdded(QString, int); // group name & index
	void groupRenamed(QString, int); // group name & index
	void deleteMeFrom(const unsigned int);
	void groupChanged(const unsigned int,int);
	
	void requestChat(const unsigned int);
	void requestSendFile(const unsigned int);
	void requestLevel(const unsigned int);
	void requestDetails(const unsigned int);
	void requestModifyMemo(const unsigned int);
	void requestHistory(const unsigned int);
	void requestDelete(const unsigned int);  // the deleting qq number 
	void requestSearch();
	void requestSystemMessages();
	
	void requestQunChat(const unsigned int);
	void requestQunDetails(const unsigned int);
	void requestQunExit(const unsigned int);
	void requestQunCreate();
	void requestQunHistory(const unsigned int);
protected:
	void resizeEvent( QResizeEvent *event);
	void moveEvent( QMoveEvent *event );

private slots:
	void slotUpdateBuddyStat();
	void slotTbMyFace();
	
	void slotSearch();
	void slotSystemMessages();
	void slotSystemClicked();
	void slotStatusClicked();

private:
        EvaMain* g_eva;
	QPoint  nowPosition;
	QSize   nowSize;
	unsigned int qqNum;
//X 	QMap<int, EvaScriptWidget *> m_customTabs;
//X 	QMap<int, QString> m_tabScriptMap;

	QMenu *sysMenu;
	QMenu *statusMenu;

	QPixmap *pixOnline;
	QPixmap *pixOffline;
	QPixmap *pixLeave;
	QPixmap *pixInvisible;

	MainWindowTip *myTip;

	EvaContactListView *m_buddyLv;
	int m_buddyTabKey;

	EvaQunsListView *m_qunLv;
	int m_qunTabKey;

	EvaRecentContactsListView *m_recentLv;
	int m_recentTabKey;

	void loadContacts();
	void loadQuns();
	void loadRecentContacts();
	
//X 	EvaScriptWidget *getCustomTab( int id );
	
	friend class EvaMain;
};

#endif
