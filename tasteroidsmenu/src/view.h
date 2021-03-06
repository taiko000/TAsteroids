#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QResizeEvent>
#include <QDir>

class View : public QGraphicsView
{
	Q_OBJECT
public:
        View(QWidget * parent = Q_NULLPTR) : QGraphicsView(parent)
	{
//            QGLFormat format(QGL::SampleBuffers);
//            format.setVersion(1,1);
//            setViewport(new QGLWidget(format));
//         //setViewport(new QOpenGLWidget(this));
//		setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
//		setScene(new OpenGLScene);
	}

public slots:
	void loadRandomModel(int unused = 0)
	{
//		Q_UNUSED(unused);
//		QStringList asteroidModels = QDir(":menu_files/").entryList();

//		if(!asteroidModels.empty())
//		{
//			int randomIndex =  qrand() % asteroidModels.size();

//			OpenGLScene * glscene = qobject_cast<OpenGLScene*>(scene());
//			if(glscene)
//				glscene->loadModel(":menu_files/" + asteroidModels[randomIndex]);
//		}
	}

protected:
	void resizeEvent(QResizeEvent *event) {
		if (scene())
			scene()->setSceneRect(QRect(QPoint(0, 0), event->size()));
		QGraphicsView::resizeEvent(event);
	}
};

#endif // VIEW_H
