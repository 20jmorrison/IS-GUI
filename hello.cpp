#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Button.H>


int main(int argc, char **argv) {
  int width = 660;
  int height = 420;

  Fl_Window *window = new Fl_Window(width, height, "IS Packet Interpreter"); // Create main window

  Fl_PNG_Image *arrowImage = new Fl_PNG_Image("rightArrow.png"); // Load right/left arrow button images and scale
  int desiredWidth1 = 110;
  int desiredHeight1 = 90;
  Fl_Image *scaledImage1 = arrowImage->copy(desiredWidth1, desiredHeight1);
  Fl_Button *nextButton = new Fl_Button(165, 20, 135, 35);
  nextButton->image(scaledImage1);

  Fl_PNG_Image *leftArrowImage = new Fl_PNG_Image("leftArrow.png");
  int desiredWidth2 = 110;
  int desiredHeight2 = 90;
  Fl_Image *scaledImage2 = leftArrowImage->copy(desiredWidth2, desiredHeight2);
  Fl_Button *prevButton = new Fl_Button(15, 20, 135, 35);
  prevButton->image(scaledImage2);

  Fl_Group *group1 = new Fl_Group(15, height / 3, 200, 270, "PMT PACKET"); // PMT packet group
  group1->box(FL_BORDER_BOX);
  group1->labelfont(FL_BOLD);
  Fl_Box *PMT1 = new Fl_Box(18, (height/3)+5, 50, 20, "SYNC:");
  Fl_Output *PMTsync = new Fl_Output(135, (height/3)+5, 60,20);
  PMTsync->color(FL_BACKGROUND_COLOR);
  PMTsync->value("0x0000");
  PMTsync->box(FL_FLAT_BOX);
  PMT1->box(FL_FLAT_BOX);
  PMT1->labelfont(FL_BOLD);
  PMT1->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *PMT2 = new Fl_Box(18, (height/3)+25, 50, 20, "SEQ:");
  Fl_Output *PMTseq = new Fl_Output(135, (height/3)+25, 60,20);
  PMTseq->color(FL_BACKGROUND_COLOR);
  PMTseq->value("#00000");
  PMTseq->box(FL_FLAT_BOX);
  PMT2->box(FL_FLAT_BOX); 
  PMT2->labelfont(FL_BOLD);
  PMT2->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *PMT3 = new Fl_Box(18, (height/3)+45, 50, 20, "ADC:");
  Fl_Output *PMTadc = new Fl_Output(135, (height/3)+45, 60,20);
  PMTadc->color(FL_BACKGROUND_COLOR);
  PMTadc->value("0.000v");
  PMTadc->box(FL_FLAT_BOX);
  PMT3->box(FL_FLAT_BOX); 
  PMT3->labelfont(FL_BOLD);
  PMT3->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);

  Fl_Group *group2 = new Fl_Group(230, height / 3, 200, 270, "ERPA PACKET"); // ERPA packet group
  group2->box(FL_BORDER_BOX);
  group2->labelfont(FL_BOLD);
  Fl_Box *ERPA1 = new Fl_Box(233, (height/3)+5, 50, 20, "SYNC:");
  Fl_Output *ERPAsync = new Fl_Output(350, (height/3)+5, 60,20);
  ERPAsync->color(FL_BACKGROUND_COLOR);
  ERPAsync->value("0x0000");
  ERPAsync->box(FL_FLAT_BOX);
  ERPA1->box(FL_FLAT_BOX); 
  ERPA1->labelfont(FL_BOLD);
  ERPA1->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA2 = new Fl_Box(233, (height/3)+25, 50, 20, "SEQ:");
  Fl_Output *ERPAseq = new Fl_Output(350, (height/3)+25, 60,20);
  ERPAseq->color(FL_BACKGROUND_COLOR);
  ERPAseq->value("#00000");
  ERPAseq->box(FL_FLAT_BOX);
  ERPA2->box(FL_FLAT_BOX); 
  ERPA2->labelfont(FL_BOLD);
  ERPA2->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA3 = new Fl_Box(233, (height/3)+45, 50, 20, "ADC:");
  Fl_Output *ERPAadc = new Fl_Output(350, (height/3)+45, 60,20);
  ERPAadc->color(FL_BACKGROUND_COLOR);
  ERPAadc->value("0.000v");
  ERPAadc->box(FL_FLAT_BOX);
  ERPA3->box(FL_FLAT_BOX); 
  ERPA3->labelfont(FL_BOLD);
  ERPA3->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA4 = new Fl_Box(233, (height/3)+65, 50, 20, "SWP:");
  Fl_Output *ERPAswp = new Fl_Output(350, (height/3)+65, 60,20);
  ERPAswp->color(FL_BACKGROUND_COLOR);
  ERPAswp->value("0.0v");
  ERPAswp->box(FL_FLAT_BOX);
  ERPA4->box(FL_FLAT_BOX); 
  ERPA4->labelfont(FL_BOLD);
  ERPA4->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA5 = new Fl_Box(233, (height/3)+105, 50, 20, "TEMP1:");
  Fl_Output *ERPAtemp1 = new Fl_Output(350, (height/3)+105, 60,20);
  ERPAtemp1->color(FL_BACKGROUND_COLOR);
  ERPAtemp1->value("000.000C");
  ERPAtemp1->box(FL_FLAT_BOX);
  ERPA5->box(FL_FLAT_BOX); 
  ERPA5->labelfont(FL_BOLD);
  ERPA5->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA6 = new Fl_Box(233, (height/3)+125, 50, 20, "TEMP2:");
  Fl_Output *ERPAtemp2 = new Fl_Output(350, (height/3)+125, 60,20);
  ERPAtemp2->color(FL_BACKGROUND_COLOR);
  ERPAtemp2->value("000.000C");
  ERPAtemp2->box(FL_FLAT_BOX);
  ERPA6->box(FL_FLAT_BOX);
  ERPA6->labelfont(FL_BOLD);
  ERPA6->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *ERPA7 = new Fl_Box(233, (height/3)+145, 50, 20, "ENDmon:");
  Fl_Output *ERPAendmon = new Fl_Output(350, (height/3)+145, 60,20);
  ERPAendmon->color(FL_BACKGROUND_COLOR);
  ERPAendmon->value("0.000v");
  ERPAendmon->box(FL_FLAT_BOX);
  ERPA7->box(FL_FLAT_BOX);
  ERPA7->labelfont(FL_BOLD); 
  ERPA7->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);


  Fl_Group *group3 = new Fl_Group(445, height / 3, 200, 270, "HK PACKET"); // HK packet group
  group3->box(FL_BORDER_BOX);
  group3->labelfont(FL_BOLD);
  Fl_Box *HK1 = new Fl_Box(448, (height/3)+5, 50, 20, "SYNC:");
  Fl_Output *HKsync = new Fl_Output(565, (height/3)+5, 60,20);
  HKsync->color(FL_BACKGROUND_COLOR);
  HKsync->value("0x0000");
  HKsync->box(FL_FLAT_BOX);
  HK1->box(FL_FLAT_BOX);
  HK1->labelfont(FL_BOLD); 
  HK1->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK2 = new Fl_Box(448, (height/3)+25, 50, 20, "SEQ:");
  Fl_Output *HKseq = new Fl_Output(565, (height/3)+25, 60,20);
  HKseq->color(FL_BACKGROUND_COLOR);
  HKseq->value("#0000");
  HKseq->box(FL_FLAT_BOX);
  HK2->box(FL_FLAT_BOX);
  HK2->labelfont(FL_BOLD); 
  HK2->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK3 = new Fl_Box(448, (height/3)+45, 50, 20, "BUSvmon:");
  Fl_Output *HKbusvmon = new Fl_Output(565, (height/3)+45, 60,20);
  HKbusvmon->color(FL_BACKGROUND_COLOR);
  HKbusvmon->value("0.000v");
  HKbusvmon->box(FL_FLAT_BOX);
  HK3->box(FL_FLAT_BOX); 
  HK3->labelfont(FL_BOLD);
  HK3->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK4 = new Fl_Box(448, (height/3)+65, 50, 20, "BUSimon:");
  Fl_Output *HKbusimon = new Fl_Output(565, (height/3)+65, 60,20);
  HKbusimon->color(FL_BACKGROUND_COLOR);
  HKbusimon->value("0.000v");
  HKbusimon->box(FL_FLAT_BOX);
  HK4->box(FL_FLAT_BOX); 
  HK4->labelfont(FL_BOLD);
  HK4->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK5 = new Fl_Box(448, (height/3)+105, 50, 20, "2.5vmon:");
  Fl_Output *HK25vmon = new Fl_Output(565, (height/3)+105, 60,20);
  HK25vmon->color(FL_BACKGROUND_COLOR);
  HK25vmon->value("0.000v");
  HK25vmon->box(FL_FLAT_BOX);
  HK5->box(FL_FLAT_BOX); 
  HK5->labelfont(FL_BOLD);
  HK5->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK6 = new Fl_Box(448, (height/3)+125, 50, 20, "3.3vmon:");
  Fl_Output *HK33vmon = new Fl_Output(565, (height/3)+125, 60,20);
  HK33vmon->color(FL_BACKGROUND_COLOR);
  HK33vmon->value("0.000v");
  HK33vmon->box(FL_FLAT_BOX);
  HK6->box(FL_FLAT_BOX);
  HK6->labelfont(FL_BOLD); 
  HK6->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK7 = new Fl_Box(448, (height/3)+145, 50, 20, "5vmon:");
  Fl_Output *HK5vmon = new Fl_Output(565, (height/3)+145, 60,20);
  HK5vmon->color(FL_BACKGROUND_COLOR);
  HK5vmon->value("0.000v");
  HK5vmon->box(FL_FLAT_BOX);
  HK7->box(FL_FLAT_BOX);
  HK7->labelfont(FL_BOLD); 
  HK7->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK8 = new Fl_Box(448, (height/3)+185, 50, 20, "5vref:");
  Fl_Output *HK5vref = new Fl_Output(565, (height/3)+185, 60,20);
  HK5vref->color(FL_BACKGROUND_COLOR);
  HK5vref->value("0.000v");
  HK5vref->box(FL_FLAT_BOX);
  HK8->box(FL_FLAT_BOX);
  HK8->labelfont(FL_BOLD); 
  HK8->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK9 = new Fl_Box(448, (height/3)+205, 50, 20, "15v:");
  Fl_Output *HK15v = new Fl_Output(565, (height/3)+205, 60,20);
  HK15v->color(FL_BACKGROUND_COLOR);
  HK15v->value("0.000v");
  HK15v->box(FL_FLAT_BOX);
  HK9->box(FL_FLAT_BOX);
  HK9->labelfont(FL_BOLD); 
  HK9->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK10 = new Fl_Box(448, (height/3)+225, 50, 20, "N3v3:");
  Fl_Output *HKn3v3 = new Fl_Output(565, (height/3)+225, 60,20);
  HKn3v3->color(FL_BACKGROUND_COLOR);
  HKn3v3->value("0.000v");
  HKn3v3->box(FL_FLAT_BOX);
  HK10->box(FL_FLAT_BOX);
  HK10->labelfont(FL_BOLD); 
  HK10->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
  Fl_Box *HK11 = new Fl_Box(448, (height/3)+245, 50, 20, "N5v:");
  Fl_Output *HKn5v = new Fl_Output(565, (height/3)+245, 60,20);
  HKn5v->color(FL_BACKGROUND_COLOR);
  HKn5v->value("0.000v");
  HKn5v->box(FL_FLAT_BOX);
  HK11->box(FL_FLAT_BOX);
  HK11->labelfont(FL_BOLD); 
  HK11->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);

  window->end(); // Cleanup
  window->show(argc, argv);
  return Fl::run();
} 
