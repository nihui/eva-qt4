TEMPLATE = app
TARGET = eva
QT += webkit qt3support xml network
CONFIG += qt debug
DEPENDPATH += api \
 libeva \
 ui \
 api/filetrans \
 libeva/libcustompic \
 libeva/libft \
 libeva/libuh
INCLUDEPATH += . \
 api \
 ui \
 libeva \
 libeva/libcustompic \
 api/filetrans \
 libeva/libuh \
 libeva/libft
HEADERS += evaaddingmanager.h \
 evachatwindowmanager.h \
 evacontactmanager.h \
 evaidt.h \
 evaloginmanager.h \
 evaguimain.h \
 evasysmsgmanager.h \
 evasystemtray.h \
 api/evasession.h \
 api/evanetworkpolicy.h \
 api/evagraphicverifycode.h \
 api/customface.h \
 api/evaapi.h \
 api/evaconnecter.h \
 api/evahtmlparser.h \
 api/evaipaddress.h \
 api/evaipseeker.h \
 api/evanetwork.h \
 api/evapacketmanager.h \
 api/evapicmanager.h \
 api/evaqtutil.h \
 api/evaresource.h \
 api/evaservers.h \
 api/evasetting.h \
 api/evasocket.h \
 api/evauhmanager.h \
 api/evauser.h \
 api/evausersetting.h \
 api/qmdcodec.h \
 api/regiongrabber.h \
 libeva/evaaddfriend.h \
 libeva/evaaddfriendex.h \
 libeva/evaadvancedsearch.h \
 libeva/evacrypt.h \
 libeva/evadefines.h \
 libeva/evaextrainfo.h \
 libeva/evafriend.h \
 libeva/evafriendlist.h \
 libeva/evagroup.h \
 libeva/evaimreceive.h \
 libeva/evaimsend.h \
 libeva/evakeyrequest.h \
 libeva/evalevel.h \
 libeva/evalogin.h \
 libeva/evalogintoken.h \
 libeva/evamemo.h \
 libeva/evaonlinestatus.h \
 libeva/evapacket.h \
 libeva/evaqun.h \
 libeva/evaqunlist.h \
 libeva/evasearchuser.h \
 libeva/evauserinfo.h \
 libeva/evautil.h \
 libeva/evaweather.h \
 libeva/libeva.h \
 libeva/md5.h \
 ui/defines.h \
 ui/createsmileyui.h \
 ui/createsmileywindow.h \
 ui/customfacemanagerui.h \
 ui/customfaceselector.h \
 ui/customfaceuibase.h \
 ui/evaaddingnoticeuibase.h \
 ui/evaaddingnoticewindow.h \
 ui/evaaddingwindow.h \
 ui/evaaddqunuibase.h \
 ui/evaaddqunwindow.h \
 ui/evaadduibase.h \
 ui/evachatuibase.h \
 ui/evachatwindow.h \
 ui/evacontactlistview.h \
 ui/evadetailswindow.h \
 ui/evadisplaywidget.h \
 ui/evahistoryuibase.h \
 ui/evahistoryviewer.h \
 ui/evalistview.h \
 ui/evaloginveriuibase.h \
 ui/evaloginveriwindow.h \
 ui/evaloginwindow.h \
 ui/evamainuibase.h \
 ui/evamainwindow.h \
 ui/evanotifyuibase.h \
 ui/evanotifywindow.h \
 ui/evaqunchatuibase.h \
 ui/evaqunchatwindow.h \
 ui/evaquncreatewindow.h \
 ui/evaqunlistview.h \
 ui/evaqunmemberpicker.h \
 ui/evaqunmemberpickerui.h \
 ui/evaqunsysmsguibase.h \
 ui/evaqunsysmsgwindow.h \
 ui/evasearchuibase.h \
 ui/evasearchwindow.h \
 ui/evastatusbar.h \
 ui/evasysbroadcastuibase.h \
 ui/evasysbroadcastwindow.h \
 ui/evasyshistoryviewer.h \
 ui/evasyssettinguibase.h \
 ui/evasyssettingwindow.h \
 ui/evatabwidget.h \
 ui/evatextedit.h \
 ui/evatipuibase.h \
 ui/evatipwindow.h \
 ui/evaui.h \
 ui/evauserinfowidget.h \
 ui/evauseruibase.h \
 ui/loginuibase.h \
 ui/quncategorypicker.h \
 ui/quncategoryui.h \
 ui/quncreateui.h \
 ui/qundetailsui.h \
 ui/qundetailswindow.h \
 ui/simplechatview.h \
 ui/webkitchatview.h \
 api/filetrans/evacachedfile.h \
 api/filetrans/evafiledownloader.h \
 api/filetrans/evafilemanager.h \
 libeva/libcustompic/evapicpacket.h \
 libeva/libcustompic/evarequestagent.h \
 libeva/libcustompic/evarequestface.h \
 libeva/libcustompic/evarequeststart.h \
 libeva/libcustompic/evatransfer.h \
 libeva/libft/evaftpacket.h \
 libeva/libft/evaftprotocols.h \
 libeva/libuh/evauhpacket.h \
 libeva/libuh/evauhprotocols.h
