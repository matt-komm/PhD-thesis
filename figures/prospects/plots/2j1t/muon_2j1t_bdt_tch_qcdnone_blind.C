void plots/2j1t/muon_2j1t_bdt_tch_qcdnone_blind()
{
//=========Macro generated from canvas: cvmuon_2j1t_bdt_tch_qcdnone_blind26431/
//=========  (Fri Aug 25 01:54:14 2017) by ROOT version6.02/05
   TCanvas *cvmuon_2j1t_bdt_tch_qcdnone_blind26431 = new TCanvas("cvmuon_2j1t_bdt_tch_qcdnone_blind26431", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetHighLightColor(2);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->Range(0,0,1,1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetTickx(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetTicky(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetLeftMargin(0.1150442);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetRightMargin(0.227083);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetTopMargin(0.04002582);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetBottomMargin(0.08064517);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetFrameLineWidth(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1
   TPad *cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1 = new TPad("cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1", "",0,0,1,1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->Draw();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->cd();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFillStyle(4000);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetTickx(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetTicky(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetLeftMargin(0.14);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetRightMargin(0.26);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetTopMargin(0.65);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetBottomMargin(0.14);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->SetFrameBorderMode(0);
   
   TH2F *axisRes3470214 = new TH2F("axisRes3470214","",50,-1,1,50,0.6,1.4);
   axisRes3470214->SetMarkerStyle(20);
   axisRes3470214->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes3470214->GetXaxis()->SetNdivisions(1005);
   axisRes3470214->GetXaxis()->SetLabelFont(43);
   axisRes3470214->GetXaxis()->SetLabelOffset(0.0105);
   axisRes3470214->GetXaxis()->SetLabelSize(32);
   axisRes3470214->GetXaxis()->SetTitleSize(35);
   axisRes3470214->GetXaxis()->SetTickLength(0.04166667);
   axisRes3470214->GetXaxis()->SetTitleOffset(1.135);
   axisRes3470214->GetXaxis()->SetTitleFont(43);
   axisRes3470214->GetYaxis()->SetTitle("Data/MC");
   axisRes3470214->GetYaxis()->SetNdivisions(406);
   axisRes3470214->GetYaxis()->SetLabelFont(43);
   axisRes3470214->GetYaxis()->SetLabelOffset(0.0087);
   axisRes3470214->GetYaxis()->SetLabelSize(32);
   axisRes3470214->GetYaxis()->SetTitleSize(35);
   axisRes3470214->GetYaxis()->SetTickLength(0.07142857);
   axisRes3470214->GetYaxis()->SetTitleOffset(1.32);
   axisRes3470214->GetYaxis()->SetTitleFont(43);
   axisRes3470214->GetZaxis()->SetLabelFont(43);
   axisRes3470214->GetZaxis()->SetLabelOffset(0.0087);
   axisRes3470214->GetZaxis()->SetLabelSize(32);
   axisRes3470214->GetZaxis()->SetTitleSize(35);
   axisRes3470214->GetZaxis()->SetTitleOffset(1.32);
   axisRes3470214->GetZaxis()->SetTitleFont(43);
   axisRes3470214->Draw("AXIS");
   TBox *box = new TBox(-1,0.9752226,-0.9230769,1.024777);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9752226,-0.9230769,1.024777);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9871315,-0.8461538,1.012868);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9871315,-0.8461538,1.012868);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9859987,-0.7692308,1.014001);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9859987,-0.7692308,1.014001);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9858102,-0.6923077,1.01419);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9858102,-0.6923077,1.01419);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9857873,-0.6153846,1.014213);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9857873,-0.6153846,1.014213);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.986259,-0.5384615,1.013741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.986259,-0.5384615,1.013741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9864632,-0.4615385,1.013537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9864632,-0.4615385,1.013537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.986106,-0.3846154,1.013894);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.986106,-0.3846154,1.013894);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9859868,-0.3076923,1.014013);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9859868,-0.3076923,1.014013);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9863715,-0.2307692,1.013628);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9863715,-0.2307692,1.013628);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9859294,-0.1538462,1.014071);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9859294,-0.1538462,1.014071);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9855017,-0.07692308,1.014498);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9855017,-0.07692308,1.014498);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.986025,0,1.013975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.986025,0,1.013975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9861766,0.07692308,1.013823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9861766,0.07692308,1.013823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9855939,0.1538462,1.014406);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9855939,0.1538462,1.014406);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9846813,0.2307692,1.015319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9846813,0.2307692,1.015319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9848767,0.3076923,1.015123);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9848767,0.3076923,1.015123);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9846632,0.3846154,1.015337);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9846632,0.3846154,1.015337);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9818869,0.4615385,1.018113);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9818869,0.4615385,1.018113);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9809655,0.5384615,1.019034);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9809655,0.5384615,1.019034);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9801986,0.6153846,1.019801);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9801986,0.6153846,1.019801);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9788442,0.6923077,1.021156);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9788442,0.6923077,1.021156);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9804184,0.7692308,1.019582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9804184,0.7692308,1.019582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9809422,0.8461538,1.019058);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9809422,0.8461538,1.019058);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.978179,0.9230769,1.021821);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.978179,0.9230769,1.021821);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9691032,1,1.030897);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9691032,1,1.030897);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis11[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata22285770315 = new TH1F("setHistdata22285770315","",26, xAxis11);
   setHistdata22285770315->SetBinContent(1,1.050572);
   setHistdata22285770315->SetBinContent(2,0.9839945);
   setHistdata22285770315->SetBinContent(3,0.9980409);
   setHistdata22285770315->SetBinContent(4,0.9859874);
   setHistdata22285770315->SetBinContent(5,1.007356);
   setHistdata22285770315->SetBinContent(6,1.007876);
   setHistdata22285770315->SetBinContent(7,0.991872);
   setHistdata22285770315->SetBinContent(8,0.9902324);
   setHistdata22285770315->SetBinContent(9,1.00991);
   setHistdata22285770315->SetBinContent(10,1.018135);
   setHistdata22285770315->SetBinContent(11,1.02648);
   setHistdata22285770315->SetBinContent(12,1.038343);
   setHistdata22285770315->SetBinContent(13,0.9986894);
   setHistdata22285770315->SetBinError(1,0.00734217);
   setHistdata22285770315->SetBinError(2,0.004771615);
   setHistdata22285770315->SetBinError(3,0.005295485);
   setHistdata22285770315->SetBinError(4,0.005585726);
   setHistdata22285770315->SetBinError(5,0.005853064);
   setHistdata22285770315->SetBinError(6,0.00591356);
   setHistdata22285770315->SetBinError(7,0.005817356);
   setHistdata22285770315->SetBinError(8,0.005935284);
   setHistdata22285770315->SetBinError(9,0.006176733);
   setHistdata22285770315->SetBinError(10,0.006343797);
   setHistdata22285770315->SetBinError(11,0.006575813);
   setHistdata22285770315->SetBinError(12,0.006743054);
   setHistdata22285770315->SetBinError(13,0.006588028);
   setHistdata22285770315->SetEntries(368831);
   setHistdata22285770315->SetFillStyle(0);
   setHistdata22285770315->SetMarkerStyle(20);
   setHistdata22285770315->SetMarkerSize(1.15);
   setHistdata22285770315->GetXaxis()->SetNdivisions(1005);
   setHistdata22285770315->GetXaxis()->SetLabelFont(43);
   setHistdata22285770315->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata22285770315->GetXaxis()->SetLabelSize(32);
   setHistdata22285770315->GetXaxis()->SetTitleSize(35);
   setHistdata22285770315->GetXaxis()->SetTickLength(0.05);
   setHistdata22285770315->GetXaxis()->SetTitleOffset(1.135);
   setHistdata22285770315->GetXaxis()->SetTitleFont(43);
   setHistdata22285770315->GetYaxis()->SetNdivisions(506);
   setHistdata22285770315->GetYaxis()->SetLabelFont(43);
   setHistdata22285770315->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata22285770315->GetYaxis()->SetLabelSize(32);
   setHistdata22285770315->GetYaxis()->SetTitleSize(35);
   setHistdata22285770315->GetYaxis()->SetTitleOffset(1.32);
   setHistdata22285770315->GetYaxis()->SetTitleFont(43);
   setHistdata22285770315->GetZaxis()->SetLabelFont(43);
   setHistdata22285770315->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata22285770315->GetZaxis()->SetLabelSize(32);
   setHistdata22285770315->GetZaxis()->SetTitleSize(35);
   setHistdata22285770315->GetZaxis()->SetTitleOffset(1.32);
   setHistdata22285770315->GetZaxis()->SetTitleFont(43);
   setHistdata22285770315->Draw("PESame");
   
   TF1 *axisLine463492 = new TF1("axisLine46349","1",-1,1);
   axisLine463492->SetFillColor(19);
   axisLine463492->SetFillStyle(0);
   axisLine463492->SetMarkerStyle(20);
   axisLine463492->SetLineWidth(1);
   axisLine463492->GetXaxis()->SetNdivisions(1005);
   axisLine463492->GetXaxis()->SetLabelFont(43);
   axisLine463492->GetXaxis()->SetLabelOffset(0.0105);
   axisLine463492->GetXaxis()->SetLabelSize(32);
   axisLine463492->GetXaxis()->SetTitleSize(35);
   axisLine463492->GetXaxis()->SetTickLength(0.05);
   axisLine463492->GetXaxis()->SetTitleOffset(1.135);
   axisLine463492->GetXaxis()->SetTitleFont(43);
   axisLine463492->GetYaxis()->SetNdivisions(506);
   axisLine463492->GetYaxis()->SetLabelFont(43);
   axisLine463492->GetYaxis()->SetLabelOffset(0.0087);
   axisLine463492->GetYaxis()->SetLabelSize(32);
   axisLine463492->GetYaxis()->SetTitleSize(35);
   axisLine463492->GetYaxis()->SetTitleOffset(1.32);
   axisLine463492->GetYaxis()->SetTitleFont(43);
   axisLine463492->Draw("SameL");
   
   TH2F *axisRes34702_copy16 = new TH2F("axisRes34702_copy16","",50,-1,1,50,0.6,1.4);
   axisRes34702_copy16->SetDirectory(0);
   axisRes34702_copy16->SetMarkerStyle(20);
   axisRes34702_copy16->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes34702_copy16->GetXaxis()->SetNdivisions(1005);
   axisRes34702_copy16->GetXaxis()->SetLabelFont(43);
   axisRes34702_copy16->GetXaxis()->SetLabelOffset(0.0105);
   axisRes34702_copy16->GetXaxis()->SetLabelSize(32);
   axisRes34702_copy16->GetXaxis()->SetTitleSize(35);
   axisRes34702_copy16->GetXaxis()->SetTickLength(0.04166667);
   axisRes34702_copy16->GetXaxis()->SetTitleOffset(1.135);
   axisRes34702_copy16->GetXaxis()->SetTitleFont(43);
   axisRes34702_copy16->GetYaxis()->SetTitle("Data/MC");
   axisRes34702_copy16->GetYaxis()->SetNdivisions(406);
   axisRes34702_copy16->GetYaxis()->SetLabelFont(43);
   axisRes34702_copy16->GetYaxis()->SetLabelOffset(0.0087);
   axisRes34702_copy16->GetYaxis()->SetLabelSize(32);
   axisRes34702_copy16->GetYaxis()->SetTitleSize(35);
   axisRes34702_copy16->GetYaxis()->SetTickLength(0.07142857);
   axisRes34702_copy16->GetYaxis()->SetTitleOffset(1.32);
   axisRes34702_copy16->GetYaxis()->SetTitleFont(43);
   axisRes34702_copy16->GetZaxis()->SetLabelFont(43);
   axisRes34702_copy16->GetZaxis()->SetLabelOffset(0.0087);
   axisRes34702_copy16->GetZaxis()->SetLabelSize(32);
   axisRes34702_copy16->GetZaxis()->SetTitleSize(35);
   axisRes34702_copy16->GetZaxis()->SetTitleOffset(1.32);
   axisRes34702_copy16->GetZaxis()->SetTitleFont(43);
   axisRes34702_copy16->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_1->Modified();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->cd();
  
// ------------>Primitives in pad: cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2
   TPad *cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2 = new TPad("cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2", "",0,0,1,1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->Draw();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->cd();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->Range(-1.466667,-37948.19,1.866667,70475.22);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFillStyle(4000);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetTickx(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetTicky(1);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetLeftMargin(0.14);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetRightMargin(0.26);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetTopMargin(0.08);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetBottomMargin(0.35);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->SetFrameBorderMode(0);
   
   TH2F *axis7619417 = new TH2F("axis7619417","",50,-1,1,50,0,61801.34);
   axis7619417->SetMarkerStyle(20);
   axis7619417->GetXaxis()->SetNdivisions(1005);
   axis7619417->GetXaxis()->SetLabelFont(43);
   axis7619417->GetXaxis()->SetLabelOffset(0.0105);
   axis7619417->GetXaxis()->SetLabelSize(0);
   axis7619417->GetXaxis()->SetTitleSize(35);
   axis7619417->GetXaxis()->SetTickLength(0.025);
   axis7619417->GetXaxis()->SetTitleOffset(1.135);
   axis7619417->GetXaxis()->SetTitleFont(43);
   axis7619417->GetYaxis()->SetTitle("Events / bin");
   axis7619417->GetYaxis()->SetNdivisions(506);
   axis7619417->GetYaxis()->SetLabelFont(43);
   axis7619417->GetYaxis()->SetLabelOffset(0.0087);
   axis7619417->GetYaxis()->SetLabelSize(32);
   axis7619417->GetYaxis()->SetTitleSize(35);
   axis7619417->GetYaxis()->SetTickLength(0.02631579);
   axis7619417->GetYaxis()->SetTitleOffset(1.32);
   axis7619417->GetYaxis()->SetTitleFont(43);
   axis7619417->GetZaxis()->SetLabelFont(43);
   axis7619417->GetZaxis()->SetLabelOffset(0.0087);
   axis7619417->GetZaxis()->SetLabelSize(32);
   axis7619417->GetZaxis()->SetTitleSize(35);
   axis7619417->GetZaxis()->SetTitleOffset(1.32);
   axis7619417->GetZaxis()->SetTitleFont(43);
   axis7619417->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis12[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",26, xAxis12);
   _stack_1_stack_2->SetMinimum(0);
   _stack_1_stack_2->SetMaximum(45378.61);
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
   
   Double_t xAxis13[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttChannel6541318 = new TH1F("setHisttChannel6541318","",26, xAxis13);
   setHisttChannel6541318->SetBinContent(1,166.7813);
   setHisttChannel6541318->SetBinContent(2,513.8659);
   setHisttChannel6541318->SetBinContent(3,694.1038);
   setHisttChannel6541318->SetBinContent(4,845.4304);
   setHisttChannel6541318->SetBinContent(5,986.4926);
   setHisttChannel6541318->SetBinContent(6,1171.448);
   setHisttChannel6541318->SetBinContent(7,1392.979);
   setHisttChannel6541318->SetBinContent(8,1530.1);
   setHisttChannel6541318->SetBinContent(9,1647.419);
   setHisttChannel6541318->SetBinContent(10,1822.821);
   setHisttChannel6541318->SetBinContent(11,1904.221);
   setHisttChannel6541318->SetBinContent(12,2049.892);
   setHisttChannel6541318->SetBinContent(13,2195.51);
   setHisttChannel6541318->SetBinContent(14,2419.3);
   setHisttChannel6541318->SetBinContent(15,2536.287);
   setHisttChannel6541318->SetBinContent(16,2789.841);
   setHisttChannel6541318->SetBinContent(17,2933.844);
   setHisttChannel6541318->SetBinContent(18,3150.398);
   setHisttChannel6541318->SetBinContent(19,3205.685);
   setHisttChannel6541318->SetBinContent(20,3395.204);
   setHisttChannel6541318->SetBinContent(21,3565.841);
   setHisttChannel6541318->SetBinContent(22,3892.968);
   setHisttChannel6541318->SetBinContent(23,4384.112);
   setHisttChannel6541318->SetBinContent(24,5003.39);
   setHisttChannel6541318->SetBinContent(25,5160.137);
   setHisttChannel6541318->SetBinContent(26,1334.749);
   setHisttChannel6541318->SetBinError(1,3.513021);
   setHisttChannel6541318->SetBinError(2,6.134096);
   setHisttChannel6541318->SetBinError(3,7.111619);
   setHisttChannel6541318->SetBinError(4,7.839998);
   setHisttChannel6541318->SetBinError(5,8.457421);
   setHisttChannel6541318->SetBinError(6,9.20928);
   setHisttChannel6541318->SetBinError(7,10.03293);
   setHisttChannel6541318->SetBinError(8,10.50573);
   setHisttChannel6541318->SetBinError(9,10.88296);
   setHisttChannel6541318->SetBinError(10,11.44387);
   setHisttChannel6541318->SetBinError(11,11.69087);
   setHisttChannel6541318->SetBinError(12,12.12035);
   setHisttChannel6541318->SetBinError(13,12.54262);
   setHisttChannel6541318->SetBinError(14,13.15964);
   setHisttChannel6541318->SetBinError(15,13.47611);
   setHisttChannel6541318->SetBinError(16,14.13075);
   setHisttChannel6541318->SetBinError(17,14.48547);
   setHisttChannel6541318->SetBinError(18,14.99919);
   setHisttChannel6541318->SetBinError(19,15.11603);
   setHisttChannel6541318->SetBinError(20,15.55209);
   setHisttChannel6541318->SetBinError(21,15.92721);
   setHisttChannel6541318->SetBinError(22,16.64749);
   setHisttChannel6541318->SetBinError(23,17.66519);
   setHisttChannel6541318->SetBinError(24,18.86532);
   setHisttChannel6541318->SetBinError(25,19.16507);
   setHisttChannel6541318->SetBinError(26,9.749561);
   setHisttChannel6541318->SetEntries(908001);
   setHisttChannel6541318->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel6541318->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel6541318->SetLineColor(ci);
   setHisttChannel6541318->SetLineWidth(2);
   setHisttChannel6541318->SetMarkerStyle(20);
   setHisttChannel6541318->GetXaxis()->SetNdivisions(1005);
   setHisttChannel6541318->GetXaxis()->SetLabelFont(43);
   setHisttChannel6541318->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel6541318->GetXaxis()->SetLabelSize(32);
   setHisttChannel6541318->GetXaxis()->SetTitleSize(35);
   setHisttChannel6541318->GetXaxis()->SetTickLength(0.05);
   setHisttChannel6541318->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel6541318->GetXaxis()->SetTitleFont(43);
   setHisttChannel6541318->GetYaxis()->SetNdivisions(506);
   setHisttChannel6541318->GetYaxis()->SetLabelFont(43);
   setHisttChannel6541318->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel6541318->GetYaxis()->SetLabelSize(32);
   setHisttChannel6541318->GetYaxis()->SetTitleSize(35);
   setHisttChannel6541318->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel6541318->GetYaxis()->SetTitleFont(43);
   setHisttChannel6541318->GetZaxis()->SetLabelFont(43);
   setHisttChannel6541318->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel6541318->GetZaxis()->SetLabelSize(32);
   setHisttChannel6541318->GetZaxis()->SetTitleSize(35);
   setHisttChannel6541318->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel6541318->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel65413,"HIST F");
   Double_t xAxis14[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttWChannel3034119 = new TH1F("setHisttWChannel3034119","",26, xAxis14);
   setHisttWChannel3034119->SetBinContent(1,1054.858);
   setHisttWChannel3034119->SetBinContent(2,2868.545);
   setHisttWChannel3034119->SetBinContent(3,2014.624);
   setHisttWChannel3034119->SetBinContent(4,1649.908);
   setHisttWChannel3034119->SetBinContent(5,1545.69);
   setHisttWChannel3034119->SetBinContent(6,1553.943);
   setHisttWChannel3034119->SetBinContent(7,1525.906);
   setHisttWChannel3034119->SetBinContent(8,1480.532);
   setHisttWChannel3034119->SetBinContent(9,1450.397);
   setHisttWChannel3034119->SetBinContent(10,1421.146);
   setHisttWChannel3034119->SetBinContent(11,1362.014);
   setHisttWChannel3034119->SetBinContent(12,1280.078);
   setHisttWChannel3034119->SetBinContent(13,1257.324);
   setHisttWChannel3034119->SetBinContent(14,1242.074);
   setHisttWChannel3034119->SetBinContent(15,1126.888);
   setHisttWChannel3034119->SetBinContent(16,1058.044);
   setHisttWChannel3034119->SetBinContent(17,985.4576);
   setHisttWChannel3034119->SetBinContent(18,839.3281);
   setHisttWChannel3034119->SetBinContent(19,651.4031);
   setHisttWChannel3034119->SetBinContent(20,514.3024);
   setHisttWChannel3034119->SetBinContent(21,428.0381);
   setHisttWChannel3034119->SetBinContent(22,344.5699);
   setHisttWChannel3034119->SetBinContent(23,276.5115);
   setHisttWChannel3034119->SetBinContent(24,191.8205);
   setHisttWChannel3034119->SetBinContent(25,133.7785);
   setHisttWChannel3034119->SetBinContent(26,21.09744);
   setHisttWChannel3034119->SetBinError(1,13.76894);
   setHisttWChannel3034119->SetBinError(2,22.76891);
   setHisttWChannel3034119->SetBinError(3,19.06482);
   setHisttWChannel3034119->SetBinError(4,17.25256);
   setHisttWChannel3034119->SetBinError(5,16.6433);
   setHisttWChannel3034119->SetBinError(6,16.66516);
   setHisttWChannel3034119->SetBinError(7,16.52097);
   setHisttWChannel3034119->SetBinError(8,16.29398);
   setHisttWChannel3034119->SetBinError(9,16.10666);
   setHisttWChannel3034119->SetBinError(10,15.92444);
   setHisttWChannel3034119->SetBinError(11,15.60215);
   setHisttWChannel3034119->SetBinError(12,15.11335);
   setHisttWChannel3034119->SetBinError(13,15.00588);
   setHisttWChannel3034119->SetBinError(14,14.9207);
   setHisttWChannel3034119->SetBinError(15,14.1842);
   setHisttWChannel3034119->SetBinError(16,13.75639);
   setHisttWChannel3034119->SetBinError(17,13.28372);
   setHisttWChannel3034119->SetBinError(18,12.27299);
   setHisttWChannel3034119->SetBinError(19,10.79703);
   setHisttWChannel3034119->SetBinError(20,9.605725);
   setHisttWChannel3034119->SetBinError(21,8.756709);
   setHisttWChannel3034119->SetBinError(22,7.843999);
   setHisttWChannel3034119->SetBinError(23,7.031432);
   setHisttWChannel3034119->SetBinError(24,5.831009);
   setHisttWChannel3034119->SetBinError(25,4.891114);
   setHisttWChannel3034119->SetBinError(26,1.94614);
   setHisttWChannel3034119->SetEntries(169001);
   setHisttWChannel3034119->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel3034119->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel3034119->SetLineColor(ci);
   setHisttWChannel3034119->SetLineWidth(2);
   setHisttWChannel3034119->SetMarkerStyle(20);
   setHisttWChannel3034119->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel3034119->GetXaxis()->SetLabelFont(43);
   setHisttWChannel3034119->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel3034119->GetXaxis()->SetLabelSize(32);
   setHisttWChannel3034119->GetXaxis()->SetTitleSize(35);
   setHisttWChannel3034119->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel3034119->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel3034119->GetXaxis()->SetTitleFont(43);
   setHisttWChannel3034119->GetYaxis()->SetNdivisions(506);
   setHisttWChannel3034119->GetYaxis()->SetLabelFont(43);
   setHisttWChannel3034119->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel3034119->GetYaxis()->SetLabelSize(32);
   setHisttWChannel3034119->GetYaxis()->SetTitleSize(35);
   setHisttWChannel3034119->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel3034119->GetYaxis()->SetTitleFont(43);
   setHisttWChannel3034119->GetZaxis()->SetLabelFont(43);
   setHisttWChannel3034119->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel3034119->GetZaxis()->SetLabelSize(32);
   setHisttWChannel3034119->GetZaxis()->SetTitleSize(35);
   setHisttWChannel3034119->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel3034119->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel30341,"HIST F");
   Double_t xAxis15[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistTTJets2554720 = new TH1F("setHistTTJets2554720","",26, xAxis15);
   setHistTTJets2554720->SetBinContent(1,6954.004);
   setHistTTJets2554720->SetBinContent(2,23121.93);
   setHistTTJets2554720->SetBinContent(3,17916.16);
   setHistTTJets2554720->SetBinContent(4,15077.59);
   setHistTTJets2554720->SetBinContent(5,14379.16);
   setHistTTJets2554720->SetBinContent(6,14319.96);
   setHistTTJets2554720->SetBinContent(7,14500.35);
   setHistTTJets2554720->SetBinContent(8,14067.31);
   setHistTTJets2554720->SetBinContent(9,13372.52);
   setHistTTJets2554720->SetBinContent(10,13092.19);
   setHistTTJets2554720->SetBinContent(11,12455.95);
   setHistTTJets2554720->SetBinContent(12,11888.51);
   setHistTTJets2554720->SetBinContent(13,11798.39);
   setHistTTJets2554720->SetBinContent(14,11421.71);
   setHistTTJets2554720->SetBinContent(15,10703.62);
   setHistTTJets2554720->SetBinContent(16,10087.41);
   setHistTTJets2554720->SetBinContent(17,9324.645);
   setHistTTJets2554720->SetBinContent(18,8398.479);
   setHistTTJets2554720->SetBinContent(19,6677.383);
   setHistTTJets2554720->SetBinContent(20,5597.686);
   setHistTTJets2554720->SetBinContent(21,4815.711);
   setHistTTJets2554720->SetBinContent(22,3988.241);
   setHistTTJets2554720->SetBinContent(23,3350.012);
   setHistTTJets2554720->SetBinContent(24,2511.608);
   setHistTTJets2554720->SetBinContent(25,1479.813);
   setHistTTJets2554720->SetBinContent(26,213.6671);
   setHistTTJets2554720->SetBinError(1,51.59131);
   setHistTTJets2554720->SetBinError(2,94.33398);
   setHistTTJets2554720->SetBinError(3,83.10735);
   setHistTTJets2554720->SetBinError(4,76.21935);
   setHistTTJets2554720->SetBinError(5,74.43817);
   setHistTTJets2554720->SetBinError(6,74.23976);
   setHistTTJets2554720->SetBinError(7,74.71276);
   setHistTTJets2554720->SetBinError(8,73.57714);
   setHistTTJets2554720->SetBinError(9,71.71618);
   setHistTTJets2554720->SetBinError(10,70.92788);
   setHistTTJets2554720->SetBinError(11,69.17395);
   setHistTTJets2554720->SetBinError(12,67.56312);
   setHistTTJets2554720->SetBinError(13,67.30922);
   setHistTTJets2554720->SetBinError(14,66.27644);
   setHistTTJets2554720->SetBinError(15,64.09783);
   setHistTTJets2554720->SetBinError(16,62.29382);
   setHistTTJets2554720->SetBinError(17,59.81712);
   setHistTTJets2554720->SetBinError(18,56.79543);
   setHistTTJets2554720->SetBinError(19,50.59944);
   setHistTTJets2554720->SetBinError(20,46.29118);
   setHistTTJets2554720->SetBinError(21,42.91073);
   setHistTTJets2554720->SetBinError(22,39.00962);
   setHistTTJets2554720->SetBinError(23,35.71438);
   setHistTTJets2554720->SetBinError(24,30.86262);
   setHistTTJets2554720->SetBinError(25,23.65559);
   setHistTTJets2554720->SetBinError(26,8.967099);
   setHistTTJets2554720->SetEntries(729996);
   setHistTTJets2554720->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets2554720->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets2554720->SetLineColor(ci);
   setHistTTJets2554720->SetLineWidth(2);
   setHistTTJets2554720->SetMarkerStyle(20);
   setHistTTJets2554720->GetXaxis()->SetNdivisions(1005);
   setHistTTJets2554720->GetXaxis()->SetLabelFont(43);
   setHistTTJets2554720->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets2554720->GetXaxis()->SetLabelSize(32);
   setHistTTJets2554720->GetXaxis()->SetTitleSize(35);
   setHistTTJets2554720->GetXaxis()->SetTickLength(0.05);
   setHistTTJets2554720->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets2554720->GetXaxis()->SetTitleFont(43);
   setHistTTJets2554720->GetYaxis()->SetNdivisions(506);
   setHistTTJets2554720->GetYaxis()->SetLabelFont(43);
   setHistTTJets2554720->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets2554720->GetYaxis()->SetLabelSize(32);
   setHistTTJets2554720->GetYaxis()->SetTitleSize(35);
   setHistTTJets2554720->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets2554720->GetYaxis()->SetTitleFont(43);
   setHistTTJets2554720->GetZaxis()->SetLabelFont(43);
   setHistTTJets2554720->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets2554720->GetZaxis()->SetLabelSize(32);
   setHistTTJets2554720->GetZaxis()->SetTitleSize(35);
   setHistTTJets2554720->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets2554720->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets25547,"HIST F");
   Double_t xAxis16[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexHF8648721 = new TH1F("setHistWJetsAMCexHF8648721","",26, xAxis16);
   setHistWJetsAMCexHF8648721->SetBinContent(1,5310.669);
   setHistWJetsAMCexHF8648721->SetBinContent(2,8181.623);
   setHistWJetsAMCexHF8648721->SetBinContent(3,6835.593);
   setHistWJetsAMCexHF8648721->SetBinContent(4,5412.118);
   setHistWJetsAMCexHF8648721->SetBinContent(5,4503.349);
   setHistWJetsAMCexHF8648721->SetBinContent(6,4557.158);
   setHistWJetsAMCexHF8648721->SetBinContent(7,4939.163);
   setHistWJetsAMCexHF8648721->SetBinContent(8,4554.811);
   setHistWJetsAMCexHF8648721->SetBinContent(9,4059.573);
   setHistWJetsAMCexHF8648721->SetBinContent(10,3566.516);
   setHistWJetsAMCexHF8648721->SetBinContent(11,3384.05);
   setHistWJetsAMCexHF8648721->SetBinContent(12,3025.863);
   setHistWJetsAMCexHF8648721->SetBinContent(13,3229.758);
   setHistWJetsAMCexHF8648721->SetBinContent(14,3108.455);
   setHistWJetsAMCexHF8648721->SetBinContent(15,2505.87);
   setHistWJetsAMCexHF8648721->SetBinContent(16,2326.098);
   setHistWJetsAMCexHF8648721->SetBinContent(17,2625.728);
   setHistWJetsAMCexHF8648721->SetBinContent(18,2083.471);
   setHistWJetsAMCexHF8648721->SetBinContent(19,1850.408);
   setHistWJetsAMCexHF8648721->SetBinContent(20,1318.502);
   setHistWJetsAMCexHF8648721->SetBinContent(21,1599.676);
   setHistWJetsAMCexHF8648721->SetBinContent(22,1210.369);
   setHistWJetsAMCexHF8648721->SetBinContent(23,1150.758);
   setHistWJetsAMCexHF8648721->SetBinContent(24,1041.089);
   setHistWJetsAMCexHF8648721->SetBinContent(25,598.0577);
   setHistWJetsAMCexHF8648721->SetBinContent(26,120.02);
   setHistWJetsAMCexHF8648721->SetBinError(1,372.8312);
   setHistWJetsAMCexHF8648721->SetBinError(2,447.74);
   setHistWJetsAMCexHF8648721->SetBinError(3,411.6307);
   setHistWJetsAMCexHF8648721->SetBinError(4,367.3917);
   setHistWJetsAMCexHF8648721->SetBinError(5,341.4742);
   setHistWJetsAMCexHF8648721->SetBinError(6,329.0805);
   setHistWJetsAMCexHF8648721->SetBinError(7,325.5761);
   setHistWJetsAMCexHF8648721->SetBinError(8,325.8117);
   setHistWJetsAMCexHF8648721->SetBinError(9,306.4152);
   setHistWJetsAMCexHF8648721->SetBinError(10,292.814);
   setHistWJetsAMCexHF8648721->SetBinError(11,280.2691);
   setHistWJetsAMCexHF8648721->SetBinError(12,273.4113);
   setHistWJetsAMCexHF8648721->SetBinError(13,259.1831);
   setHistWJetsAMCexHF8648721->SetBinError(14,256.81);
   setHistWJetsAMCexHF8648721->SetBinError(15,249.9782);
   setHistWJetsAMCexHF8648721->SetBinError(16,244.7624);
   setHistWJetsAMCexHF8648721->SetBinError(17,232.5468);
   setHistWJetsAMCexHF8648721->SetBinError(18,220.5294);
   setHistWJetsAMCexHF8648721->SetBinError(19,204.4579);
   setHistWJetsAMCexHF8648721->SetBinError(20,196.8755);
   setHistWJetsAMCexHF8648721->SetBinError(21,192.9399);
   setHistWJetsAMCexHF8648721->SetBinError(22,179.0986);
   setHistWJetsAMCexHF8648721->SetBinError(23,166.2222);
   setHistWJetsAMCexHF8648721->SetBinError(24,155.5487);
   setHistWJetsAMCexHF8648721->SetBinError(25,133.712);
   setHistWJetsAMCexHF8648721->SetBinError(26,48.11104);
   setHistWJetsAMCexHF8648721->SetEntries(33783);
   setHistWJetsAMCexHF8648721->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsAMCexHF8648721->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsAMCexHF8648721->SetLineColor(ci);
   setHistWJetsAMCexHF8648721->SetLineWidth(2);
   setHistWJetsAMCexHF8648721->SetMarkerStyle(20);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexHF8648721->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF8648721->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF8648721->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexHF86487,"HIST F");
   Double_t xAxis17[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexLF1407222 = new TH1F("setHistWJetsAMCexLF1407222","",26, xAxis17);
   setHistWJetsAMCexLF1407222->SetBinContent(1,2692.049);
   setHistWJetsAMCexLF1407222->SetBinContent(2,3585.516);
   setHistWJetsAMCexLF1407222->SetBinContent(3,2528.531);
   setHistWJetsAMCexLF1407222->SetBinContent(4,2236.147);
   setHistWJetsAMCexLF1407222->SetBinContent(5,1741.398);
   setHistWJetsAMCexLF1407222->SetBinContent(6,1247.868);
   setHistWJetsAMCexLF1407222->SetBinContent(7,1361.645);
   setHistWJetsAMCexLF1407222->SetBinContent(8,1510.268);
   setHistWJetsAMCexLF1407222->SetBinContent(9,1221.373);
   setHistWJetsAMCexLF1407222->SetBinContent(10,1009.286);
   setHistWJetsAMCexLF1407222->SetBinContent(11,717.8312);
   setHistWJetsAMCexLF1407222->SetBinContent(12,810.3742);
   setHistWJetsAMCexLF1407222->SetBinContent(13,845.0867);
   setHistWJetsAMCexLF1407222->SetBinContent(14,968.7288);
   setHistWJetsAMCexLF1407222->SetBinContent(15,845.6929);
   setHistWJetsAMCexLF1407222->SetBinContent(16,864.5414);
   setHistWJetsAMCexLF1407222->SetBinContent(17,727.425);
   setHistWJetsAMCexLF1407222->SetBinContent(18,702.073);
   setHistWJetsAMCexLF1407222->SetBinContent(19,691.2755);
   setHistWJetsAMCexLF1407222->SetBinContent(20,618.5133);
   setHistWJetsAMCexLF1407222->SetBinContent(21,566.6077);
   setHistWJetsAMCexLF1407222->SetBinContent(22,620.8303);
   setHistWJetsAMCexLF1407222->SetBinContent(23,333.6023);
   setHistWJetsAMCexLF1407222->SetBinContent(24,337.4338);
   setHistWJetsAMCexLF1407222->SetBinContent(25,172.1321);
   setHistWJetsAMCexLF1407222->SetBinContent(26,50.84457);
   setHistWJetsAMCexLF1407222->SetBinError(1,293.8537);
   setHistWJetsAMCexLF1407222->SetBinError(2,307.1797);
   setHistWJetsAMCexLF1407222->SetBinError(3,254.8688);
   setHistWJetsAMCexLF1407222->SetBinError(4,227.791);
   setHistWJetsAMCexLF1407222->SetBinError(5,211.0432);
   setHistWJetsAMCexLF1407222->SetBinError(6,187.3172);
   setHistWJetsAMCexLF1407222->SetBinError(7,196.9864);
   setHistWJetsAMCexLF1407222->SetBinError(8,183.4038);
   setHistWJetsAMCexLF1407222->SetBinError(9,175.2113);
   setHistWJetsAMCexLF1407222->SetBinError(10,142.678);
   setHistWJetsAMCexLF1407222->SetBinError(11,150.8169);
   setHistWJetsAMCexLF1407222->SetBinError(12,158.7005);
   setHistWJetsAMCexLF1407222->SetBinError(13,162.8769);
   setHistWJetsAMCexLF1407222->SetBinError(14,152.071);
   setHistWJetsAMCexLF1407222->SetBinError(15,141.472);
   setHistWJetsAMCexLF1407222->SetBinError(16,163.3204);
   setHistWJetsAMCexLF1407222->SetBinError(17,149.8334);
   setHistWJetsAMCexLF1407222->SetBinError(18,134.3291);
   setHistWJetsAMCexLF1407222->SetBinError(19,168.3597);
   setHistWJetsAMCexLF1407222->SetBinError(20,141.2451);
   setHistWJetsAMCexLF1407222->SetBinError(21,141.2839);
   setHistWJetsAMCexLF1407222->SetBinError(22,147.1374);
   setHistWJetsAMCexLF1407222->SetBinError(23,105.7361);
   setHistWJetsAMCexLF1407222->SetBinError(24,90.57946);
   setHistWJetsAMCexLF1407222->SetBinError(25,101.4311);
   setHistWJetsAMCexLF1407222->SetBinError(26,20.75956);
   setHistWJetsAMCexLF1407222->SetEntries(8059);
   setHistWJetsAMCexLF1407222->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsAMCexLF1407222->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsAMCexLF1407222->SetLineColor(ci);
   setHistWJetsAMCexLF1407222->SetLineWidth(2);
   setHistWJetsAMCexLF1407222->SetMarkerStyle(20);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexLF1407222->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF1407222->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF1407222->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexLF14072,"HIST F");
   Double_t xAxis18[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistDY3312823 = new TH1F("setHistDY3312823","",26, xAxis18);
   setHistDY3312823->SetBinContent(1,656.5066);
   setHistDY3312823->SetBinContent(2,833.1636);
   setHistDY3312823->SetBinContent(3,865.6664);
   setHistDY3312823->SetBinContent(4,928.7365);
   setHistDY3312823->SetBinContent(5,948.3634);
   setHistDY3312823->SetBinContent(6,935.3087);
   setHistDY3312823->SetBinContent(7,853.4806);
   setHistDY3312823->SetBinContent(8,811.4297);
   setHistDY3312823->SetBinContent(9,874.7253);
   setHistDY3312823->SetBinContent(10,836.1847);
   setHistDY3312823->SetBinContent(11,604.7542);
   setHistDY3312823->SetBinContent(12,622.5156);
   setHistDY3312823->SetBinContent(13,622.1437);
   setHistDY3312823->SetBinContent(14,554.8894);
   setHistDY3312823->SetBinContent(15,540.2553);
   setHistDY3312823->SetBinContent(16,461.6927);
   setHistDY3312823->SetBinContent(17,491.0572);
   setHistDY3312823->SetBinContent(18,479.2863);
   setHistDY3312823->SetBinContent(19,371.3642);
   setHistDY3312823->SetBinContent(20,313.8777);
   setHistDY3312823->SetBinContent(21,290.4738);
   setHistDY3312823->SetBinContent(22,225.711);
   setHistDY3312823->SetBinContent(23,192.8497);
   setHistDY3312823->SetBinContent(24,193.4328);
   setHistDY3312823->SetBinContent(25,78.2904);
   setHistDY3312823->SetBinContent(26,30.25679);
   setHistDY3312823->SetBinError(1,59.89968);
   setHistDY3312823->SetBinError(2,57.35698);
   setHistDY3312823->SetBinError(3,67.50345);
   setHistDY3312823->SetBinError(4,77.7333);
   setHistDY3312823->SetBinError(5,74.77172);
   setHistDY3312823->SetBinError(6,74.66817);
   setHistDY3312823->SetBinError(7,68.90285);
   setHistDY3312823->SetBinError(8,71.7451);
   setHistDY3312823->SetBinError(9,74.91629);
   setHistDY3312823->SetBinError(10,74.98125);
   setHistDY3312823->SetBinError(11,58.94801);
   setHistDY3312823->SetBinError(12,58.10985);
   setHistDY3312823->SetBinError(13,59.41108);
   setHistDY3312823->SetBinError(14,53.96575);
   setHistDY3312823->SetBinError(15,55.24989);
   setHistDY3312823->SetBinError(16,48.94121);
   setHistDY3312823->SetBinError(17,65.12256);
   setHistDY3312823->SetBinError(18,58.85859);
   setHistDY3312823->SetBinError(19,48.5863);
   setHistDY3312823->SetBinError(20,48.67815);
   setHistDY3312823->SetBinError(21,40.3258);
   setHistDY3312823->SetBinError(22,29.17673);
   setHistDY3312823->SetBinError(23,34.33688);
   setHistDY3312823->SetBinError(24,35.93872);
   setHistDY3312823->SetBinError(25,23.91312);
   setHistDY3312823->SetBinError(26,10.70183);
   setHistDY3312823->SetEntries(3688);
   setHistDY3312823->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDY3312823->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDY3312823->SetLineColor(ci);
   setHistDY3312823->SetLineWidth(2);
   setHistDY3312823->SetMarkerStyle(20);
   setHistDY3312823->GetXaxis()->SetNdivisions(1005);
   setHistDY3312823->GetXaxis()->SetLabelFont(43);
   setHistDY3312823->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY3312823->GetXaxis()->SetLabelSize(32);
   setHistDY3312823->GetXaxis()->SetTitleSize(35);
   setHistDY3312823->GetXaxis()->SetTickLength(0.05);
   setHistDY3312823->GetXaxis()->SetTitleOffset(1.135);
   setHistDY3312823->GetXaxis()->SetTitleFont(43);
   setHistDY3312823->GetYaxis()->SetNdivisions(506);
   setHistDY3312823->GetYaxis()->SetLabelFont(43);
   setHistDY3312823->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY3312823->GetYaxis()->SetLabelSize(32);
   setHistDY3312823->GetYaxis()->SetTitleSize(35);
   setHistDY3312823->GetYaxis()->SetTitleOffset(1.32);
   setHistDY3312823->GetYaxis()->SetTitleFont(43);
   setHistDY3312823->GetZaxis()->SetLabelFont(43);
   setHistDY3312823->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY3312823->GetZaxis()->SetLabelSize(32);
   setHistDY3312823->GetZaxis()->SetTitleSize(35);
   setHistDY3312823->GetZaxis()->SetTitleOffset(1.32);
   setHistDY3312823->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY33128,"HIST F");
   Double_t xAxis19[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistQCD_DD2512424 = new TH1F("setHistQCD_DD2512424","",26, xAxis19);
   setHistQCD_DD2512424->SetBinContent(1,2653.564);
   setHistQCD_DD2512424->SetBinContent(2,4113.083);
   setHistQCD_DD2512424->SetBinContent(3,4736.047);
   setHistQCD_DD2512424->SetBinContent(4,5451.898);
   setHistQCD_DD2512424->SetBinContent(5,5300.236);
   setHistQCD_DD2512424->SetBinContent(6,5035.318);
   setHistQCD_DD2512424->SetBinContent(7,4735.7);
   setHistQCD_DD2512424->SetBinContent(8,4155.11);
   setHistQCD_DD2512424->SetBinContent(9,3844.664);
   setHistQCD_DD2512424->SetBinContent(10,3551.056);
   setHistQCD_DD2512424->SetBinContent(11,3309.59);
   setHistQCD_DD2512424->SetBinContent(12,3159.156);
   setHistQCD_DD2512424->SetBinContent(13,3061.937);
   setHistQCD_DD2512424->SetBinContent(14,2928.024);
   setHistQCD_DD2512424->SetBinContent(15,2696.995);
   setHistQCD_DD2512424->SetBinContent(16,2462.598);
   setHistQCD_DD2512424->SetBinContent(17,2276.405);
   setHistQCD_DD2512424->SetBinContent(18,2161.328);
   setHistQCD_DD2512424->SetBinContent(19,1833.954);
   setHistQCD_DD2512424->SetBinContent(20,1555.224);
   setHistQCD_DD2512424->SetBinContent(21,1259.626);
   setHistQCD_DD2512424->SetBinContent(22,1011.641);
   setHistQCD_DD2512424->SetBinContent(23,775.1495);
   setHistQCD_DD2512424->SetBinContent(24,599.9782);
   setHistQCD_DD2512424->SetBinContent(25,294.7804);
   setHistQCD_DD2512424->SetBinContent(26,28.77442);
   setHistQCD_DD2512424->SetBinError(1,36.88864);
   setHistQCD_DD2512424->SetBinError(2,41.50445);
   setHistQCD_DD2512424->SetBinError(3,45.20742);
   setHistQCD_DD2512424->SetBinError(4,44.80278);
   setHistQCD_DD2512424->SetBinError(5,45.07759);
   setHistQCD_DD2512424->SetBinError(6,44.80571);
   setHistQCD_DD2512424->SetBinError(7,43.67399);
   setHistQCD_DD2512424->SetBinError(8,42.49679);
   setHistQCD_DD2512424->SetBinError(9,43.26932);
   setHistQCD_DD2512424->SetBinError(10,41.7793);
   setHistQCD_DD2512424->SetBinError(11,40.35605);
   setHistQCD_DD2512424->SetBinError(12,36.92835);
   setHistQCD_DD2512424->SetBinError(13,35.47616);
   setHistQCD_DD2512424->SetBinError(14,34.56004);
   setHistQCD_DD2512424->SetBinError(15,33);
   setHistQCD_DD2512424->SetBinError(16,33.01079);
   setHistQCD_DD2512424->SetBinError(17,32.10661);
   setHistQCD_DD2512424->SetBinError(18,30.06188);
   setHistQCD_DD2512424->SetBinError(19,34.66308);
   setHistQCD_DD2512424->SetBinError(20,25.70911);
   setHistQCD_DD2512424->SetBinError(21,23.12243);
   setHistQCD_DD2512424->SetBinError(22,25.59622);
   setHistQCD_DD2512424->SetBinError(23,18.73077);
   setHistQCD_DD2512424->SetBinError(24,20.25934);
   setHistQCD_DD2512424->SetBinError(25,12.44687);
   setHistQCD_DD2512424->SetBinError(26,7.176028);
   setHistQCD_DD2512424->SetEntries(392016);
   setHistQCD_DD2512424->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD2512424->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD2512424->SetLineColor(ci);
   setHistQCD_DD2512424->SetLineWidth(2);
   setHistQCD_DD2512424->SetMarkerStyle(20);
   setHistQCD_DD2512424->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD2512424->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD2512424->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD2512424->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD2512424->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD2512424->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD2512424->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD2512424->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD2512424->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD2512424->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD2512424->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD2512424->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD2512424->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD2512424->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD2512424->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD2512424->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD2512424->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD2512424->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD2512424->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD2512424->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD2512424->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD25124,"HIST F");
   ->Draw("same");
   Double_t xAxis20[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata222825 = new TH1F("setHistdata222825","",26, xAxis20);
   setHistdata222825->SetBinContent(1,20474);
   setHistdata222825->SetBinContent(2,42526);
   setHistdata222825->SetBinContent(3,35521);
   setHistdata222825->SetBinContent(4,31159);
   setHistdata222825->SetBinContent(5,29621);
   setHistdata222825->SetBinContent(6,29048);
   setHistdata222825->SetBinContent(7,29071);
   setHistdata222825->SetBinContent(8,27835);
   setHistdata222825->SetBinContent(9,26733);
   setHistdata222825->SetBinContent(10,25758);
   setHistdata222825->SetBinContent(11,24367);
   setHistdata222825->SetBinContent(12,23712);
   setHistdata222825->SetBinContent(13,22980);
   setHistdata222825->SetBinError(1,143.0874);
   setHistdata222825->SetBinError(2,206.2183);
   setHistdata222825->SetBinError(3,188.4702);
   setHistdata222825->SetBinError(4,176.5191);
   setHistdata222825->SetBinError(5,172.1075);
   setHistdata222825->SetBinError(6,170.4347);
   setHistdata222825->SetBinError(7,170.5022);
   setHistdata222825->SetBinError(8,166.8382);
   setHistdata222825->SetBinError(9,163.5023);
   setHistdata222825->SetBinError(10,160.493);
   setHistdata222825->SetBinError(11,156.0993);
   setHistdata222825->SetBinError(12,153.987);
   setHistdata222825->SetBinError(13,151.5916);
   setHistdata222825->SetEntries(368805);
   setHistdata222825->SetFillStyle(0);
   setHistdata222825->SetMarkerStyle(20);
   setHistdata222825->SetMarkerSize(1.15);
   setHistdata222825->GetXaxis()->SetNdivisions(1005);
   setHistdata222825->GetXaxis()->SetLabelFont(43);
   setHistdata222825->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata222825->GetXaxis()->SetLabelSize(32);
   setHistdata222825->GetXaxis()->SetTitleSize(35);
   setHistdata222825->GetXaxis()->SetTickLength(0.05);
   setHistdata222825->GetXaxis()->SetTitleOffset(1.135);
   setHistdata222825->GetXaxis()->SetTitleFont(43);
   setHistdata222825->GetYaxis()->SetNdivisions(506);
   setHistdata222825->GetYaxis()->SetLabelFont(43);
   setHistdata222825->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata222825->GetYaxis()->SetLabelSize(32);
   setHistdata222825->GetYaxis()->SetTitleSize(35);
   setHistdata222825->GetYaxis()->SetTitleOffset(1.32);
   setHistdata222825->GetYaxis()->SetTitleFont(43);
   setHistdata222825->GetZaxis()->SetLabelFont(43);
   setHistdata222825->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata222825->GetZaxis()->SetLabelSize(32);
   setHistdata222825->GetZaxis()->SetTitleSize(35);
   setHistdata222825->GetZaxis()->SetTitleOffset(1.32);
   setHistdata222825->GetZaxis()->SetTitleFont(43);
   setHistdata222825->Draw("PESame");
   
   TH2F *axis76194_copy26 = new TH2F("axis76194_copy26","",50,-1,1,50,0,61801.34);
   axis76194_copy26->SetDirectory(0);
   axis76194_copy26->SetMarkerStyle(20);
   axis76194_copy26->GetXaxis()->SetNdivisions(1005);
   axis76194_copy26->GetXaxis()->SetLabelFont(43);
   axis76194_copy26->GetXaxis()->SetLabelOffset(0.0105);
   axis76194_copy26->GetXaxis()->SetLabelSize(0);
   axis76194_copy26->GetXaxis()->SetTitleSize(35);
   axis76194_copy26->GetXaxis()->SetTickLength(0.025);
   axis76194_copy26->GetXaxis()->SetTitleOffset(1.135);
   axis76194_copy26->GetXaxis()->SetTitleFont(43);
   axis76194_copy26->GetYaxis()->SetTitle("Events / bin");
   axis76194_copy26->GetYaxis()->SetNdivisions(506);
   axis76194_copy26->GetYaxis()->SetLabelFont(43);
   axis76194_copy26->GetYaxis()->SetLabelOffset(0.0087);
   axis76194_copy26->GetYaxis()->SetLabelSize(32);
   axis76194_copy26->GetYaxis()->SetTitleSize(35);
   axis76194_copy26->GetYaxis()->SetTickLength(0.02631579);
   axis76194_copy26->GetYaxis()->SetTitleOffset(1.32);
   axis76194_copy26->GetYaxis()->SetTitleFont(43);
   axis76194_copy26->GetZaxis()->SetLabelFont(43);
   axis76194_copy26->GetZaxis()->SetLabelOffset(0.0087);
   axis76194_copy26->GetZaxis()->SetLabelSize(32);
   axis76194_copy26->GetZaxis()->SetTitleSize(35);
   axis76194_copy26->GetZaxis()->SetTitleOffset(1.32);
   axis76194_copy26->GetZaxis()->SetTitleFont(43);
   axis76194_copy26->Draw("sameaxis");
   
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
   
   pt = new TPaveText(0.165,0.79,0.165,0.79,"brNDC");
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
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 36#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.745,0.28,0.99,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("setHistdata2228","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD25124","Multijet","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7a7a7a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistDY33128","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexLF14072","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexHF86487","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets25547","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel30341","tW","F");

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
   entry=leg->AddEntry("setHisttChannel65413","#it{t}-channel","F");

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
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431_2->Modified();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->cd();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->Modified();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->cd();
   cvmuon_2j1t_bdt_tch_qcdnone_blind26431->SetSelected(cvmuon_2j1t_bdt_tch_qcdnone_blind26431);
}
