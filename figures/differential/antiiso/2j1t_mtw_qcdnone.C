void plots_antiiso/2j1t/2j1t_mtw_qcdnone()
{
//=========Macro generated from canvas: cv2j1t_mtw_qcdnone0.527366624005/
//=========  (Sun May  7 20:34:38 2017) by ROOT version6.02/05
   TCanvas *cv2j1t_mtw_qcdnone0.527366624005 = new TCanvas("cv2j1t_mtw_qcdnone0.527366624005", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetHighLightColor(2);
   cv2j1t_mtw_qcdnone0.527366624005->Range(0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005->SetLeftMargin(0.1150442);
   cv2j1t_mtw_qcdnone0.527366624005->SetRightMargin(0.227083);
   cv2j1t_mtw_qcdnone0.527366624005->SetTopMargin(0.04002582);
   cv2j1t_mtw_qcdnone0.527366624005->SetBottomMargin(0.08064517);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameLineWidth(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cv2j1t_mtw_qcdnone0.527366624005_1
   TPad *cv2j1t_mtw_qcdnone0.527366624005_1 = new TPad("cv2j1t_mtw_qcdnone0.527366624005_1", "",0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005_1->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_1->cd();
   cv2j1t_mtw_qcdnone0.527366624005_1->Range(-46.66667,0.06666676,286.6667,3.87619);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFillStyle(4000);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetLeftMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetRightMargin(0.26);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTopMargin(0.65);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBottomMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.41475638077337 = new TH2F("axisRes0.41475638077337","",50,0,200,50,0.6,1.4);
   axisRes0.41475638077337->SetMarkerStyle(20);
   axisRes0.41475638077337->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.41475638077337->GetXaxis()->SetNdivisions(1005);
   axisRes0.41475638077337->GetXaxis()->SetLabelFont(43);
   axisRes0.41475638077337->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.41475638077337->GetXaxis()->SetLabelSize(32);
   axisRes0.41475638077337->GetXaxis()->SetTitleSize(35);
   axisRes0.41475638077337->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.41475638077337->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.41475638077337->GetXaxis()->SetTitleFont(43);
   axisRes0.41475638077337->GetYaxis()->SetTitle("Data/MC");
   axisRes0.41475638077337->GetYaxis()->SetNdivisions(406);
   axisRes0.41475638077337->GetYaxis()->SetLabelFont(43);
   axisRes0.41475638077337->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.41475638077337->GetYaxis()->SetLabelSize(32);
   axisRes0.41475638077337->GetYaxis()->SetTitleSize(35);
   axisRes0.41475638077337->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.41475638077337->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.41475638077337->GetYaxis()->SetTitleFont(43);
   axisRes0.41475638077337->GetZaxis()->SetLabelFont(43);
   axisRes0.41475638077337->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.41475638077337->GetZaxis()->SetLabelSize(32);
   axisRes0.41475638077337->GetZaxis()->SetTitleSize(35);
   axisRes0.41475638077337->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.41475638077337->GetZaxis()->SetTitleFont(43);
   axisRes0.41475638077337->Draw("AXIS");
   TBox *box = new TBox(0,0.8994569,10,1.100543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.8994569,10,1.100543);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9204483,20,1.079552);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9204483,20,1.079552);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9177005,30,1.0823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9177005,30,1.0823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.92979,40,1.07021);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.92979,40,1.07021);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9351594,50,1.064841);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9351594,50,1.064841);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9383845,60,1.061615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9383845,60,1.061615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9447382,70,1.055262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9447382,70,1.055262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9449442,80,1.055056);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9449442,80,1.055056);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9433368,90,1.056663);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9433368,90,1.056663);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9287841,100,1.071216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9287841,100,1.071216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.922723,110,1.077277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.922723,110,1.077277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.917111,120,1.082889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.917111,120,1.082889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9204277,130,1.079572);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9204277,130,1.079572);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.8482589,140,1.151741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.8482589,140,1.151741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.6942482,150,1.305752);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.6942482,150,1.305752);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.9452044,160,1.054796);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.9452044,160,1.054796);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9405462,170,1.059454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9405462,170,1.059454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.742726,180,1.257274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.742726,180,1.257274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.7157725,190,1.284227);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.7157725,190,1.284227);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9815613,200,1.018439);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9815613,200,1.018439);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis28[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata760.28815435678238 = new TH1F("setHistdata760.28815435678238","",20, xAxis28);
   setHistdata760.28815435678238->SetBinContent(1,53.25793);
   setHistdata760.28815435678238->SetBinContent(2,38.75248);
   setHistdata760.28815435678238->SetBinContent(3,30.53315);
   setHistdata760.28815435678238->SetBinContent(4,17.28854);
   setHistdata760.28815435678238->SetBinContent(5,12.05889);
   setHistdata760.28815435678238->SetBinContent(6,6.160144);
   setHistdata760.28815435678238->SetBinContent(7,2.90344);
   setHistdata760.28815435678238->SetBinContent(8,1.868832);
   setHistdata760.28815435678238->SetBinContent(9,1.468865);
   setHistdata760.28815435678238->SetBinContent(10,1.53391);
   setHistdata760.28815435678238->SetBinContent(11,1.233439);
   setHistdata760.28815435678238->SetBinContent(12,1.5493);
   setHistdata760.28815435678238->SetBinContent(13,1.063322);
   setHistdata760.28815435678238->SetBinContent(14,1.225622);
   setHistdata760.28815435678238->SetBinContent(15,2.365281);
   setHistdata760.28815435678238->SetBinContent(16,0.8538508);
   setHistdata760.28815435678238->SetBinContent(17,0.6339584);
   setHistdata760.28815435678238->SetBinContent(18,1.089765);
   setHistdata760.28815435678238->SetBinContent(19,0.2950344);
   setHistdata760.28815435678238->SetBinContent(20,0.8535663);
   setHistdata760.28815435678238->SetBinError(1,0.6232515);
   setHistdata760.28815435678238->SetBinError(2,0.4830493);
   setHistdata760.28815435678238->SetBinError(3,0.415542);
   setHistdata760.28815435678238->SetBinError(4,0.2715291);
   setHistdata760.28815435678238->SetBinError(5,0.2238893);
   setHistdata760.28815435678238->SetBinError(6,0.140953);
   setHistdata760.28815435678238->SetBinError(7,0.0852112);
   setHistdata760.28815435678238->SetBinError(8,0.06623898);
   setHistdata760.28815435678238->SetBinError(9,0.06404556);
   setHistdata760.28815435678238->SetBinError(10,0.08482544);
   setHistdata760.28815435678238->SetBinError(11,0.09781806);
   setHistdata760.28815435678238->SetBinError(12,0.1589548);
   setHistdata760.28815435678238->SetBinError(13,0.1640742);
   setHistdata760.28815435678238->SetBinError(14,0.223767);
   setHistdata760.28815435678238->SetBinError(15,0.5161467);
   setHistdata760.28815435678238->SetBinError(16,0.284617);
   setHistdata760.28815435678238->SetBinError(17,0.2835148);
   setHistdata760.28815435678238->SetBinError(18,0.3852899);
   setHistdata760.28815435678238->SetBinError(19,0.2086208);
   setHistdata760.28815435678238->SetBinError(20,0.121938);
   setHistdata760.28815435678238->SetBinError(21,3.162278);
   setHistdata760.28815435678238->SetEntries(31217);
   setHistdata760.28815435678238->SetFillStyle(0);
   setHistdata760.28815435678238->SetMarkerStyle(20);
   setHistdata760.28815435678238->SetMarkerSize(1.15);
   setHistdata760.28815435678238->GetXaxis()->SetNdivisions(1005);
   setHistdata760.28815435678238->GetXaxis()->SetLabelFont(43);
   setHistdata760.28815435678238->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata760.28815435678238->GetXaxis()->SetLabelSize(32);
   setHistdata760.28815435678238->GetXaxis()->SetTitleSize(35);
   setHistdata760.28815435678238->GetXaxis()->SetTickLength(0.05);
   setHistdata760.28815435678238->GetXaxis()->SetTitleOffset(1.135);
   setHistdata760.28815435678238->GetXaxis()->SetTitleFont(43);
   setHistdata760.28815435678238->GetYaxis()->SetNdivisions(506);
   setHistdata760.28815435678238->GetYaxis()->SetLabelFont(43);
   setHistdata760.28815435678238->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678238->GetYaxis()->SetLabelSize(32);
   setHistdata760.28815435678238->GetYaxis()->SetTitleSize(35);
   setHistdata760.28815435678238->GetYaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678238->GetYaxis()->SetTitleFont(43);
   setHistdata760.28815435678238->GetZaxis()->SetLabelFont(43);
   setHistdata760.28815435678238->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678238->GetZaxis()->SetLabelSize(32);
   setHistdata760.28815435678238->GetZaxis()->SetTitleSize(35);
   setHistdata760.28815435678238->GetZaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678238->GetZaxis()->SetTitleFont(43);
   setHistdata760.28815435678238->Draw("PESame");
   
   TF1 *axisLine0.4109448946224 = new TF1("axisLine0.410944894622","1",0,200);
   axisLine0.4109448946224->SetFillColor(19);
   axisLine0.4109448946224->SetFillStyle(0);
   axisLine0.4109448946224->SetMarkerStyle(20);
   axisLine0.4109448946224->SetLineWidth(1);
   axisLine0.4109448946224->GetXaxis()->SetNdivisions(1005);
   axisLine0.4109448946224->GetXaxis()->SetLabelFont(43);
   axisLine0.4109448946224->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.4109448946224->GetXaxis()->SetLabelSize(32);
   axisLine0.4109448946224->GetXaxis()->SetTitleSize(35);
   axisLine0.4109448946224->GetXaxis()->SetTickLength(0.05);
   axisLine0.4109448946224->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.4109448946224->GetXaxis()->SetTitleFont(43);
   axisLine0.4109448946224->GetYaxis()->SetNdivisions(506);
   axisLine0.4109448946224->GetYaxis()->SetLabelFont(43);
   axisLine0.4109448946224->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.4109448946224->GetYaxis()->SetLabelSize(32);
   axisLine0.4109448946224->GetYaxis()->SetTitleSize(35);
   axisLine0.4109448946224->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.4109448946224->GetYaxis()->SetTitleFont(43);
   axisLine0.4109448946224->Draw("SameL");
   
   TH2F *axisRes0.414756380773_copy39 = new TH2F("axisRes0.414756380773_copy39","",50,0,200,50,0.6,1.4);
   axisRes0.414756380773_copy39->SetDirectory(0);
   axisRes0.414756380773_copy39->SetMarkerStyle(20);
   axisRes0.414756380773_copy39->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.414756380773_copy39->GetXaxis()->SetNdivisions(1005);
   axisRes0.414756380773_copy39->GetXaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy39->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.414756380773_copy39->GetXaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy39->GetXaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy39->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.414756380773_copy39->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.414756380773_copy39->GetXaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy39->GetYaxis()->SetTitle("Data/MC");
   axisRes0.414756380773_copy39->GetYaxis()->SetNdivisions(406);
   axisRes0.414756380773_copy39->GetYaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy39->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.414756380773_copy39->GetYaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy39->GetYaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy39->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.414756380773_copy39->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.414756380773_copy39->GetYaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy39->GetZaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy39->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.414756380773_copy39->GetZaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy39->GetZaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy39->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.414756380773_copy39->GetZaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy39->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_1->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
  
// ------------>Primitives in pad: cv2j1t_mtw_qcdnone0.527366624005_2
   TPad *cv2j1t_mtw_qcdnone0.527366624005_2 = new TPad("cv2j1t_mtw_qcdnone0.527366624005_2", "",0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005_2->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_2->cd();
   cv2j1t_mtw_qcdnone0.527366624005_2->Range(-46.66667,-6277.158,286.6667,11657.58);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFillStyle(4000);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetLeftMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetRightMargin(0.26);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTopMargin(0.08);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBottomMargin(0.35);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameBorderMode(0);
   
   TH2F *axis0.098983541046640 = new TH2F("axis0.098983541046640","",50,0,200,50,0,10222.8);
   axis0.098983541046640->SetMarkerStyle(20);
   axis0.098983541046640->GetXaxis()->SetNdivisions(1005);
   axis0.098983541046640->GetXaxis()->SetLabelFont(43);
   axis0.098983541046640->GetXaxis()->SetLabelOffset(0.0105);
   axis0.098983541046640->GetXaxis()->SetLabelSize(0);
   axis0.098983541046640->GetXaxis()->SetTitleSize(35);
   axis0.098983541046640->GetXaxis()->SetTickLength(0.025);
   axis0.098983541046640->GetXaxis()->SetTitleOffset(1.135);
   axis0.098983541046640->GetXaxis()->SetTitleFont(43);
   axis0.098983541046640->GetYaxis()->SetTitle("Events / bin");
   axis0.098983541046640->GetYaxis()->SetNdivisions(506);
   axis0.098983541046640->GetYaxis()->SetLabelFont(43);
   axis0.098983541046640->GetYaxis()->SetLabelOffset(0.0087);
   axis0.098983541046640->GetYaxis()->SetLabelSize(32);
   axis0.098983541046640->GetYaxis()->SetTitleSize(35);
   axis0.098983541046640->GetYaxis()->SetTickLength(0.02631579);
   axis0.098983541046640->GetYaxis()->SetTitleOffset(1.32);
   axis0.098983541046640->GetYaxis()->SetTitleFont(43);
   axis0.098983541046640->GetZaxis()->SetLabelFont(43);
   axis0.098983541046640->GetZaxis()->SetLabelOffset(0.0087);
   axis0.098983541046640->GetZaxis()->SetLabelSize(32);
   axis0.098983541046640->GetZaxis()->SetTitleSize(35);
   axis0.098983541046640->GetZaxis()->SetTitleOffset(1.32);
   axis0.098983541046640->GetZaxis()->SetTitleFont(43);
   axis0.098983541046640->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis29[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *_stack_3_stack_4 = new TH1F("_stack_3_stack_4","",20, xAxis29);
   _stack_3_stack_4->SetMinimum(-10.64599);
   _stack_3_stack_4->SetMaximum(447.2313);
   _stack_3_stack_4->SetDirectory(0);
   _stack_3_stack_4->SetStats(0);
   _stack_3_stack_4->SetMarkerStyle(20);
   _stack_3_stack_4->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W)");
   _stack_3_stack_4->GetXaxis()->SetNdivisions(1005);
   _stack_3_stack_4->GetXaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetXaxis()->SetLabelOffset(0.0105);
   _stack_3_stack_4->GetXaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetXaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetXaxis()->SetTickLength(0.05);
   _stack_3_stack_4->GetXaxis()->SetTitleOffset(1.135);
   _stack_3_stack_4->GetXaxis()->SetTitleFont(43);
   _stack_3_stack_4->GetYaxis()->SetTitle("Events");
   _stack_3_stack_4->GetYaxis()->SetNdivisions(506);
   _stack_3_stack_4->GetYaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetYaxis()->SetLabelOffset(0.0087);
   _stack_3_stack_4->GetYaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetYaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetYaxis()->SetTitleOffset(1.32);
   _stack_3_stack_4->GetYaxis()->SetTitleFont(43);
   _stack_3_stack_4->GetZaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetZaxis()->SetLabelOffset(0.0087);
   _stack_3_stack_4->GetZaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetZaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetZaxis()->SetTitleOffset(1.32);
   _stack_3_stack_4->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_3_stack_4);
   
   Double_t xAxis30[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttChannel0.53456759249141 = new TH1F("setHisttChannel0.53456759249141","",20, xAxis30);
   setHisttChannel0.53456759249141->SetBinContent(1,8.087836);
   setHisttChannel0.53456759249141->SetBinContent(2,11.01016);
   setHisttChannel0.53456759249141->SetBinContent(3,13.56988);
   setHisttChannel0.53456759249141->SetBinContent(4,16.28394);
   setHisttChannel0.53456759249141->SetBinContent(5,21.41468);
   setHisttChannel0.53456759249141->SetBinContent(6,29.72439);
   setHisttChannel0.53456759249141->SetBinContent(7,35.81997);
   setHisttChannel0.53456759249141->SetBinContent(8,46.84268);
   setHisttChannel0.53456759249141->SetBinContent(9,32.08596);
   setHisttChannel0.53456759249141->SetBinContent(10,20.32766);
   setHisttChannel0.53456759249141->SetBinContent(11,7.323114);
   setHisttChannel0.53456759249141->SetBinContent(12,2.974015);
   setHisttChannel0.53456759249141->SetBinContent(13,0.9108415);
   setHisttChannel0.53456759249141->SetBinContent(14,0.5587255);
   setHisttChannel0.53456759249141->SetBinContent(15,-0.1650749);
   setHisttChannel0.53456759249141->SetBinContent(16,0.21705);
   setHisttChannel0.53456759249141->SetBinContent(17,0.03483018);
   setHisttChannel0.53456759249141->SetBinContent(18,0.03371138);
   setHisttChannel0.53456759249141->SetBinContent(19,0.0367455);
   setHisttChannel0.53456759249141->SetBinContent(20,0.06648155);
   setHisttChannel0.53456759249141->SetBinError(1,1.260114);
   setHisttChannel0.53456759249141->SetBinError(2,1.311123);
   setHisttChannel0.53456759249141->SetBinError(3,1.447195);
   setHisttChannel0.53456759249141->SetBinError(4,1.661619);
   setHisttChannel0.53456759249141->SetBinError(5,1.882175);
   setHisttChannel0.53456759249141->SetBinError(6,2.225205);
   setHisttChannel0.53456759249141->SetBinError(7,2.529589);
   setHisttChannel0.53456759249141->SetBinError(8,2.731693);
   setHisttChannel0.53456759249141->SetBinError(9,2.446505);
   setHisttChannel0.53456759249141->SetBinError(10,1.78247);
   setHisttChannel0.53456759249141->SetBinError(11,1.105185);
   setHisttChannel0.53456759249141->SetBinError(12,0.7018241);
   setHisttChannel0.53456759249141->SetBinError(13,0.4008958);
   setHisttChannel0.53456759249141->SetBinError(14,0.2621036);
   setHisttChannel0.53456759249141->SetBinError(15,0.1554383);
   setHisttChannel0.53456759249141->SetBinError(16,0.1411192);
   setHisttChannel0.53456759249141->SetBinError(17,0.07031754);
   setHisttChannel0.53456759249141->SetBinError(18,0.03246314);
   setHisttChannel0.53456759249141->SetBinError(19,0.09765945);
   setHisttChannel0.53456759249141->SetBinError(20,0.06096686);
   setHisttChannel0.53456759249141->SetBinError(21,0.07312036);
   setHisttChannel0.53456759249141->SetEntries(38475);
   setHisttChannel0.53456759249141->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.53456759249141->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.53456759249141->SetLineColor(ci);
   setHisttChannel0.53456759249141->SetLineWidth(2);
   setHisttChannel0.53456759249141->SetMarkerStyle(20);
   setHisttChannel0.53456759249141->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.53456759249141->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249141->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.53456759249141->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249141->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249141->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.53456759249141->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.53456759249141->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.53456759249141->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.53456759249141->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249141->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.53456759249141->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249141->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249141->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.53456759249141->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.53456759249141->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249141->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.53456759249141->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249141->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249141->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.53456759249141->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.534567592491,"HIST F");
   Double_t xAxis31[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttWChannel0.030302060317942 = new TH1F("setHisttWChannel0.030302060317942","",20, xAxis31);
   setHisttWChannel0.030302060317942->SetBinContent(1,7.016223);
   setHisttWChannel0.030302060317942->SetBinContent(2,9.796518);
   setHisttWChannel0.030302060317942->SetBinContent(3,8.363532);
   setHisttWChannel0.030302060317942->SetBinContent(4,9.596544);
   setHisttWChannel0.030302060317942->SetBinContent(5,12.8193);
   setHisttWChannel0.030302060317942->SetBinContent(6,17.27636);
   setHisttWChannel0.030302060317942->SetBinContent(7,22.53098);
   setHisttWChannel0.030302060317942->SetBinContent(8,25.23438);
   setHisttWChannel0.030302060317942->SetBinContent(9,19.91965);
   setHisttWChannel0.030302060317942->SetBinContent(10,10.85109);
   setHisttWChannel0.030302060317942->SetBinContent(11,5.800218);
   setHisttWChannel0.030302060317942->SetBinContent(12,3.276957);
   setHisttWChannel0.030302060317942->SetBinContent(13,1.998522);
   setHisttWChannel0.030302060317942->SetBinContent(14,0.9188901);
   setHisttWChannel0.030302060317942->SetBinContent(15,0.7643659);
   setHisttWChannel0.030302060317942->SetBinContent(16,0.4214657);
   setHisttWChannel0.030302060317942->SetBinContent(18,0.1120388);
   setHisttWChannel0.030302060317942->SetBinContent(19,0.2217521);
   setHisttWChannel0.030302060317942->SetBinContent(20,1.152352);
   setHisttWChannel0.030302060317942->SetBinError(1,0.86959);
   setHisttWChannel0.030302060317942->SetBinError(2,1.053812);
   setHisttWChannel0.030302060317942->SetBinError(3,0.9651265);
   setHisttWChannel0.030302060317942->SetBinError(4,1.017937);
   setHisttWChannel0.030302060317942->SetBinError(5,1.197316);
   setHisttWChannel0.030302060317942->SetBinError(6,1.374347);
   setHisttWChannel0.030302060317942->SetBinError(7,1.58041);
   setHisttWChannel0.030302060317942->SetBinError(8,1.665666);
   setHisttWChannel0.030302060317942->SetBinError(9,1.482243);
   setHisttWChannel0.030302060317942->SetBinError(10,1.079819);
   setHisttWChannel0.030302060317942->SetBinError(11,0.7833057);
   setHisttWChannel0.030302060317942->SetBinError(12,0.6040863);
   setHisttWChannel0.030302060317942->SetBinError(13,0.4639043);
   setHisttWChannel0.030302060317942->SetBinError(14,0.3260544);
   setHisttWChannel0.030302060317942->SetBinError(15,0.292893);
   setHisttWChannel0.030302060317942->SetBinError(16,0.2140169);
   setHisttWChannel0.030302060317942->SetBinError(18,0.1120388);
   setHisttWChannel0.030302060317942->SetBinError(19,0.1769596);
   setHisttWChannel0.030302060317942->SetBinError(20,0.1071843);
   setHisttWChannel0.030302060317942->SetBinError(21,0.3482839);
   setHisttWChannel0.030302060317942->SetEntries(1599);
   setHisttWChannel0.030302060317942->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel0.030302060317942->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel0.030302060317942->SetLineColor(ci);
   setHisttWChannel0.030302060317942->SetLineWidth(2);
   setHisttWChannel0.030302060317942->SetMarkerStyle(20);
   setHisttWChannel0.030302060317942->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel0.030302060317942->GetXaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317942->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel0.030302060317942->GetXaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317942->GetXaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317942->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel0.030302060317942->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel0.030302060317942->GetXaxis()->SetTitleFont(43);
   setHisttWChannel0.030302060317942->GetYaxis()->SetNdivisions(506);
   setHisttWChannel0.030302060317942->GetYaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317942->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.030302060317942->GetYaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317942->GetYaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317942->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.030302060317942->GetYaxis()->SetTitleFont(43);
   setHisttWChannel0.030302060317942->GetZaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317942->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.030302060317942->GetZaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317942->GetZaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317942->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.030302060317942->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel0.0303020603179,"HIST F");
   Double_t xAxis32[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistTTJets0.023118414643743 = new TH1F("setHistTTJets0.023118414643743","",20, xAxis32);
   setHistTTJets0.023118414643743->SetBinContent(1,94.48471);
   setHistTTJets0.023118414643743->SetBinContent(2,99.66187);
   setHistTTJets0.023118414643743->SetBinContent(3,111.7288);
   setHistTTJets0.023118414643743->SetBinContent(4,133.7336);
   setHistTTJets0.023118414643743->SetBinContent(5,163.2077);
   setHistTTJets0.023118414643743->SetBinContent(6,201.0842);
   setHistTTJets0.023118414643743->SetBinContent(7,247.9781);
   setHistTTJets0.023118414643743->SetBinContent(8,270.1137);
   setHistTTJets0.023118414643743->SetBinContent(9,228.3596);
   setHistTTJets0.023118414643743->SetBinContent(10,147.0526);
   setHistTTJets0.023118414643743->SetBinContent(11,86.16969);
   setHistTTJets0.023118414643743->SetBinContent(12,50.26747);
   setHistTTJets0.023118414643743->SetBinContent(13,32.55662);
   setHistTTJets0.023118414643743->SetBinContent(14,21.2656);
   setHistTTJets0.023118414643743->SetBinContent(15,13.22168);
   setHistTTJets0.023118414643743->SetBinContent(16,9.901967);
   setHistTTJets0.023118414643743->SetBinContent(17,7.852123);
   setHistTTJets0.023118414643743->SetBinContent(18,5.348958);
   setHistTTJets0.023118414643743->SetBinContent(19,4.638088);
   setHistTTJets0.023118414643743->SetBinContent(20,15.18294);
   setHistTTJets0.023118414643743->SetBinError(1,1.595302);
   setHistTTJets0.023118414643743->SetBinError(2,1.633442);
   setHistTTJets0.023118414643743->SetBinError(3,1.733001);
   setHistTTJets0.023118414643743->SetBinError(4,1.893718);
   setHistTTJets0.023118414643743->SetBinError(5,2.09703);
   setHistTTJets0.023118414643743->SetBinError(6,2.328179);
   setHistTTJets0.023118414643743->SetBinError(7,2.588263);
   setHistTTJets0.023118414643743->SetBinError(8,2.699549);
   setHistTTJets0.023118414643743->SetBinError(9,2.479968);
   setHistTTJets0.023118414643743->SetBinError(10,1.991723);
   setHistTTJets0.023118414643743->SetBinError(11,1.523802);
   setHistTTJets0.023118414643743->SetBinError(12,1.162989);
   setHistTTJets0.023118414643743->SetBinError(13,0.9413874);
   setHistTTJets0.023118414643743->SetBinError(14,0.759482);
   setHistTTJets0.023118414643743->SetBinError(15,0.5995104);
   setHistTTJets0.023118414643743->SetBinError(16,0.5175628);
   setHistTTJets0.023118414643743->SetBinError(17,0.4636065);
   setHistTTJets0.023118414643743->SetBinError(18,0.3801249);
   setHistTTJets0.023118414643743->SetBinError(19,0.3584467);
   setHistTTJets0.023118414643743->SetBinError(20,0.2761464);
   setHistTTJets0.023118414643743->SetBinError(21,0.5789017);
   setHistTTJets0.023118414643743->SetEntries(79948);
   setHistTTJets0.023118414643743->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.023118414643743->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.023118414643743->SetLineColor(ci);
   setHistTTJets0.023118414643743->SetLineWidth(2);
   setHistTTJets0.023118414643743->SetMarkerStyle(20);
   setHistTTJets0.023118414643743->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.023118414643743->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643743->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.023118414643743->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643743->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643743->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.023118414643743->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.023118414643743->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.023118414643743->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.023118414643743->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643743->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.023118414643743->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643743->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643743->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.023118414643743->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.023118414643743->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643743->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.023118414643743->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643743->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643743->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.023118414643743->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.0231184146437,"HIST F");
   Double_t xAxis33[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsAMCHF0.58387243036844 = new TH1F("setHistWJetsAMCHF0.58387243036844","",20, xAxis33);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(1,4.744401);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(2,33.06889);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(3,26.59955);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(4,53.51707);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(5,24.27817);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(6,41.1499);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(7,73.59148);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(8,54.34789);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(9,66.12911);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(10,29.95311);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(11,20.54561);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(12,3.659375);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(13,2.537576);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(14,3.459263);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(15,-4.102799);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(18,1.846327);
   setHistWJetsAMCHF0.58387243036844->SetBinContent(19,1.882285);
   setHistWJetsAMCHF0.58387243036844->SetBinError(1,10.30254);
   setHistWJetsAMCHF0.58387243036844->SetBinError(2,10.24377);
   setHistWJetsAMCHF0.58387243036844->SetBinError(3,11.4034);
   setHistWJetsAMCHF0.58387243036844->SetBinError(4,13.91754);
   setHistWJetsAMCHF0.58387243036844->SetBinError(5,12.55301);
   setHistWJetsAMCHF0.58387243036844->SetBinError(6,15.69831);
   setHistWJetsAMCHF0.58387243036844->SetBinError(7,17.93963);
   setHistWJetsAMCHF0.58387243036844->SetBinError(8,19.36522);
   setHistWJetsAMCHF0.58387243036844->SetBinError(9,17.14855);
   setHistWJetsAMCHF0.58387243036844->SetBinError(10,12.77655);
   setHistWJetsAMCHF0.58387243036844->SetBinError(11,7.953341);
   setHistWJetsAMCHF0.58387243036844->SetBinError(12,4.365496);
   setHistWJetsAMCHF0.58387243036844->SetBinError(13,2.52597);
   setHistWJetsAMCHF0.58387243036844->SetBinError(14,3.172944);
   setHistWJetsAMCHF0.58387243036844->SetBinError(15,2.488883);
   setHistWJetsAMCHF0.58387243036844->SetBinError(18,1.846327);
   setHistWJetsAMCHF0.58387243036844->SetBinError(19,1.882284);
   setHistWJetsAMCHF0.58387243036844->SetEntries(909);
   setHistWJetsAMCHF0.58387243036844->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsAMCHF0.58387243036844->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsAMCHF0.58387243036844->SetLineColor(ci);
   setHistWJetsAMCHF0.58387243036844->SetLineWidth(2);
   setHistWJetsAMCHF0.58387243036844->SetMarkerStyle(20);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCHF0.58387243036844->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCHF0.58387243036844->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCHF0.58387243036844->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCHF0.583872430368,"HIST F");
   Double_t xAxis34[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsAMCLF0.66223439911745 = new TH1F("setHistWJetsAMCLF0.66223439911745","",20, xAxis34);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(1,17.69576);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(2,8.879127);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(3,3.216045);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(4,12.01204);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(5,10.9304);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(6,16.63528);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(7,25.71717);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(8,17.86061);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(9,9.498536);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(10,8.169235);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(11,3.782187);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(12,2.37103);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(14,-1.725123);
   setHistWJetsAMCLF0.66223439911745->SetBinContent(15,-0.8397298);
   setHistWJetsAMCLF0.66223439911745->SetBinError(1,6.206346);
   setHistWJetsAMCLF0.66223439911745->SetBinError(2,5.876058);
   setHistWJetsAMCLF0.66223439911745->SetBinError(3,6.670414);
   setHistWJetsAMCLF0.66223439911745->SetBinError(4,6.284022);
   setHistWJetsAMCLF0.66223439911745->SetBinError(5,7.622131);
   setHistWJetsAMCLF0.66223439911745->SetBinError(6,9.688232);
   setHistWJetsAMCLF0.66223439911745->SetBinError(7,11.27269);
   setHistWJetsAMCLF0.66223439911745->SetBinError(8,11.31556);
   setHistWJetsAMCLF0.66223439911745->SetBinError(9,9.597673);
   setHistWJetsAMCLF0.66223439911745->SetBinError(10,7.177782);
   setHistWJetsAMCLF0.66223439911745->SetBinError(11,4.982489);
   setHistWJetsAMCLF0.66223439911745->SetBinError(12,1.74648);
   setHistWJetsAMCLF0.66223439911745->SetBinError(14,1.725123);
   setHistWJetsAMCLF0.66223439911745->SetBinError(15,0.8397298);
   setHistWJetsAMCLF0.66223439911745->SetEntries(264);
   setHistWJetsAMCLF0.66223439911745->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsAMCLF0.66223439911745->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsAMCLF0.66223439911745->SetLineColor(ci);
   setHistWJetsAMCLF0.66223439911745->SetLineWidth(2);
   setHistWJetsAMCLF0.66223439911745->SetMarkerStyle(20);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCLF0.66223439911745->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCLF0.66223439911745->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCLF0.66223439911745->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCLF0.662234399117,"HIST F");
   Double_t xAxis35[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistDY0.69346201180246 = new TH1F("setHistDY0.69346201180246","",20, xAxis35);
   setHistDY0.69346201180246->SetBinContent(1,5.07742);
   setHistDY0.69346201180246->SetBinContent(2,3.663143);
   setHistDY0.69346201180246->SetBinContent(3,13.34641);
   setHistDY0.69346201180246->SetBinContent(4,9.34743);
   setHistDY0.69346201180246->SetBinContent(5,7.91916);
   setHistDY0.69346201180246->SetBinContent(6,4.187527);
   setHistDY0.69346201180246->SetBinContent(7,-5.767086);
   setHistDY0.69346201180246->SetBinContent(8,11.53537);
   setHistDY0.69346201180246->SetBinContent(9,2.106764);
   setHistDY0.69346201180246->SetBinContent(10,-3.17305);
   setHistDY0.69346201180246->SetBinContent(11,5.287077);
   setHistDY0.69346201180246->SetBinContent(12,-1.23083);
   setHistDY0.69346201180246->SetBinContent(13,1.495288);
   setHistDY0.69346201180246->SetBinError(1,6.362282);
   setHistDY0.69346201180246->SetBinError(2,5.440089);
   setHistDY0.69346201180246->SetBinError(3,5.587097);
   setHistDY0.69346201180246->SetBinError(4,5.520844);
   setHistDY0.69346201180246->SetBinError(5,4.274266);
   setHistDY0.69346201180246->SetBinError(6,3.523681);
   setHistDY0.69346201180246->SetBinError(7,4.878905);
   setHistDY0.69346201180246->SetBinError(8,5.415911);
   setHistDY0.69346201180246->SetBinError(9,3.347704);
   setHistDY0.69346201180246->SetBinError(10,2.72355);
   setHistDY0.69346201180246->SetBinError(11,2.645014);
   setHistDY0.69346201180246->SetBinError(12,1.23083);
   setHistDY0.69346201180246->SetBinError(13,1.495288);
   setHistDY0.69346201180246->SetEntries(194);
   setHistDY0.69346201180246->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.69346201180246->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.69346201180246->SetLineColor(ci);
   setHistDY0.69346201180246->SetLineWidth(2);
   setHistDY0.69346201180246->SetMarkerStyle(20);
   setHistDY0.69346201180246->GetXaxis()->SetNdivisions(1005);
   setHistDY0.69346201180246->GetXaxis()->SetLabelFont(43);
   setHistDY0.69346201180246->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.69346201180246->GetXaxis()->SetLabelSize(32);
   setHistDY0.69346201180246->GetXaxis()->SetTitleSize(35);
   setHistDY0.69346201180246->GetXaxis()->SetTickLength(0.05);
   setHistDY0.69346201180246->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.69346201180246->GetXaxis()->SetTitleFont(43);
   setHistDY0.69346201180246->GetYaxis()->SetNdivisions(506);
   setHistDY0.69346201180246->GetYaxis()->SetLabelFont(43);
   setHistDY0.69346201180246->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.69346201180246->GetYaxis()->SetLabelSize(32);
   setHistDY0.69346201180246->GetYaxis()->SetTitleSize(35);
   setHistDY0.69346201180246->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.69346201180246->GetYaxis()->SetTitleFont(43);
   setHistDY0.69346201180246->GetZaxis()->SetLabelFont(43);
   setHistDY0.69346201180246->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.69346201180246->GetZaxis()->SetLabelSize(32);
   setHistDY0.69346201180246->GetZaxis()->SetTitleSize(35);
   setHistDY0.69346201180246->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.69346201180246->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.693462011802,"HIST F");
   ->Draw("same");
   Double_t xAxis36[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata760.28815435678247 = new TH1F("setHistdata760.28815435678247","",20, xAxis36);
   setHistdata760.28815435678247->SetBinContent(1,7302);
   setHistdata760.28815435678247->SetBinContent(2,6436);
   setHistdata760.28815435678247->SetBinContent(3,5399);
   setHistdata760.28815435678247->SetBinContent(4,4054);
   setHistdata760.28815435678247->SetBinContent(5,2901);
   setHistdata760.28815435678247->SetBinContent(6,1910);
   setHistdata760.28815435678247->SetBinContent(7,1161);
   setHistdata760.28815435678247->SetBinContent(8,796);
   setHistdata760.28815435678247->SetBinContent(9,526);
   setHistdata760.28815435678247->SetBinContent(10,327);
   setHistdata760.28815435678247->SetBinContent(11,159);
   setHistdata760.28815435678247->SetBinContent(12,95);
   setHistdata760.28815435678247->SetBinContent(13,42);
   setHistdata760.28815435678247->SetBinContent(14,30);
   setHistdata760.28815435678247->SetBinContent(15,21);
   setHistdata760.28815435678247->SetBinContent(16,9);
   setHistdata760.28815435678247->SetBinContent(17,5);
   setHistdata760.28815435678247->SetBinContent(18,8);
   setHistdata760.28815435678247->SetBinContent(19,2);
   setHistdata760.28815435678247->SetBinContent(20,14);
   setHistdata760.28815435678247->SetBinError(1,85.45174);
   setHistdata760.28815435678247->SetBinError(2,80.22468);
   setHistdata760.28815435678247->SetBinError(3,73.47789);
   setHistdata760.28815435678247->SetBinError(4,63.67103);
   setHistdata760.28815435678247->SetBinError(5,53.86093);
   setHistdata760.28815435678247->SetBinError(6,43.70355);
   setHistdata760.28815435678247->SetBinError(7,34.07345);
   setHistdata760.28815435678247->SetBinError(8,28.21347);
   setHistdata760.28815435678247->SetBinError(9,22.93469);
   setHistdata760.28815435678247->SetBinError(10,18.08314);
   setHistdata760.28815435678247->SetBinError(11,12.60952);
   setHistdata760.28815435678247->SetBinError(12,9.746794);
   setHistdata760.28815435678247->SetBinError(13,6.480741);
   setHistdata760.28815435678247->SetBinError(14,5.477226);
   setHistdata760.28815435678247->SetBinError(15,4.582576);
   setHistdata760.28815435678247->SetBinError(16,3);
   setHistdata760.28815435678247->SetBinError(17,2.236068);
   setHistdata760.28815435678247->SetBinError(18,2.828427);
   setHistdata760.28815435678247->SetBinError(19,1.414214);
   setHistdata760.28815435678247->SetBinError(20,2);
   setHistdata760.28815435678247->SetBinError(21,3.162278);
   setHistdata760.28815435678247->SetEntries(31197);
   setHistdata760.28815435678247->SetFillStyle(0);
   setHistdata760.28815435678247->SetMarkerStyle(20);
   setHistdata760.28815435678247->SetMarkerSize(1.15);
   setHistdata760.28815435678247->GetXaxis()->SetNdivisions(1005);
   setHistdata760.28815435678247->GetXaxis()->SetLabelFont(43);
   setHistdata760.28815435678247->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata760.28815435678247->GetXaxis()->SetLabelSize(32);
   setHistdata760.28815435678247->GetXaxis()->SetTitleSize(35);
   setHistdata760.28815435678247->GetXaxis()->SetTickLength(0.05);
   setHistdata760.28815435678247->GetXaxis()->SetTitleOffset(1.135);
   setHistdata760.28815435678247->GetXaxis()->SetTitleFont(43);
   setHistdata760.28815435678247->GetYaxis()->SetNdivisions(506);
   setHistdata760.28815435678247->GetYaxis()->SetLabelFont(43);
   setHistdata760.28815435678247->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678247->GetYaxis()->SetLabelSize(32);
   setHistdata760.28815435678247->GetYaxis()->SetTitleSize(35);
   setHistdata760.28815435678247->GetYaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678247->GetYaxis()->SetTitleFont(43);
   setHistdata760.28815435678247->GetZaxis()->SetLabelFont(43);
   setHistdata760.28815435678247->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678247->GetZaxis()->SetLabelSize(32);
   setHistdata760.28815435678247->GetZaxis()->SetTitleSize(35);
   setHistdata760.28815435678247->GetZaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678247->GetZaxis()->SetTitleFont(43);
   setHistdata760.28815435678247->Draw("PESame");
   
   TH2F *axis0.0989835410466_copy48 = new TH2F("axis0.0989835410466_copy48","",50,0,200,50,0,10222.8);
   axis0.0989835410466_copy48->SetDirectory(0);
   axis0.0989835410466_copy48->SetMarkerStyle(20);
   axis0.0989835410466_copy48->GetXaxis()->SetNdivisions(1005);
   axis0.0989835410466_copy48->GetXaxis()->SetLabelFont(43);
   axis0.0989835410466_copy48->GetXaxis()->SetLabelOffset(0.0105);
   axis0.0989835410466_copy48->GetXaxis()->SetLabelSize(0);
   axis0.0989835410466_copy48->GetXaxis()->SetTitleSize(35);
   axis0.0989835410466_copy48->GetXaxis()->SetTickLength(0.025);
   axis0.0989835410466_copy48->GetXaxis()->SetTitleOffset(1.135);
   axis0.0989835410466_copy48->GetXaxis()->SetTitleFont(43);
   axis0.0989835410466_copy48->GetYaxis()->SetTitle("Events / bin");
   axis0.0989835410466_copy48->GetYaxis()->SetNdivisions(506);
   axis0.0989835410466_copy48->GetYaxis()->SetLabelFont(43);
   axis0.0989835410466_copy48->GetYaxis()->SetLabelOffset(0.0087);
   axis0.0989835410466_copy48->GetYaxis()->SetLabelSize(32);
   axis0.0989835410466_copy48->GetYaxis()->SetTitleSize(35);
   axis0.0989835410466_copy48->GetYaxis()->SetTickLength(0.02631579);
   axis0.0989835410466_copy48->GetYaxis()->SetTitleOffset(1.32);
   axis0.0989835410466_copy48->GetYaxis()->SetTitleFont(43);
   axis0.0989835410466_copy48->GetZaxis()->SetLabelFont(43);
   axis0.0989835410466_copy48->GetZaxis()->SetLabelOffset(0.0087);
   axis0.0989835410466_copy48->GetZaxis()->SetLabelSize(32);
   axis0.0989835410466_copy48->GetZaxis()->SetTitleSize(35);
   axis0.0989835410466_copy48->GetZaxis()->SetTitleOffset(1.32);
   axis0.0989835410466_copy48->GetZaxis()->SetTitleFont(43);
   axis0.0989835410466_copy48->Draw("sameaxis");
   
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
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 2.3#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
   pt->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_2->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
   
   TLegend *leg = new TLegend(0.745,0.36,0.99,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("setHistdata760.288154356782","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistDY0.693462011802","Z/#gamma+jets","F");

   ci = TColor::GetColor("#1959d8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f3582");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsAMCLF0.662234399117","W+LF","F");

   ci = TColor::GetColor("#19f266");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f913d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsAMCHF0.583872430368","W+HF","F");

   ci = TColor::GetColor("#0a9128");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#065718");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistTTJets0.0231184146437","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel0.0303020603179","tW","F");

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
   entry=leg->AddEntry("setHisttChannel0.534567592491","#it{t}-channel","F");

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
   cv2j1t_mtw_qcdnone0.527366624005->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
   cv2j1t_mtw_qcdnone0.527366624005->SetSelected(cv2j1t_mtw_qcdnone0.527366624005);
}