SOURCES += evaaddingmanager.cpp \
 evachatwindowmanager.cpp \
 evacontactmanager.cpp \
 evaidt.cpp \
 evaloginmanager.cpp \
 evaguimain.cpp \
 evasysmsgmanager.cpp \
 evasystemtray.cpp \
 main.cpp \
 api/evasession.cpp \
 api/evanetworkpolicy.cpp \
 api/customface.cpp \
 api/evaconnecter.cpp \
 api/evahtmlparser.cpp \
 api/evaipaddress.cpp \
 api/evaipseeker.cpp \
 api/evanetwork.cpp \
 api/evapacketmanager.cpp \
 api/evapicmanager.cpp \
 api/evaqtutil.cpp \
 api/evaresource.cpp \
 api/evaservers.cpp \
 api/evasetting.cpp \
 api/evasocket.cpp \
 api/evauhmanager.cpp \
 api/evauser.cpp \
 api/evausersetting.cpp \
 api/qmdcodec.cpp \
 api/regiongrabber.cpp \
 libeva/evaaddfriend.cpp \
 libeva/evaaddfriendex.cpp \
 libeva/evaadvancedsearch.cpp \
 libeva/evacrypt.cpp \
 libeva/evaextrainfo.cpp \
 libeva/evafriend.cpp \
 libeva/evafriendlist.cpp \
 libeva/evagroup.cpp \
 libeva/evaimreceive.cpp \
 libeva/evaimsend.cpp \
 libeva/evakeyrequest.cpp \
 libeva/evalevel.cpp \
 libeva/evalogin.cpp \
 libeva/evalogintoken.cpp \
 libeva/evamemo.cpp \
 libeva/evaonlinestatus.cpp \
 libeva/evapacket.cpp \
 libeva/evaqun.cpp \
 libeva/evaqunlist.cpp \
 libeva/evasearchuser.cpp \
 libeva/evauserinfo.cpp \
 libeva/evautil.cpp \
 libeva/evaweather.cpp \
 libeva/md5.c \
 ui/createsmileyui.cpp \
 ui/createsmileywindow.cpp \
 ui/customfacemanagerui.cpp \
 ui/customfaceselector.cpp \
 ui/customfaceuibase.cpp \
 ui/evaaddingnoticeuibase.cpp \
 ui/evaaddingnoticewindow.cpp \
 ui/evaaddingwindow.cpp \
 ui/evaaddqunuibase.cpp \
 ui/evaaddqunwindow.cpp \
 ui/evaadduibase.cpp \
 ui/evachatuibase.cpp \
 ui/evachatwindow.cpp \
 ui/evacontactlistview.cpp \
 ui/evadetailswindow.cpp \
 ui/evadisplaywidget.cpp \
 ui/evahistoryuibase.cpp \
 ui/evahistoryviewer.cpp \
 ui/evalistview.cpp \
 ui/evaloginveriuibase.cpp \
 ui/evaloginveriwindow.cpp \
 ui/evaloginwindow.cpp \
 ui/evamainuibase.cpp \
 ui/evamainwindow.cpp \
 ui/evanotifyuibase.cpp \
 ui/evanotifywindow.cpp \
 ui/evaqunchatuibase.cpp \
 ui/evaqunchatwindow.cpp \
 ui/evaquncreatewindow.cpp \
 ui/evaqunlistview.cpp \
 ui/evaqunmemberpicker.cpp \
 ui/evaqunmemberpickerui.cpp \
 ui/evaqunsysmsguibase.cpp \
 ui/evaqunsysmsgwindow.cpp \
 ui/evasearchuibase.cpp \
 ui/evasearchwindow.cpp \
 ui/evastatusbar.cpp \
 ui/evasysbroadcastuibase.cpp \
 ui/evasysbroadcastwindow.cpp \
 ui/evasyshistoryviewer.cpp \
 ui/evasyssettinguibase.cpp \
 ui/evasyssettingwindow.cpp \
 ui/evatabwidget.cpp \
 ui/evatextedit.cpp \
 ui/evatipuibase.cpp \
 ui/evatipwindow.cpp \
 ui/evauserinfowidget.cpp \
 ui/evauseruibase.cpp \
 ui/loginuibase.cpp \
 ui/quncategorypicker.cpp \
 ui/quncategoryui.cpp \
 ui/quncreateui.cpp \
 ui/qundetailsui.cpp \
 ui/qundetailswindow.cpp \
 ui/simplechatview.cpp \
 ui/webkitchatview.cpp \
 api/filetrans/evacachedfile.cpp \
 api/filetrans/evafiledownloader.cpp \
 api/filetrans/evafilemanager.cpp \
 libeva/libcustompic/evapicpacket.cpp \
 libeva/libcustompic/evarequestagent.cpp \
 libeva/libcustompic/evarequestface.cpp \
 libeva/libcustompic/evarequeststart.cpp \
 libeva/libcustompic/evatransfer.cpp \
 libeva/libft/evaftpacket.cpp \
 libeva/libft/evaftprotocols.cpp \
 libeva/libuh/evauhpacket.cpp \
 libeva/libuh/evauhprotocols.cpp
win32 {
 LIBS +=  -lwsock32
 RC_FILE = eva.rc
}