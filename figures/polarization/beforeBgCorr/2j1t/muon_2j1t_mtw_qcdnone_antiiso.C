void plots_now2/2j1t/muon_2j1t_mtw_qcdnone_antiiso()
{
//=========Macro generated from canvas: cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808/
//=========  (Tue Aug  8 12:00:36 2017) by ROOT version6.02/05
   TCanvas *cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808 = new TCanvas("cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetHighLightColor(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->Range(0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetLeftMargin(0.1150442);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetRightMargin(0.227083);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetTopMargin(0.04002582);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetBottomMargin(0.08064517);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetFrameLineWidth(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1
   TPad *cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1 = new TPad("cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1", "",0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->Range(-46.66667,0.06666676,286.6667,3.87619);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFillStyle(4000);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetLeftMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetRightMargin(0.26);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetTopMargin(0.65);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetBottomMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.23935980447813 = new TH2F("axisRes0.23935980447813","",50,0,200,50,0.6,1.4);
   axisRes0.23935980447813->SetMarkerStyle(20);
   axisRes0.23935980447813->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.23935980447813->GetXaxis()->SetNdivisions(1005);
   axisRes0.23935980447813->GetXaxis()->SetLabelFont(43);
   axisRes0.23935980447813->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.23935980447813->GetXaxis()->SetLabelSize(32);
   axisRes0.23935980447813->GetXaxis()->SetTitleSize(35);
   axisRes0.23935980447813->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.23935980447813->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.23935980447813->GetXaxis()->SetTitleFont(43);
   axisRes0.23935980447813->GetYaxis()->SetTitle("Data/MC");
   axisRes0.23935980447813->GetYaxis()->SetNdivisions(406);
   axisRes0.23935980447813->GetYaxis()->SetLabelFont(43);
   axisRes0.23935980447813->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.23935980447813->GetYaxis()->SetLabelSize(32);
   axisRes0.23935980447813->GetYaxis()->SetTitleSize(35);
   axisRes0.23935980447813->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.23935980447813->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.23935980447813->GetYaxis()->SetTitleFont(43);
   axisRes0.23935980447813->GetZaxis()->SetLabelFont(43);
   axisRes0.23935980447813->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.23935980447813->GetZaxis()->SetLabelSize(32);
   axisRes0.23935980447813->GetZaxis()->SetTitleSize(35);
   axisRes0.23935980447813->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.23935980447813->GetZaxis()->SetTitleFont(43);
   axisRes0.23935980447813->Draw("AXIS");
   TBox *box = new TBox(0,0.9257628,10,1.074237);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9257628,10,1.074237);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9442264,20,1.055774);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9442264,20,1.055774);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.93999,30,1.06001);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.93999,30,1.06001);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.9106611,40,1.089339);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.9106611,40,1.089339);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9385001,50,1.0615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9385001,50,1.0615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9624046,60,1.037595);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9624046,60,1.037595);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9496945,70,1.050305);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9496945,70,1.050305);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9678405,80,1.03216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9678405,80,1.03216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9653627,90,1.034637);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9653627,90,1.034637);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9625603,100,1.03744);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9625603,100,1.03744);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9538224,110,1.046178);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9538224,110,1.046178);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.9377085,120,1.062291);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.9377085,120,1.062291);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9469073,130,1.053093);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9469073,130,1.053093);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.9294446,140,1.070555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.9294446,140,1.070555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.9226437,150,1.077356);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.9226437,150,1.077356);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.8912439,160,1.108756);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.8912439,160,1.108756);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.910871,170,1.089129);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.910871,170,1.089129);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9086812,180,1.091319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9086812,180,1.091319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.8914968,190,1.108503);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.8914968,190,1.108503);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9621107,200,1.037889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9621107,200,1.037889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis10[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata0.5549534339010.4744236784814 = new TH1F("setHistdata0.5549534339010.4744236784814","",20, xAxis10);
   setHistdata0.5549534339010.4744236784814->SetBinContent(1,60.53514);
   setHistdata0.5549534339010.4744236784814->SetBinContent(2,60.50571);
   setHistdata0.5549534339010.4744236784814->SetBinContent(3,44.75252);
   setHistdata0.5549534339010.4744236784814->SetBinContent(4,24.22363);
   setHistdata0.5549534339010.4744236784814->SetBinContent(5,17.73397);
   setHistdata0.5549534339010.4744236784814->SetBinContent(6,9.003784);
   setHistdata0.5549534339010.4744236784814->SetBinContent(7,3.939347);
   setHistdata0.5549534339010.4744236784814->SetBinContent(8,2.595539);
   setHistdata0.5549534339010.4744236784814->SetBinContent(9,1.775825);
   setHistdata0.5549534339010.4744236784814->SetBinContent(10,1.271349);
   setHistdata0.5549534339010.4744236784814->SetBinContent(11,1.237297);
   setHistdata0.5549534339010.4744236784814->SetBinContent(12,1.263828);
   setHistdata0.5549534339010.4744236784814->SetBinContent(13,1.235537);
   setHistdata0.5549534339010.4744236784814->SetBinContent(14,1.305697);
   setHistdata0.5549534339010.4744236784814->SetBinContent(15,1.497922);
   setHistdata0.5549534339010.4744236784814->SetBinContent(16,1.075504);
   setHistdata0.5549534339010.4744236784814->SetBinContent(17,1.16447);
   setHistdata0.5549534339010.4744236784814->SetBinContent(18,1.19463);
   setHistdata0.5549534339010.4744236784814->SetBinContent(19,1.373976);
   setHistdata0.5549534339010.4744236784814->SetBinContent(20,0.9744464);
   setHistdata0.5549534339010.4744236784814->SetBinError(1,0.7113909);
   setHistdata0.5549534339010.4744236784814->SetBinError(2,0.7369982);
   setHistdata0.5549534339010.4744236784814->SetBinError(3,0.5823815);
   setHistdata0.5549534339010.4744236784814->SetBinError(4,0.3451374);
   setHistdata0.5549534339010.4744236784814->SetBinError(5,0.2825256);
   setHistdata0.5549534339010.4744236784814->SetBinError(6,0.1759707);
   setHistdata0.5549534339010.4744236784814->SetBinError(7,0.09929374);
   setHistdata0.5549534339010.4744236784814->SetBinError(8,0.07755655);
   setHistdata0.5549534339010.4744236784814->SetBinError(9,0.06855498);
   setHistdata0.5549534339010.4744236784814->SetBinError(10,0.06728692);
   setHistdata0.5549534339010.4744236784814->SetBinError(11,0.08952767);
   setHistdata0.5549534339010.4744236784814->SetBinError(12,0.1227538);
   setHistdata0.5549534339010.4744236784814->SetBinError(13,0.1556631);
   setHistdata0.5549534339010.4744236784814->SetBinError(14,0.2039156);
   setHistdata0.5549534339010.4744236784814->SetBinError(15,0.2882752);
   setHistdata0.5549534339010.4744236784814->SetBinError(16,0.2608481);
   setHistdata0.5549534339010.4744236784814->SetBinError(17,0.3682377);
   setHistdata0.5549534339010.4744236784814->SetBinError(18,0.4223656);
   setHistdata0.5549534339010.4744236784814->SetBinError(19,0.5193141);
   setHistdata0.5549534339010.4744236784814->SetBinError(20,0.1054869);
   setHistdata0.5549534339010.4744236784814->SetBinError(21,3.605551);
   setHistdata0.5549534339010.4744236784814->SetEntries(35598);
   setHistdata0.5549534339010.4744236784814->SetFillStyle(0);
   setHistdata0.5549534339010.4744236784814->SetMarkerStyle(20);
   setHistdata0.5549534339010.4744236784814->SetMarkerSize(1.15);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetNdivisions(1005);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetLabelFont(43);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetLabelSize(32);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetTitleSize(35);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetTickLength(0.05);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.5549534339010.4744236784814->GetXaxis()->SetTitleFont(43);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetNdivisions(506);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetLabelFont(43);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetLabelSize(32);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetTitleSize(35);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.5549534339010.4744236784814->GetYaxis()->SetTitleFont(43);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetLabelFont(43);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetLabelSize(32);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetTitleSize(35);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.5549534339010.4744236784814->GetZaxis()->SetTitleFont(43);
   setHistdata0.5549534339010.4744236784814->Draw("PESame");
   
   TF1 *axisLine0.6620927739022 = new TF1("axisLine0.662092773902","1",0,200);
   axisLine0.6620927739022->SetFillColor(19);
   axisLine0.6620927739022->SetFillStyle(0);
   axisLine0.6620927739022->SetMarkerStyle(20);
   axisLine0.6620927739022->SetLineWidth(1);
   axisLine0.6620927739022->GetXaxis()->SetNdivisions(1005);
   axisLine0.6620927739022->GetXaxis()->SetLabelFont(43);
   axisLine0.6620927739022->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.6620927739022->GetXaxis()->SetLabelSize(32);
   axisLine0.6620927739022->GetXaxis()->SetTitleSize(35);
   axisLine0.6620927739022->GetXaxis()->SetTickLength(0.05);
   axisLine0.6620927739022->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.6620927739022->GetXaxis()->SetTitleFont(43);
   axisLine0.6620927739022->GetYaxis()->SetNdivisions(506);
   axisLine0.6620927739022->GetYaxis()->SetLabelFont(43);
   axisLine0.6620927739022->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.6620927739022->GetYaxis()->SetLabelSize(32);
   axisLine0.6620927739022->GetYaxis()->SetTitleSize(35);
   axisLine0.6620927739022->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.6620927739022->GetYaxis()->SetTitleFont(43);
   axisLine0.6620927739022->Draw("SameL");
   
   TH2F *axisRes0.239359804478_copy15 = new TH2F("axisRes0.239359804478_copy15","",50,0,200,50,0.6,1.4);
   axisRes0.239359804478_copy15->SetDirectory(0);
   axisRes0.239359804478_copy15->SetMarkerStyle(20);
   axisRes0.239359804478_copy15->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.239359804478_copy15->GetXaxis()->SetNdivisions(1005);
   axisRes0.239359804478_copy15->GetXaxis()->SetLabelFont(43);
   axisRes0.239359804478_copy15->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.239359804478_copy15->GetXaxis()->SetLabelSize(32);
   axisRes0.239359804478_copy15->GetXaxis()->SetTitleSize(35);
   axisRes0.239359804478_copy15->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.239359804478_copy15->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.239359804478_copy15->GetXaxis()->SetTitleFont(43);
   axisRes0.239359804478_copy15->GetYaxis()->SetTitle("Data/MC");
   axisRes0.239359804478_copy15->GetYaxis()->SetNdivisions(406);
   axisRes0.239359804478_copy15->GetYaxis()->SetLabelFont(43);
   axisRes0.239359804478_copy15->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.239359804478_copy15->GetYaxis()->SetLabelSize(32);
   axisRes0.239359804478_copy15->GetYaxis()->SetTitleSize(35);
   axisRes0.239359804478_copy15->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.239359804478_copy15->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.239359804478_copy15->GetYaxis()->SetTitleFont(43);
   axisRes0.239359804478_copy15->GetZaxis()->SetLabelFont(43);
   axisRes0.239359804478_copy15->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.239359804478_copy15->GetZaxis()->SetLabelSize(32);
   axisRes0.239359804478_copy15->GetZaxis()->SetTitleSize(35);
   axisRes0.239359804478_copy15->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.239359804478_copy15->GetZaxis()->SetTitleFont(43);
   axisRes0.239359804478_copy15->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_1->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->cd();
  
// ------------>Primitives in pad: cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2
   TPad *cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2 = new TPad("cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2", "",0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->Range(-46.66667,-6224.719,286.6667,11560.19);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFillStyle(4000);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetLeftMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetRightMargin(0.26);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetTopMargin(0.08);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetBottomMargin(0.35);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->SetFrameBorderMode(0);
   
   TH2F *axis0.62578908212116 = new TH2F("axis0.62578908212116","",50,0,200,50,0,10137.4);
   axis0.62578908212116->SetMarkerStyle(20);
   axis0.62578908212116->GetXaxis()->SetNdivisions(1005);
   axis0.62578908212116->GetXaxis()->SetLabelFont(43);
   axis0.62578908212116->GetXaxis()->SetLabelOffset(0.0105);
   axis0.62578908212116->GetXaxis()->SetLabelSize(0);
   axis0.62578908212116->GetXaxis()->SetTitleSize(35);
   axis0.62578908212116->GetXaxis()->SetTickLength(0.025);
   axis0.62578908212116->GetXaxis()->SetTitleOffset(1.135);
   axis0.62578908212116->GetXaxis()->SetTitleFont(43);
   axis0.62578908212116->GetYaxis()->SetTitle("Events / bin");
   axis0.62578908212116->GetYaxis()->SetNdivisions(506);
   axis0.62578908212116->GetYaxis()->SetLabelFont(43);
   axis0.62578908212116->GetYaxis()->SetLabelOffset(0.0087);
   axis0.62578908212116->GetYaxis()->SetLabelSize(32);
   axis0.62578908212116->GetYaxis()->SetTitleSize(35);
   axis0.62578908212116->GetYaxis()->SetTickLength(0.02631579);
   axis0.62578908212116->GetYaxis()->SetTitleOffset(1.32);
   axis0.62578908212116->GetYaxis()->SetTitleFont(43);
   axis0.62578908212116->GetZaxis()->SetLabelFont(43);
   axis0.62578908212116->GetZaxis()->SetLabelOffset(0.0087);
   axis0.62578908212116->GetZaxis()->SetLabelSize(32);
   axis0.62578908212116->GetZaxis()->SetTitleSize(35);
   axis0.62578908212116->GetZaxis()->SetTitleOffset(1.32);
   axis0.62578908212116->GetZaxis()->SetTitleFont(43);
   axis0.62578908212116->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis11[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",20, xAxis11);
   _stack_1_stack_2->SetMinimum(-8.65145e-09);
   _stack_1_stack_2->SetMaximum(453.0852);
   _stack_1_stack_2->SetDirectory(0);
   _stack_1_stack_2->SetStats(0);
   _stack_1_stack_2->SetMarkerStyle(20);
   _stack_1_stack_2->GetXaxis()->SetNdivisions(1005);
   _stack_1_stack_2->GetXaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetXaxis()->SetLabelOffset(0.0105);
   _stack_1_stack_2->GetXaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetXaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetXaxis()->SetTickLength(0.05);
   _stack_1_stack_2->GetXaxis()->SetTitleOffset(1.135);
   _stack_1_stack_2->GetXaxis()->SetTitleFont(43);
   _stack_1_stack_2->GetYaxis()->SetNdivisions(506);
   _stack_1_stack_2->GetYaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetYaxis()->SetLabelOffset(0.0087);
   _stack_1_stack_2->GetYaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetYaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetYaxis()->SetTitleOffset(1.32);
   _stack_1_stack_2->GetYaxis()->SetTitleFont(43);
   _stack_1_stack_2->GetZaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetZaxis()->SetLabelOffset(0.0087);
   _stack_1_stack_2->GetZaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetZaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetZaxis()->SetTitleOffset(1.32);
   _stack_1_stack_2->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_1_stack_2);
   
   Double_t xAxis12[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttChannel0.0010180120330117 = new TH1F("setHisttChannel0.0010180120330117","",20, xAxis12);
   setHisttChannel0.0010180120330117->SetBinContent(1,8.789623);
   setHisttChannel0.0010180120330117->SetBinContent(2,10.83312);
   setHisttChannel0.0010180120330117->SetBinContent(3,14.53801);
   setHisttChannel0.0010180120330117->SetBinContent(4,15.46776);
   setHisttChannel0.0010180120330117->SetBinContent(5,23.01196);
   setHisttChannel0.0010180120330117->SetBinContent(6,28.4969);
   setHisttChannel0.0010180120330117->SetBinContent(7,38.68081);
   setHisttChannel0.0010180120330117->SetBinContent(8,46.35852);
   setHisttChannel0.0010180120330117->SetBinContent(9,42.9584);
   setHisttChannel0.0010180120330117->SetBinContent(10,25.62545);
   setHisttChannel0.0010180120330117->SetBinContent(11,12.44293);
   setHisttChannel0.0010180120330117->SetBinContent(12,5.117807);
   setHisttChannel0.0010180120330117->SetBinContent(13,1.21875);
   setHisttChannel0.0010180120330117->SetBinContent(14,0.8828264);
   setHisttChannel0.0010180120330117->SetBinContent(15,0.06433205);
   setHisttChannel0.0010180120330117->SetBinContent(16,0.1492615);
   setHisttChannel0.0010180120330117->SetBinContent(17,0.04606431);
   setHisttChannel0.0010180120330117->SetBinContent(18,0.1409724);
   setHisttChannel0.0010180120330117->SetBinContent(20,0.125739);
   setHisttChannel0.0010180120330117->SetBinError(1,1.031425);
   setHisttChannel0.0010180120330117->SetBinError(2,1.115727);
   setHisttChannel0.0010180120330117->SetBinError(3,1.299189);
   setHisttChannel0.0010180120330117->SetBinError(4,1.349182);
   setHisttChannel0.0010180120330117->SetBinError(5,1.678218);
   setHisttChannel0.0010180120330117->SetBinError(6,1.804382);
   setHisttChannel0.0010180120330117->SetBinError(7,2.169907);
   setHisttChannel0.0010180120330117->SetBinError(8,2.343323);
   setHisttChannel0.0010180120330117->SetBinError(9,2.26763);
   setHisttChannel0.0010180120330117->SetBinError(10,1.713172);
   setHisttChannel0.0010180120330117->SetBinError(11,1.222083);
   setHisttChannel0.0010180120330117->SetBinError(12,0.7871155);
   setHisttChannel0.0010180120330117->SetBinError(13,0.3598898);
   setHisttChannel0.0010180120330117->SetBinError(14,0.3075089);
   setHisttChannel0.0010180120330117->SetBinError(15,0.05616323);
   setHisttChannel0.0010180120330117->SetBinError(16,0.1312948);
   setHisttChannel0.0010180120330117->SetBinError(17,0.0460643);
   setHisttChannel0.0010180120330117->SetBinError(18,0.1409724);
   setHisttChannel0.0010180120330117->SetBinError(21,0.125739);
   setHisttChannel0.0010180120330117->SetEntries(5444);
   setHisttChannel0.0010180120330117->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.0010180120330117->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.0010180120330117->SetLineColor(ci);
   setHisttChannel0.0010180120330117->SetLineWidth(2);
   setHisttChannel0.0010180120330117->SetMarkerStyle(20);
   setHisttChannel0.0010180120330117->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.0010180120330117->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.0010180120330117->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.0010180120330117->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.0010180120330117->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.0010180120330117->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.0010180120330117->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.0010180120330117->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.0010180120330117->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.0010180120330117->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.0010180120330117->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.0010180120330117->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.0010180120330117->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.0010180120330117->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.0010180120330117->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.0010180120330117->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.0010180120330117->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.0010180120330117->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.0010180120330117->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.0010180120330117->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.0010180120330117->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.00101801203301,"HIST F");
   Double_t xAxis13[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttWs0.89534082804518 = new TH1F("setHisttWs0.89534082804518","",20, xAxis13);
   setHisttWs0.89534082804518->SetBinContent(1,6.758435);
   setHisttWs0.89534082804518->SetBinContent(2,5.758948);
   setHisttWs0.89534082804518->SetBinContent(3,5.718909);
   setHisttWs0.89534082804518->SetBinContent(4,11.04313);
   setHisttWs0.89534082804518->SetBinContent(5,10.8821);
   setHisttWs0.89534082804518->SetBinContent(6,18.29236);
   setHisttWs0.89534082804518->SetBinContent(7,26.08331);
   setHisttWs0.89534082804518->SetBinContent(8,24.53131);
   setHisttWs0.89534082804518->SetBinContent(9,24.18513);
   setHisttWs0.89534082804518->SetBinContent(10,14.02084);
   setHisttWs0.89534082804518->SetBinContent(11,10.14725);
   setHisttWs0.89534082804518->SetBinContent(12,4.303326);
   setHisttWs0.89534082804518->SetBinContent(13,1.446125);
   setHisttWs0.89534082804518->SetBinContent(14,1.444134);
   setHisttWs0.89534082804518->SetBinContent(15,1.529135);
   setHisttWs0.89534082804518->SetBinContent(16,0.998695);
   setHisttWs0.89534082804518->SetBinContent(17,0.3157281);
   setHisttWs0.89534082804518->SetBinContent(20,2.313624);
   setHisttWs0.89534082804518->SetBinError(1,1.790965);
   setHisttWs0.89534082804518->SetBinError(2,1.734972);
   setHisttWs0.89534082804518->SetBinError(3,1.633795);
   setHisttWs0.89534082804518->SetBinError(4,2.432853);
   setHisttWs0.89534082804518->SetBinError(5,2.230117);
   setHisttWs0.89534082804518->SetBinError(6,2.867551);
   setHisttWs0.89534082804518->SetBinError(7,3.456976);
   setHisttWs0.89534082804518->SetBinError(8,3.394573);
   setHisttWs0.89534082804518->SetBinError(9,3.365782);
   setHisttWs0.89534082804518->SetBinError(10,2.493522);
   setHisttWs0.89534082804518->SetBinError(11,2.239704);
   setHisttWs0.89534082804518->SetBinError(12,1.459155);
   setHisttWs0.89534082804518->SetBinError(13,0.8210678);
   setHisttWs0.89534082804518->SetBinError(14,0.8120725);
   setHisttWs0.89534082804518->SetBinError(15,0.8343685);
   setHisttWs0.89534082804518->SetBinError(16,0.7106172);
   setHisttWs0.89534082804518->SetBinError(17,0.3157281);
   setHisttWs0.89534082804518->SetBinError(20,0.4974078);
   setHisttWs0.89534082804518->SetBinError(21,0.925762);
   setHisttWs0.89534082804518->SetEntries(1140);
   setHisttWs0.89534082804518->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.89534082804518->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.89534082804518->SetLineColor(ci);
   setHisttWs0.89534082804518->SetLineWidth(2);
   setHisttWs0.89534082804518->SetMarkerStyle(20);
   setHisttWs0.89534082804518->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.89534082804518->GetXaxis()->SetLabelFont(43);
   setHisttWs0.89534082804518->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.89534082804518->GetXaxis()->SetLabelSize(32);
   setHisttWs0.89534082804518->GetXaxis()->SetTitleSize(35);
   setHisttWs0.89534082804518->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.89534082804518->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.89534082804518->GetXaxis()->SetTitleFont(43);
   setHisttWs0.89534082804518->GetYaxis()->SetNdivisions(506);
   setHisttWs0.89534082804518->GetYaxis()->SetLabelFont(43);
   setHisttWs0.89534082804518->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.89534082804518->GetYaxis()->SetLabelSize(32);
   setHisttWs0.89534082804518->GetYaxis()->SetTitleSize(35);
   setHisttWs0.89534082804518->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.89534082804518->GetYaxis()->SetTitleFont(43);
   setHisttWs0.89534082804518->GetZaxis()->SetLabelFont(43);
   setHisttWs0.89534082804518->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.89534082804518->GetZaxis()->SetLabelSize(32);
   setHisttWs0.89534082804518->GetZaxis()->SetTitleSize(35);
   setHisttWs0.89534082804518->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.89534082804518->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.895340828045,"HIST F");
   Double_t xAxis14[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistTTJets0.99038215753219 = new TH1F("setHistTTJets0.99038215753219","",20, xAxis14);
   setHistTTJets0.99038215753219->SetBinContent(1,68.52242);
   setHistTTJets0.99038215753219->SetBinContent(2,75.85828);
   setHistTTJets0.99038215753219->SetBinContent(3,78.22577);
   setHistTTJets0.99038215753219->SetBinContent(4,108.8016);
   setHistTTJets0.99038215753219->SetBinContent(5,127.3106);
   setHistTTJets0.99038215753219->SetBinContent(6,177.7404);
   setHistTTJets0.99038215753219->SetBinContent(7,227.6879);
   setHistTTJets0.99038215753219->SetBinContent(8,252.7492);
   setHistTTJets0.99038215753219->SetBinContent(9,222.9004);
   setHistTTJets0.99038215753219->SetBinContent(10,171.1898);
   setHistTTJets0.99038215753219->SetBinContent(11,103.8884);
   setHistTTJets0.99038215753219->SetBinContent(12,58.98859);
   setHistTTJets0.99038215753219->SetBinContent(13,43.5917);
   setHistTTJets0.99038215753219->SetBinContent(14,26.77985);
   setHistTTJets0.99038215753219->SetBinContent(15,15.92002);
   setHistTTJets0.99038215753219->SetBinContent(16,12.36611);
   setHistTTJets0.99038215753219->SetBinContent(17,8.141995);
   setHistTTJets0.99038215753219->SetBinContent(18,6.555659);
   setHistTTJets0.99038215753219->SetBinContent(19,5.094703);
   setHistTTJets0.99038215753219->SetBinContent(20,13.48131);
   setHistTTJets0.99038215753219->SetBinError(1,2.590091);
   setHistTTJets0.99038215753219->SetBinError(2,2.69357);
   setHistTTJets0.99038215753219->SetBinError(3,2.732939);
   setHistTTJets0.99038215753219->SetBinError(4,3.225286);
   setHistTTJets0.99038215753219->SetBinError(5,3.502793);
   setHistTTJets0.99038215753219->SetBinError(6,4.191353);
   setHistTTJets0.99038215753219->SetBinError(7,4.762699);
   setHistTTJets0.99038215753219->SetBinError(8,5.018329);
   setHistTTJets0.99038215753219->SetBinError(9,4.67198);
   setHistTTJets0.99038215753219->SetBinError(10,4.04285);
   setHistTTJets0.99038215753219->SetBinError(11,3.021883);
   setHistTTJets0.99038215753219->SetBinError(12,2.162363);
   setHistTTJets0.99038215753219->SetBinError(13,1.785155);
   setHistTTJets0.99038215753219->SetBinError(14,1.337961);
   setHistTTJets0.99038215753219->SetBinError(15,0.9915952);
   setHistTTJets0.99038215753219->SetBinError(16,0.8292064);
   setHistTTJets0.99038215753219->SetBinError(17,0.6906617);
   setHistTTJets0.99038215753219->SetBinError(18,0.5950574);
   setHistTTJets0.99038215753219->SetBinError(19,0.5527918);
   setHistTTJets0.99038215753219->SetBinError(20,0.3736677);
   setHistTTJets0.99038215753219->SetBinError(21,0.7618328);
   setHistTTJets0.99038215753219->SetEntries(28960);
   setHistTTJets0.99038215753219->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.99038215753219->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.99038215753219->SetLineColor(ci);
   setHistTTJets0.99038215753219->SetLineWidth(2);
   setHistTTJets0.99038215753219->SetMarkerStyle(20);
   setHistTTJets0.99038215753219->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.99038215753219->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.99038215753219->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.99038215753219->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.99038215753219->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.99038215753219->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.99038215753219->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.99038215753219->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.99038215753219->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.99038215753219->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.99038215753219->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.99038215753219->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.99038215753219->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.99038215753219->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.99038215753219->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.99038215753219->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.99038215753219->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.99038215753219->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.99038215753219->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.99038215753219->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.99038215753219->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.990382157532,"HIST F");
   Double_t xAxis15[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsMGHF0.26302307647120 = new TH1F("setHistWJetsMGHF0.26302307647120","",20, xAxis15);
   setHistWJetsMGHF0.26302307647120->SetBinContent(1,23.47543);
   setHistWJetsMGHF0.26302307647120->SetBinContent(2,12.93725);
   setHistWJetsMGHF0.26302307647120->SetBinContent(3,22.30782);
   setHistWJetsMGHF0.26302307647120->SetBinContent(4,58.11525);
   setHistWJetsMGHF0.26302307647120->SetBinContent(5,38.49124);
   setHistWJetsMGHF0.26302307647120->SetBinContent(6,50.54556);
   setHistWJetsMGHF0.26302307647120->SetBinContent(7,67.83233);
   setHistWJetsMGHF0.26302307647120->SetBinContent(8,86.16632);
   setHistWJetsMGHF0.26302307647120->SetBinContent(9,68.73174);
   setHistWJetsMGHF0.26302307647120->SetBinContent(10,59.35608);
   setHistWJetsMGHF0.26302307647120->SetBinContent(11,22.41555);
   setHistWJetsMGHF0.26302307647120->SetBinContent(12,14.47473);
   setHistWJetsMGHF0.26302307647120->SetBinContent(13,4.594013);
   setHistWJetsMGHF0.26302307647120->SetBinContent(14,2.139353);
   setHistWJetsMGHF0.26302307647120->SetBinContent(15,0.5114816);
   setHistWJetsMGHF0.26302307647120->SetBinContent(16,2.292468);
   setHistWJetsMGHF0.26302307647120->SetBinContent(20,0.3857394);
   setHistWJetsMGHF0.26302307647120->SetBinError(1,6.004627);
   setHistWJetsMGHF0.26302307647120->SetBinError(2,3.495077);
   setHistWJetsMGHF0.26302307647120->SetBinError(3,4.687465);
   setHistWJetsMGHF0.26302307647120->SetBinError(4,17.15935);
   setHistWJetsMGHF0.26302307647120->SetBinError(5,6.58525);
   setHistWJetsMGHF0.26302307647120->SetBinError(6,7.424263);
   setHistWJetsMGHF0.26302307647120->SetBinError(7,8.367303);
   setHistWJetsMGHF0.26302307647120->SetBinError(8,9.991965);
   setHistWJetsMGHF0.26302307647120->SetBinError(9,8.912646);
   setHistWJetsMGHF0.26302307647120->SetBinError(10,8.293436);
   setHistWJetsMGHF0.26302307647120->SetBinError(11,4.768073);
   setHistWJetsMGHF0.26302307647120->SetBinError(12,4.392268);
   setHistWJetsMGHF0.26302307647120->SetBinError(13,1.823742);
   setHistWJetsMGHF0.26302307647120->SetBinError(14,1.532295);
   setHistWJetsMGHF0.26302307647120->SetBinError(15,0.5114816);
   setHistWJetsMGHF0.26302307647120->SetBinError(16,1.321122);
   setHistWJetsMGHF0.26302307647120->SetBinError(21,0.3857395);
   setHistWJetsMGHF0.26302307647120->SetEntries(638);
   setHistWJetsMGHF0.26302307647120->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsMGHF0.26302307647120->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsMGHF0.26302307647120->SetLineColor(ci);
   setHistWJetsMGHF0.26302307647120->SetLineWidth(2);
   setHistWJetsMGHF0.26302307647120->SetMarkerStyle(20);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.26302307647120->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.26302307647120->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.26302307647120->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.263023076471,"HIST F");
   Double_t xAxis16[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsMGLF0.3150144398521 = new TH1F("setHistWJetsMGLF0.3150144398521","",20, xAxis16);
   setHistWJetsMGLF0.3150144398521->SetBinContent(1,4.008146);
   setHistWJetsMGLF0.3150144398521->SetBinContent(2,0.7617005);
   setHistWJetsMGLF0.3150144398521->SetBinContent(3,0.66244);
   setHistWJetsMGLF0.3150144398521->SetBinContent(4,4.319669);
   setHistWJetsMGLF0.3150144398521->SetBinContent(5,13.26642);
   setHistWJetsMGLF0.3150144398521->SetBinContent(6,7.688707);
   setHistWJetsMGLF0.3150144398521->SetBinContent(7,36.83931);
   setHistWJetsMGLF0.3150144398521->SetBinContent(8,10.45375);
   setHistWJetsMGLF0.3150144398521->SetBinContent(9,5.782191);
   setHistWJetsMGLF0.3150144398521->SetBinContent(10,7.71809);
   setHistWJetsMGLF0.3150144398521->SetBinContent(12,0.7463931);
   setHistWJetsMGLF0.3150144398521->SetBinError(1,2.330456);
   setHistWJetsMGLF0.3150144398521->SetBinError(2,0.7617004);
   setHistWJetsMGLF0.3150144398521->SetBinError(3,0.66244);
   setHistWJetsMGLF0.3150144398521->SetBinError(4,2.457703);
   setHistWJetsMGLF0.3150144398521->SetBinError(5,9.976037);
   setHistWJetsMGLF0.3150144398521->SetBinError(6,4.348536);
   setHistWJetsMGLF0.3150144398521->SetBinError(7,17.15725);
   setHistWJetsMGLF0.3150144398521->SetBinError(8,4.835806);
   setHistWJetsMGLF0.3150144398521->SetBinError(9,3.136532);
   setHistWJetsMGLF0.3150144398521->SetBinError(10,3.445095);
   setHistWJetsMGLF0.3150144398521->SetBinError(12,0.7463932);
   setHistWJetsMGLF0.3150144398521->SetEntries(50);
   setHistWJetsMGLF0.3150144398521->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsMGLF0.3150144398521->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsMGLF0.3150144398521->SetLineColor(ci);
   setHistWJetsMGLF0.3150144398521->SetLineWidth(2);
   setHistWJetsMGLF0.3150144398521->SetMarkerStyle(20);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.3150144398521->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.3150144398521->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.3150144398521->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.31501443985,"HIST F");
   Double_t xAxis17[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistDYVV0.69008827696722 = new TH1F("setHistDYVV0.69008827696722","",20, xAxis17);
   setHistDYVV0.69008827696722->SetBinContent(1,8.062408);
   setHistDYVV0.69008827696722->SetBinContent(2,5.245151);
   setHistDYVV0.69008827696722->SetBinContent(3,10.49493);
   setHistDYVV0.69008827696722->SetBinContent(4,5.607709);
   setHistDYVV0.69008827696722->SetBinContent(5,9.210208);
   setHistDYVV0.69008827696722->SetBinContent(6,8.002729);
   setHistDYVV0.69008827696722->SetBinContent(7,2.435003);
   setHistDYVV0.69008827696722->SetBinContent(8,11.25058);
   setHistDYVV0.69008827696722->SetBinContent(9,13.29463);
   setHistDYVV0.69008827696722->SetBinContent(10,2.89383);
   setHistDYVV0.69008827696722->SetBinContent(11,5.474658);
   setHistDYVV0.69008827696722->SetBinContent(12,0.2413216);
   setHistDYVV0.69008827696722->SetBinContent(13,0.1393692);
   setHistDYVV0.69008827696722->SetBinContent(14,0.1546938);
   setHistDYVV0.69008827696722->SetBinContent(17,0.08381049);
   setHistDYVV0.69008827696722->SetBinContent(20,0.1131692);
   setHistDYVV0.69008827696722->SetBinError(1,5.136893);
   setHistDYVV0.69008827696722->SetBinError(2,3.780692);
   setHistDYVV0.69008827696722->SetBinError(3,5.334831);
   setHistDYVV0.69008827696722->SetBinError(4,3.381421);
   setHistDYVV0.69008827696722->SetBinError(5,4.873122);
   setHistDYVV0.69008827696722->SetBinError(6,4.052364);
   setHistDYVV0.69008827696722->SetBinError(7,0.5331019);
   setHistDYVV0.69008827696722->SetBinError(8,5.210825);
   setHistDYVV0.69008827696722->SetBinError(9,6.612012);
   setHistDYVV0.69008827696722->SetBinError(10,2.093083);
   setHistDYVV0.69008827696722->SetBinError(11,3.526703);
   setHistDYVV0.69008827696722->SetBinError(12,0.1483751);
   setHistDYVV0.69008827696722->SetBinError(13,0.1114295);
   setHistDYVV0.69008827696722->SetBinError(14,0.1278519);
   setHistDYVV0.69008827696722->SetBinError(17,0.08381049);
   setHistDYVV0.69008827696722->SetBinError(21,0.1131692);
   setHistDYVV0.69008827696722->SetEntries(249);
   setHistDYVV0.69008827696722->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDYVV0.69008827696722->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDYVV0.69008827696722->SetLineColor(ci);
   setHistDYVV0.69008827696722->SetLineWidth(2);
   setHistDYVV0.69008827696722->SetMarkerStyle(20);
   setHistDYVV0.69008827696722->GetXaxis()->SetNdivisions(1005);
   setHistDYVV0.69008827696722->GetXaxis()->SetLabelFont(43);
   setHistDYVV0.69008827696722->GetXaxis()->SetLabelOffset(0.0105);
   setHistDYVV0.69008827696722->GetXaxis()->SetLabelSize(32);
   setHistDYVV0.69008827696722->GetXaxis()->SetTitleSize(35);
   setHistDYVV0.69008827696722->GetXaxis()->SetTickLength(0.05);
   setHistDYVV0.69008827696722->GetXaxis()->SetTitleOffset(1.135);
   setHistDYVV0.69008827696722->GetXaxis()->SetTitleFont(43);
   setHistDYVV0.69008827696722->GetYaxis()->SetNdivisions(506);
   setHistDYVV0.69008827696722->GetYaxis()->SetLabelFont(43);
   setHistDYVV0.69008827696722->GetYaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.69008827696722->GetYaxis()->SetLabelSize(32);
   setHistDYVV0.69008827696722->GetYaxis()->SetTitleSize(35);
   setHistDYVV0.69008827696722->GetYaxis()->SetTitleOffset(1.32);
   setHistDYVV0.69008827696722->GetYaxis()->SetTitleFont(43);
   setHistDYVV0.69008827696722->GetZaxis()->SetLabelFont(43);
   setHistDYVV0.69008827696722->GetZaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.69008827696722->GetZaxis()->SetLabelSize(32);
   setHistDYVV0.69008827696722->GetZaxis()->SetTitleSize(35);
   setHistDYVV0.69008827696722->GetZaxis()->SetTitleOffset(1.32);
   setHistDYVV0.69008827696722->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDYVV0.690088276967,"HIST F");
   ->Draw("same");
   Double_t xAxis18[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata0.55495343390123 = new TH1F("setHistdata0.55495343390123","",20, xAxis18);
   setHistdata0.55495343390123->SetBinContent(1,7241);
   setHistdata0.55495343390123->SetBinContent(2,6740);
   setHistdata0.55495343390123->SetBinContent(3,5905);
   setHistdata0.55495343390123->SetBinContent(4,4926);
   setHistdata0.55495343390123->SetBinContent(5,3940);
   setHistdata0.55495343390123->SetBinContent(6,2618);
   setHistdata0.55495343390123->SetBinContent(7,1574);
   setHistdata0.55495343390123->SetBinContent(8,1120);
   setHistdata0.55495343390123->SetBinContent(9,671);
   setHistdata0.55495343390123->SetBinContent(10,357);
   setHistdata0.55495343390123->SetBinContent(11,191);
   setHistdata0.55495343390123->SetBinContent(12,106);
   setHistdata0.55495343390123->SetBinContent(13,63);
   setHistdata0.55495343390123->SetBinContent(14,41);
   setHistdata0.55495343390123->SetBinContent(15,27);
   setHistdata0.55495343390123->SetBinContent(16,17);
   setHistdata0.55495343390123->SetBinContent(17,10);
   setHistdata0.55495343390123->SetBinContent(18,8);
   setHistdata0.55495343390123->SetBinContent(19,7);
   setHistdata0.55495343390123->SetBinContent(20,16);
   setHistdata0.55495343390123->SetBinError(1,85.09407);
   setHistdata0.55495343390123->SetBinError(2,82.0975);
   setHistdata0.55495343390123->SetBinError(3,76.844);
   setHistdata0.55495343390123->SetBinError(4,70.18547);
   setHistdata0.55495343390123->SetBinError(5,62.76942);
   setHistdata0.55495343390123->SetBinError(6,51.1664);
   setHistdata0.55495343390123->SetBinError(7,39.67367);
   setHistdata0.55495343390123->SetBinError(8,33.4664);
   setHistdata0.55495343390123->SetBinError(9,25.90367);
   setHistdata0.55495343390123->SetBinError(10,18.89444);
   setHistdata0.55495343390123->SetBinError(11,13.82027);
   setHistdata0.55495343390123->SetBinError(12,10.29563);
   setHistdata0.55495343390123->SetBinError(13,7.937254);
   setHistdata0.55495343390123->SetBinError(14,6.403124);
   setHistdata0.55495343390123->SetBinError(15,5.196152);
   setHistdata0.55495343390123->SetBinError(16,4.123106);
   setHistdata0.55495343390123->SetBinError(17,3.162278);
   setHistdata0.55495343390123->SetBinError(18,2.828427);
   setHistdata0.55495343390123->SetBinError(19,2.645751);
   setHistdata0.55495343390123->SetBinError(20,1.732051);
   setHistdata0.55495343390123->SetBinError(21,3.605551);
   setHistdata0.55495343390123->SetEntries(35578);
   setHistdata0.55495343390123->SetFillStyle(0);
   setHistdata0.55495343390123->SetMarkerStyle(20);
   setHistdata0.55495343390123->SetMarkerSize(1.15);
   setHistdata0.55495343390123->GetXaxis()->SetNdivisions(1005);
   setHistdata0.55495343390123->GetXaxis()->SetLabelFont(43);
   setHistdata0.55495343390123->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.55495343390123->GetXaxis()->SetLabelSize(32);
   setHistdata0.55495343390123->GetXaxis()->SetTitleSize(35);
   setHistdata0.55495343390123->GetXaxis()->SetTickLength(0.05);
   setHistdata0.55495343390123->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.55495343390123->GetXaxis()->SetTitleFont(43);
   setHistdata0.55495343390123->GetYaxis()->SetNdivisions(506);
   setHistdata0.55495343390123->GetYaxis()->SetLabelFont(43);
   setHistdata0.55495343390123->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.55495343390123->GetYaxis()->SetLabelSize(32);
   setHistdata0.55495343390123->GetYaxis()->SetTitleSize(35);
   setHistdata0.55495343390123->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.55495343390123->GetYaxis()->SetTitleFont(43);
   setHistdata0.55495343390123->GetZaxis()->SetLabelFont(43);
   setHistdata0.55495343390123->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.55495343390123->GetZaxis()->SetLabelSize(32);
   setHistdata0.55495343390123->GetZaxis()->SetTitleSize(35);
   setHistdata0.55495343390123->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.55495343390123->GetZaxis()->SetTitleFont(43);
   setHistdata0.55495343390123->Draw("PESame");
   
   TH2F *axis0.625789082121_copy24 = new TH2F("axis0.625789082121_copy24","",50,0,200,50,0,10137.4);
   axis0.625789082121_copy24->SetDirectory(0);
   axis0.625789082121_copy24->SetMarkerStyle(20);
   axis0.625789082121_copy24->GetXaxis()->SetNdivisions(1005);
   axis0.625789082121_copy24->GetXaxis()->SetLabelFont(43);
   axis0.625789082121_copy24->GetXaxis()->SetLabelOffset(0.0105);
   axis0.625789082121_copy24->GetXaxis()->SetLabelSize(0);
   axis0.625789082121_copy24->GetXaxis()->SetTitleSize(35);
   axis0.625789082121_copy24->GetXaxis()->SetTickLength(0.025);
   axis0.625789082121_copy24->GetXaxis()->SetTitleOffset(1.135);
   axis0.625789082121_copy24->GetXaxis()->SetTitleFont(43);
   axis0.625789082121_copy24->GetYaxis()->SetTitle("Events / bin");
   axis0.625789082121_copy24->GetYaxis()->SetNdivisions(506);
   axis0.625789082121_copy24->GetYaxis()->SetLabelFont(43);
   axis0.625789082121_copy24->GetYaxis()->SetLabelOffset(0.0087);
   axis0.625789082121_copy24->GetYaxis()->SetLabelSize(32);
   axis0.625789082121_copy24->GetYaxis()->SetTitleSize(35);
   axis0.625789082121_copy24->GetYaxis()->SetTickLength(0.02631579);
   axis0.625789082121_copy24->GetYaxis()->SetTitleOffset(1.32);
   axis0.625789082121_copy24->GetYaxis()->SetTitleFont(43);
   axis0.625789082121_copy24->GetZaxis()->SetLabelFont(43);
   axis0.625789082121_copy24->GetZaxis()->SetLabelOffset(0.0087);
   axis0.625789082121_copy24->GetZaxis()->SetLabelSize(32);
   axis0.625789082121_copy24->GetZaxis()->SetTitleSize(35);
   axis0.625789082121_copy24->GetZaxis()->SetTitleOffset(1.32);
   axis0.625789082121_copy24->GetZaxis()->SetTitleFont(43);
   axis0.625789082121_copy24->Draw("sameaxis");
   
   pt = new TPaveText(0.165,0.855,0.165,0.855,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(32);
   TText *AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.265,0.855,0.265,0.855,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(53);
   pt->SetTextSize(32);
   AText = pt->AddText("Preliminary");
   pt->Draw();
   
   pt = new TPaveText(0.165,0.785,0.165,0.785,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(43);
   pt->SetTextSize(32);
   AText = pt->AddText("");
   pt->Draw();
   
   pt = new TPaveText(0.74,0.94,0.74,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.745,0.36,0.99,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("setHistdata0.554953433901","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistDYVV0.690088276967","Z/#gamma/VV","F");

   ci = TColor::GetColor("#3d7bea");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#24498c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGLF0.31501443985","W+LF","F");

   ci = TColor::GetColor("#4dff97");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#2e995a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGHF0.263023076471","W+HF","F");

   ci = TColor::GetColor("#1bb320");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#106b13");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistTTJets0.990382157532","t#bar{t}","F");

   ci = TColor::GetColor("#f9910c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#955707");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHisttWs0.895340828045","tW/#it{s}-ch.","F");

   ci = TColor::GetColor("#f9c40c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#957507");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHisttChannel0.00101801203301","#it{t}-channel","F");

   ci = TColor::GetColor("#ff0505");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990303");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TBox","MC stat.","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808_2->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808->SetSelected(cvmuon_2j1t_mtw_qcdnone_antiiso0.572030864808);
}
