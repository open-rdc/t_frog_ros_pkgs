#include <stdio.h>

#include <QPainter>
#include <QLineEdit>
#include <QtGui/QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QTimer>

#include <geometry_msgs/Twist.h>

#include "state_trigger_panel.h"

namespace orne_rviz_plugins
{

StateTriggerPanel::StateTriggerPanel( QWidget* parent )
  : rviz::Panel( parent )
{
  start_nav_button_ = new QPushButton("StartWaypointsNavigation");

  QVBoxLayout* layout = new QVBoxLayout;
  layout->addWidget(start_nav_button_);
  setLayout( layout );
  
  connect(start_nav_button_, SIGNAL(clicked()), this, SLOT(pushStartNavigation()));
}

void StateTriggerPanel::save( rviz::Config config ) const
{
  rviz::Panel::save( config );
}

void StateTriggerPanel::load( const rviz::Config& config )
{
  rviz::Panel::load( config );
}

void StateTriggerPanel::pushStartNavigation() {
    ROS_ERROR("just debugging");
}

} // end namespace orne_rviz_plugins

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(orne_rviz_plugins::StateTriggerPanel,rviz::Panel )
