/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QLabel *label_9;
    QProgressBar *progressBar;
    QLabel *label_10;
    QLabel *label_power_val;
    QHBoxLayout *horizontalLayout_13;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_dir_x;
    QWidget *widget_speed_y;
    QWidget *widget_speed_x;
    QLabel *label_dir_y;
    QLabel *label_6;
    QFrame *frame_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_2;
    QListView *view_logging;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_image;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_image_topic;
    QPushButton *pushButton_sub_image;
    QWidget *widget;
    QLabel *label_11;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *set_start_btn;
    QPushButton *set_goal_btn;
    QPushButton *set_return_pos_btn;
    QPushButton *return_btn;
    QVBoxLayout *layout_rviz;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLineEdit *line_edit_host;
    QLabel *label_3;
    QLineEdit *line_edit_topic;
    QCheckBox *checkbox_use_environment;
    QCheckBox *checkbox_remember_settings;
    QHBoxLayout *horizontalLayout;
    QPushButton *quit_button;
    QPushButton *button_connect;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_o;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_j;
    QCheckBox *checkBox_is_all;
    QPushButton *pushButton_l;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_n;
    QPushButton *pushButton_m;
    QPushButton *pushButton_br;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_linera;
    QLabel *label_linera;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider_raw;
    QLabel *label_raw;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QPushButton *laser_btn;
    QTextEdit *textEdit_laser_cmd;
    QTextEdit *textEdit_quick_output;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLabel *label_12;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *pos_x;
    QLabel *label_16;
    QLabel *pos_y;
    QLabel *label_17;
    QLabel *pos_z;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *return_x;
    QLabel *label_18;
    QLabel *return_y;
    QLabel *label_21;
    QLabel *return_z;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1251, 876);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_12 = new QVBoxLayout(centralwidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(32, 32));
        label_9->setMaximumSize(QSize(32, 32));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/power.png")));

        horizontalLayout_7->addWidget(label_9);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(100, 25));
        progressBar->setMaximumSize(QSize(100, 25));
        progressBar->setValue(24);

        horizontalLayout_7->addWidget(progressBar);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(32, 32));
        label_10->setMaximumSize(QSize(32, 32));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/power-v.png")));

        horizontalLayout_7->addWidget(label_10);

        label_power_val = new QLabel(centralwidget);
        label_power_val->setObjectName(QStringLiteral("label_power_val"));

        horizontalLayout_7->addWidget(label_power_val);


        horizontalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_11 = new QVBoxLayout(tab_status);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(tab_status);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_dir_x = new QLabel(tab_status);
        label_dir_x->setObjectName(QStringLiteral("label_dir_x"));

        gridLayout->addWidget(label_dir_x, 1, 1, 1, 1);

        widget_speed_y = new QWidget(tab_status);
        widget_speed_y->setObjectName(QStringLiteral("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(widget_speed_y, 0, 2, 1, 2);

        widget_speed_x = new QWidget(tab_status);
        widget_speed_x->setObjectName(QStringLiteral("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(widget_speed_x, 0, 0, 1, 2);

        label_dir_y = new QLabel(tab_status);
        label_dir_y->setObjectName(QStringLiteral("label_dir_y"));

        gridLayout->addWidget(label_dir_y, 1, 3, 1, 1);

        label_6 = new QLabel(tab_status);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout);

        frame_2 = new QFrame(tab_status);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_10->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        verticalLayout_2->addWidget(view_logging);


        horizontalLayout_9->addWidget(groupBox_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_image = new QLabel(tab_status);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setMinimumSize(QSize(200, 200));
        label_image->setMaximumSize(QSize(200, 200));
        label_image->setStyleSheet(QStringLiteral("border:1px solid black"));

        horizontalLayout_8->addWidget(label_image);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_image_topic = new QLineEdit(tab_status);
        lineEdit_image_topic->setObjectName(QStringLiteral("lineEdit_image_topic"));

        verticalLayout->addWidget(lineEdit_image_topic);

        pushButton_sub_image = new QPushButton(tab_status);
        pushButton_sub_image->setObjectName(QStringLiteral("pushButton_sub_image"));

        verticalLayout->addWidget(pushButton_sub_image);


        horizontalLayout_8->addLayout(verticalLayout);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_11->addLayout(verticalLayout_10);

        widget = new QWidget(tab_status);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout_11->addWidget(widget);

        label_11 = new QLabel(tab_status);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 100));
        label_11->setMaximumSize(QSize(100, 16777215));

        verticalLayout_11->addWidget(label_11);

        tab_manager->addTab(tab_status, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_16 = new QVBoxLayout(tab_3);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        set_start_btn = new QPushButton(tab_3);
        set_start_btn->setObjectName(QStringLiteral("set_start_btn"));
        set_start_btn->setMinimumSize(QSize(150, 0));
        set_start_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/classes/SetInitialPose.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_start_btn->setIcon(icon1);

        horizontalLayout_11->addWidget(set_start_btn);

        set_goal_btn = new QPushButton(tab_3);
        set_goal_btn->setObjectName(QStringLiteral("set_goal_btn"));
        set_goal_btn->setMinimumSize(QSize(150, 0));
        set_goal_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/classes/SetGoal.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_goal_btn->setIcon(icon2);

        horizontalLayout_11->addWidget(set_goal_btn);

        set_return_pos_btn = new QPushButton(tab_3);
        set_return_pos_btn->setObjectName(QStringLiteral("set_return_pos_btn"));
        set_return_pos_btn->setMinimumSize(QSize(150, 25));
        set_return_pos_btn->setMaximumSize(QSize(150, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/set_return.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_return_pos_btn->setIcon(icon3);

        horizontalLayout_11->addWidget(set_return_pos_btn);

        return_btn = new QPushButton(tab_3);
        return_btn->setObjectName(QStringLiteral("return_btn"));
        return_btn->setMinimumSize(QSize(150, 25));
        return_btn->setMaximumSize(QSize(150, 25));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        return_btn->setIcon(icon4);

        horizontalLayout_11->addWidget(return_btn);


        verticalLayout_13->addLayout(horizontalLayout_11);

        layout_rviz = new QVBoxLayout();
        layout_rviz->setObjectName(QStringLiteral("layout_rviz"));

        verticalLayout_13->addLayout(layout_rviz);


        verticalLayout_16->addLayout(verticalLayout_13);

        tab_manager->addTab(tab_3, QString());

        horizontalLayout_13->addWidget(tab_manager);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(400, 16777215));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        verticalLayout_4->addWidget(line_edit_master);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_2);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        verticalLayout_4->addWidget(line_edit_host);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_3);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        verticalLayout_4->addWidget(line_edit_topic);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_use_environment);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_remember_settings);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        quit_button = new QPushButton(groupBox);
        quit_button->setObjectName(QStringLiteral("quit_button"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(quit_button);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(button_connect);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_u = new QPushButton(groupBox);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));

        horizontalLayout_2->addWidget(pushButton_u);

        pushButton_i = new QPushButton(groupBox);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));

        horizontalLayout_2->addWidget(pushButton_i);

        pushButton_o = new QPushButton(groupBox);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));

        horizontalLayout_2->addWidget(pushButton_o);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_j = new QPushButton(groupBox);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));

        horizontalLayout_3->addWidget(pushButton_j);

        checkBox_is_all = new QCheckBox(groupBox);
        checkBox_is_all->setObjectName(QStringLiteral("checkBox_is_all"));

        horizontalLayout_3->addWidget(checkBox_is_all);

        pushButton_l = new QPushButton(groupBox);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));

        horizontalLayout_3->addWidget(pushButton_l);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_n = new QPushButton(groupBox);
        pushButton_n->setObjectName(QStringLiteral("pushButton_n"));

        horizontalLayout_4->addWidget(pushButton_n);

        pushButton_m = new QPushButton(groupBox);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));

        horizontalLayout_4->addWidget(pushButton_m);

        pushButton_br = new QPushButton(groupBox);
        pushButton_br->setObjectName(QStringLiteral("pushButton_br"));

        horizontalLayout_4->addWidget(pushButton_br);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSlider_linera = new QSlider(groupBox);
        horizontalSlider_linera->setObjectName(QStringLiteral("horizontalSlider_linera"));
        horizontalSlider_linera->setMaximum(100);
        horizontalSlider_linera->setValue(0);
        horizontalSlider_linera->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_linera);

        label_linera = new QLabel(groupBox);
        label_linera->setObjectName(QStringLiteral("label_linera"));
        label_linera->setMinimumSize(QSize(30, 0));
        label_linera->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(label_linera);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSlider_raw = new QSlider(groupBox);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setValue(0);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_raw);

        label_raw = new QLabel(groupBox);
        label_raw->setObjectName(QStringLiteral("label_raw"));
        label_raw->setMinimumSize(QSize(20, 0));
        label_raw->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label_raw);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_8->addWidget(frame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 40, 391, 131));
        laser_btn = new QPushButton(groupBox_2);
        laser_btn->setObjectName(QStringLiteral("laser_btn"));
        laser_btn->setGeometry(QRect(20, 100, 111, 25));
        textEdit_laser_cmd = new QTextEdit(groupBox_2);
        textEdit_laser_cmd->setObjectName(QStringLiteral("textEdit_laser_cmd"));
        textEdit_laser_cmd->setGeometry(QRect(20, 30, 301, 51));
        textEdit_quick_output = new QTextEdit(tab_2);
        textEdit_quick_output->setObjectName(QStringLiteral("textEdit_quick_output"));
        textEdit_quick_output->setGeometry(QRect(20, 280, 391, 111));
        textEdit_quick_output->setStyleSheet(QLatin1String("background:rgb(0, 0, 0)\n"
""));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_15 = new QVBoxLayout(tab_4);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(16, 16));
        label_13->setMaximumSize(QSize(16, 16));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/classes/Displays.svg")));

        horizontalLayout_10->addWidget(label_13);

        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_10->addWidget(label_12);


        verticalLayout_14->addLayout(horizontalLayout_10);

        treeWidget = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(150);
        treeWidget->header()->setMinimumSectionSize(150);

        verticalLayout_14->addWidget(treeWidget);


        verticalLayout_15->addLayout(verticalLayout_14);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_13->addWidget(tabWidget);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_14->addWidget(label_15);

        pos_x = new QLabel(centralwidget);
        pos_x->setObjectName(QStringLiteral("pos_x"));
        pos_x->setMinimumSize(QSize(71, 0));
        pos_x->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(pos_x);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_14->addWidget(label_16);

        pos_y = new QLabel(centralwidget);
        pos_y->setObjectName(QStringLiteral("pos_y"));
        pos_y->setMinimumSize(QSize(71, 0));
        pos_y->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(pos_y);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_14->addWidget(label_17);

        pos_z = new QLabel(centralwidget);
        pos_z->setObjectName(QStringLiteral("pos_z"));
        pos_z->setMinimumSize(QSize(71, 0));
        pos_z->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(pos_z);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_14->addWidget(label_20);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_14->addWidget(label_19);

        return_x = new QLabel(centralwidget);
        return_x->setObjectName(QStringLiteral("return_x"));
        return_x->setMinimumSize(QSize(71, 0));
        return_x->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(return_x);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_14->addWidget(label_18);

        return_y = new QLabel(centralwidget);
        return_y->setObjectName(QStringLiteral("return_y"));
        return_y->setMinimumSize(QSize(71, 0));
        return_y->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(return_y);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_14->addWidget(label_21);

        return_z = new QLabel(centralwidget);
        return_z->setObjectName(QStringLiteral("return_z"));
        return_z->setMinimumSize(QSize(71, 0));
        return_z->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_14->addWidget(return_z);


        verticalLayout_9->addLayout(horizontalLayout_14);


        verticalLayout_12->addLayout(verticalLayout_9);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1251, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindowDesign", "\347\224\265\346\261\240\347\224\265\351\207\217\357\274\232", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_power_val->setText(QApplication::translate("MainWindowDesign", "00.00V", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindowDesign", "Y\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_x->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        label_dir_y->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindowDesign", "X\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", Q_NULLPTR));
        label_image->setText(QApplication::translate("MainWindowDesign", "NO IMAGE", Q_NULLPTR));
        pushButton_sub_image->setText(QApplication::translate("MainWindowDesign", "\350\256\242\351\230\205", Q_NULLPTR));
        label_11->setText(QString());
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        set_start_btn->setText(QApplication::translate("MainWindowDesign", "2D Pose Estimate", Q_NULLPTR));
        set_goal_btn->setText(QApplication::translate("MainWindowDesign", "2D Nav Goal", Q_NULLPTR));
        set_return_pos_btn->setText(QApplication::translate("MainWindowDesign", "\350\256\276\347\275\256\350\277\224\350\210\252\347\202\271", Q_NULLPTR));
        return_btn->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_u->setShortcut(QApplication::translate("MainWindowDesign", "U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_i->setShortcut(QApplication::translate("MainWindowDesign", "I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_o->setShortcut(QApplication::translate("MainWindowDesign", "O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_j->setShortcut(QApplication::translate("MainWindowDesign", "J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_is_all->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_is_all->setShortcut(QApplication::translate("MainWindowDesign", "K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_l->setShortcut(QApplication::translate("MainWindowDesign", "L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_n->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_n->setShortcut(QApplication::translate("MainWindowDesign", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_m->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_m->setShortcut(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_br->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_br->setShortcut(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246\357\274\232", Q_NULLPTR));
        label_linera->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246\357\274\232", Q_NULLPTR));
        label_raw->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "Tab 1", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        laser_btn->setText(QApplication::translate("MainWindowDesign", "\346\211\223\345\274\200\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Tab 2", Q_NULLPTR));
        label_13->setText(QString());
        label_12->setText(QApplication::translate("MainWindowDesign", "Display", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindowDesign", "X\357\274\232", Q_NULLPTR));
        pos_x->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowDesign", "Y\357\274\232", Q_NULLPTR));
        pos_y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowDesign", "Z\357\274\232", Q_NULLPTR));
        pos_z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252\347\202\271\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindowDesign", "X\357\274\232", Q_NULLPTR));
        return_x->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindowDesign", "Y\357\274\232", Q_NULLPTR));
        return_y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindowDesign", "Z\357\274\232", Q_NULLPTR));
        return_z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
