void plots_now/3j2t/electron_3j2t_top_mass_qcdnone()
{
//=========Macro generated from canvas: cvelectron_3j2t_top_mass_qcdnone0.130924496925/
//=========  (Sun Apr 23 16:40:16 2017) by ROOT version6.02/05
   TCanvas *cvelectron_3j2t_top_mass_qcdnone0.130924496925 = new TCanvas("cvelectron_3j2t_top_mass_qcdnone0.130924496925", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetHighLightColor(2);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->Range(0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetLeftMargin(0.1150442);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetRightMargin(0.227083);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetTopMargin(0.04002582);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetBottomMargin(0.08064517);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetFrameLineWidth(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_3j2t_top_mass_qcdnone0.130924496925_1
   TPad *cvelectron_3j2t_top_mass_qcdnone0.130924496925_1 = new TPad("cvelectron_3j2t_top_mass_qcdnone0.130924496925_1", "",0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->Draw();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->cd();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->Range(18.33334,0.06666676,601.6667,3.87619);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFillStyle(4000);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetLeftMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetRightMargin(0.26);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetTopMargin(0.65);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetBottomMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.6068542696422094 = new TH2F("axisRes0.6068542696422094","",50,100,450,50,0.6,1.4);
   axisRes0.6068542696422094->SetMarkerStyle(20);
   axisRes0.6068542696422094->GetXaxis()->SetTitle("top quark mass (GeV)");
   axisRes0.6068542696422094->GetXaxis()->SetNdivisions(1005);
   axisRes0.6068542696422094->GetXaxis()->SetLabelFont(43);
   axisRes0.6068542696422094->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.6068542696422094->GetXaxis()->SetLabelSize(32);
   axisRes0.6068542696422094->GetXaxis()->SetTitleSize(35);
   axisRes0.6068542696422094->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.6068542696422094->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.6068542696422094->GetXaxis()->SetTitleFont(43);
   axisRes0.6068542696422094->GetYaxis()->SetTitle("Data/MC");
   axisRes0.6068542696422094->GetYaxis()->SetNdivisions(406);
   axisRes0.6068542696422094->GetYaxis()->SetLabelFont(43);
   axisRes0.6068542696422094->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.6068542696422094->GetYaxis()->SetLabelSize(32);
   axisRes0.6068542696422094->GetYaxis()->SetTitleSize(35);
   axisRes0.6068542696422094->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.6068542696422094->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.6068542696422094->GetYaxis()->SetTitleFont(43);
   axisRes0.6068542696422094->GetZaxis()->SetLabelFont(43);
   axisRes0.6068542696422094->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.6068542696422094->GetZaxis()->SetLabelSize(32);
   axisRes0.6068542696422094->GetZaxis()->SetTitleSize(35);
   axisRes0.6068542696422094->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.6068542696422094->GetZaxis()->SetTitleFont(43);
   axisRes0.6068542696422094->Draw("AXIS");
   TBox *box = new TBox(100,0.9696967,117.5,1.030303);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9696967,117.5,1.030303);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(117.5,0.9823295,135,1.01767);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(117.5,0.9823295,135,1.01767);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(135,0.9916341,152.5,1.008366);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(135,0.9916341,152.5,1.008366);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(152.5,0.9936342,170,1.006366);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(152.5,0.9936342,170,1.006366);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9938556,187.5,1.006144);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9938556,187.5,1.006144);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(187.5,0.9922359,205,1.007764);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(187.5,0.9922359,205,1.007764);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(205,0.9896984,222.5,1.010302);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(205,0.9896984,222.5,1.010302);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(222.5,0.9872254,240,1.012775);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(222.5,0.9872254,240,1.012775);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(240,0.9848854,257.5,1.015115);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(240,0.9848854,257.5,1.015115);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(257.5,0.9834201,275,1.01658);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(257.5,0.9834201,275,1.01658);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275,0.9814685,292.5,1.018531);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275,0.9814685,292.5,1.018531);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(292.5,0.9763975,310,1.023602);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(292.5,0.9763975,310,1.023602);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(310,0.9717832,327.5,1.028217);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(310,0.9717832,327.5,1.028217);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(327.5,0.974196,345,1.025804);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(327.5,0.974196,345,1.025804);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(345,0.9660255,362.5,1.033975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(345,0.9660255,362.5,1.033975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(362.5,0.9613002,380,1.0387);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(362.5,0.9613002,380,1.0387);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(380,0.9542145,397.5,1.045785);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(380,0.9542145,397.5,1.045785);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(397.5,0.9527382,415,1.047262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(397.5,0.9527382,415,1.047262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(415,0.9533965,432.5,1.046603);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(415,0.9533965,432.5,1.046603);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(432.5,0.9913319,450,1.008668);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(432.5,0.9913319,450,1.008668);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1611[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistdata0.1992799818670.6573066054152095 = new TH1F("setHistdata0.1992799818670.6573066054152095","",20, xAxis1611);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(1,1.050326);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(2,0.9980244);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(3,1.018314);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(4,1.038662);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(5,1.0345);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(6,1.008711);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(7,0.9966401);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(8,1.031585);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(9,1.025327);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(10,0.9821425);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(11,1.040959);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(12,0.9940104);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(13,1.057353);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(14,1.087657);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(15,0.9502353);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(16,1.098468);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(17,0.9219909);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(18,0.9458272);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(19,1.247016);
   setHistdata0.1992799818670.6573066054152095->SetBinContent(20,1.122769);
   setHistdata0.1992799818670.6573066054152095->SetBinError(0,3.162278);
   setHistdata0.1992799818670.6573066054152095->SetBinError(1,0.05289669);
   setHistdata0.1992799818670.6573066054152095->SetBinError(2,0.02889488);
   setHistdata0.1992799818670.6573066054152095->SetBinError(3,0.02061938);
   setHistdata0.1992799818670.6573066054152095->SetBinError(4,0.01672436);
   setHistdata0.1992799818670.6573066054152095->SetBinError(5,0.01674877);
   setHistdata0.1992799818670.6573066054152095->SetBinError(6,0.02021469);
   setHistdata0.1992799818670.6573066054152095->SetBinError(7,0.02529837);
   setHistdata0.1992799818670.6573066054152095->SetBinError(8,0.03072863);
   setHistdata0.1992799818670.6573066054152095->SetBinError(9,0.03523065);
   setHistdata0.1992799818670.6573066054152095->SetBinError(10,0.03973323);
   setHistdata0.1992799818670.6573066054152095->SetBinError(11,0.04591471);
   setHistdata0.1992799818670.6573066054152095->SetBinError(12,0.05174611);
   setHistdata0.1992799818670.6573066054152095->SetBinError(13,0.05938684);
   setHistdata0.1992799818670.6573066054152095->SetBinError(14,0.06784617);
   setHistdata0.1992799818670.6573066054152095->SetBinError(15,0.07024342);
   setHistdata0.1992799818670.6573066054152095->SetBinError(16,0.08424864);
   setHistdata0.1992799818670.6573066054152095->SetBinError(17,0.0859761);
   setHistdata0.1992799818670.6573066054152095->SetBinError(18,0.09755463);
   setHistdata0.1992799818670.6573066054152095->SetBinError(19,0.1286199);
   setHistdata0.1992799818670.6573066054152095->SetBinError(20,0.02585699);
   setHistdata0.1992799818670.6573066054152095->SetBinError(21,17.26268);
   setHistdata0.1992799818670.6573066054152095->SetEntries(20819);
   setHistdata0.1992799818670.6573066054152095->SetFillStyle(0);
   setHistdata0.1992799818670.6573066054152095->SetMarkerStyle(20);
   setHistdata0.1992799818670.6573066054152095->SetMarkerSize(1.15);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetNdivisions(1005);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetLabelFont(43);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetLabelSize(32);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetTitleSize(35);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetTickLength(0.05);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.1992799818670.6573066054152095->GetXaxis()->SetTitleFont(43);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetNdivisions(506);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetLabelFont(43);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetLabelSize(32);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetTitleSize(35);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.1992799818670.6573066054152095->GetYaxis()->SetTitleFont(43);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetLabelFont(43);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetLabelSize(32);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetTitleSize(35);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.1992799818670.6573066054152095->GetZaxis()->SetTitleFont(43);
   setHistdata0.1992799818670.6573066054152095->Draw("PESame");
   
   TF1 *axisLine0.463863215429162 = new TF1("axisLine0.463863215429","1",100,450);
   axisLine0.463863215429162->SetFillColor(19);
   axisLine0.463863215429162->SetFillStyle(0);
   axisLine0.463863215429162->SetMarkerStyle(20);
   axisLine0.463863215429162->SetLineWidth(1);
   axisLine0.463863215429162->GetXaxis()->SetNdivisions(1005);
   axisLine0.463863215429162->GetXaxis()->SetLabelFont(43);
   axisLine0.463863215429162->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.463863215429162->GetXaxis()->SetLabelSize(32);
   axisLine0.463863215429162->GetXaxis()->SetTitleSize(35);
   axisLine0.463863215429162->GetXaxis()->SetTickLength(0.05);
   axisLine0.463863215429162->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.463863215429162->GetXaxis()->SetTitleFont(43);
   axisLine0.463863215429162->GetYaxis()->SetNdivisions(506);
   axisLine0.463863215429162->GetYaxis()->SetLabelFont(43);
   axisLine0.463863215429162->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.463863215429162->GetYaxis()->SetLabelSize(32);
   axisLine0.463863215429162->GetYaxis()->SetTitleSize(35);
   axisLine0.463863215429162->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.463863215429162->GetYaxis()->SetTitleFont(43);
   axisLine0.463863215429162->Draw("SameL");
   
   TH2F *axisRes0.606854269642_copy2096 = new TH2F("axisRes0.606854269642_copy2096","",50,100,450,50,0.6,1.4);
   axisRes0.606854269642_copy2096->SetDirectory(0);
   axisRes0.606854269642_copy2096->SetMarkerStyle(20);
   axisRes0.606854269642_copy2096->GetXaxis()->SetTitle("top quark mass (GeV)");
   axisRes0.606854269642_copy2096->GetXaxis()->SetNdivisions(1005);
   axisRes0.606854269642_copy2096->GetXaxis()->SetLabelFont(43);
   axisRes0.606854269642_copy2096->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.606854269642_copy2096->GetXaxis()->SetLabelSize(32);
   axisRes0.606854269642_copy2096->GetXaxis()->SetTitleSize(35);
   axisRes0.606854269642_copy2096->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.606854269642_copy2096->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.606854269642_copy2096->GetXaxis()->SetTitleFont(43);
   axisRes0.606854269642_copy2096->GetYaxis()->SetTitle("Data/MC");
   axisRes0.606854269642_copy2096->GetYaxis()->SetNdivisions(406);
   axisRes0.606854269642_copy2096->GetYaxis()->SetLabelFont(43);
   axisRes0.606854269642_copy2096->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.606854269642_copy2096->GetYaxis()->SetLabelSize(32);
   axisRes0.606854269642_copy2096->GetYaxis()->SetTitleSize(35);
   axisRes0.606854269642_copy2096->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.606854269642_copy2096->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.606854269642_copy2096->GetYaxis()->SetTitleFont(43);
   axisRes0.606854269642_copy2096->GetZaxis()->SetLabelFont(43);
   axisRes0.606854269642_copy2096->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.606854269642_copy2096->GetZaxis()->SetLabelSize(32);
   axisRes0.606854269642_copy2096->GetZaxis()->SetTitleSize(35);
   axisRes0.606854269642_copy2096->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.606854269642_copy2096->GetZaxis()->SetTitleFont(43);
   axisRes0.606854269642_copy2096->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_1->Modified();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->cd();
  
// ------------>Primitives in pad: cvelectron_3j2t_top_mass_qcdnone0.130924496925_2
   TPad *cvelectron_3j2t_top_mass_qcdnone0.130924496925_2 = new TPad("cvelectron_3j2t_top_mass_qcdnone0.130924496925_2", "",0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->Draw();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->cd();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->Range(18.33334,-3315.667,601.6667,6157.667);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFillStyle(4000);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetLeftMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetRightMargin(0.26);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetTopMargin(0.08);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetBottomMargin(0.35);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->SetFrameBorderMode(0);
   
   TH2F *axis0.3255130299122097 = new TH2F("axis0.3255130299122097","",50,100,450,50,0,5399.8);
   axis0.3255130299122097->SetMarkerStyle(20);
   axis0.3255130299122097->GetXaxis()->SetNdivisions(1005);
   axis0.3255130299122097->GetXaxis()->SetLabelFont(43);
   axis0.3255130299122097->GetXaxis()->SetLabelOffset(0.0105);
   axis0.3255130299122097->GetXaxis()->SetLabelSize(0);
   axis0.3255130299122097->GetXaxis()->SetTitleSize(35);
   axis0.3255130299122097->GetXaxis()->SetTickLength(0.025);
   axis0.3255130299122097->GetXaxis()->SetTitleOffset(1.135);
   axis0.3255130299122097->GetXaxis()->SetTitleFont(43);
   axis0.3255130299122097->GetYaxis()->SetTitle("Events / bin");
   axis0.3255130299122097->GetYaxis()->SetNdivisions(506);
   axis0.3255130299122097->GetYaxis()->SetLabelFont(43);
   axis0.3255130299122097->GetYaxis()->SetLabelOffset(0.0087);
   axis0.3255130299122097->GetYaxis()->SetLabelSize(32);
   axis0.3255130299122097->GetYaxis()->SetTitleSize(35);
   axis0.3255130299122097->GetYaxis()->SetTickLength(0.02631579);
   axis0.3255130299122097->GetYaxis()->SetTitleOffset(1.32);
   axis0.3255130299122097->GetYaxis()->SetTitleFont(43);
   axis0.3255130299122097->GetZaxis()->SetLabelFont(43);
   axis0.3255130299122097->GetZaxis()->SetLabelOffset(0.0087);
   axis0.3255130299122097->GetZaxis()->SetLabelSize(32);
   axis0.3255130299122097->GetZaxis()->SetTitleSize(35);
   axis0.3255130299122097->GetZaxis()->SetTitleOffset(1.32);
   axis0.3255130299122097->GetZaxis()->SetTitleFont(43);
   axis0.3255130299122097->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1612[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *_stack_161_stack_162 = new TH1F("_stack_161_stack_162","",20, xAxis1612);
   _stack_161_stack_162->SetMinimum(-5.691869e-08);
   _stack_161_stack_162->SetMaximum(3899.102);
   _stack_161_stack_162->SetDirectory(0);
   _stack_161_stack_162->SetStats(0);
   _stack_161_stack_162->SetMarkerStyle(20);
   _stack_161_stack_162->GetXaxis()->SetNdivisions(1005);
   _stack_161_stack_162->GetXaxis()->SetLabelFont(43);
   _stack_161_stack_162->GetXaxis()->SetLabelOffset(0.0105);
   _stack_161_stack_162->GetXaxis()->SetLabelSize(32);
   _stack_161_stack_162->GetXaxis()->SetTitleSize(35);
   _stack_161_stack_162->GetXaxis()->SetTickLength(0.05);
   _stack_161_stack_162->GetXaxis()->SetTitleOffset(1.135);
   _stack_161_stack_162->GetXaxis()->SetTitleFont(43);
   _stack_161_stack_162->GetYaxis()->SetNdivisions(506);
   _stack_161_stack_162->GetYaxis()->SetLabelFont(43);
   _stack_161_stack_162->GetYaxis()->SetLabelOffset(0.0087);
   _stack_161_stack_162->GetYaxis()->SetLabelSize(32);
   _stack_161_stack_162->GetYaxis()->SetTitleSize(35);
   _stack_161_stack_162->GetYaxis()->SetTitleOffset(1.32);
   _stack_161_stack_162->GetYaxis()->SetTitleFont(43);
   _stack_161_stack_162->GetZaxis()->SetLabelFont(43);
   _stack_161_stack_162->GetZaxis()->SetLabelOffset(0.0087);
   _stack_161_stack_162->GetZaxis()->SetLabelSize(32);
   _stack_161_stack_162->GetZaxis()->SetTitleSize(35);
   _stack_161_stack_162->GetZaxis()->SetTitleOffset(1.32);
   _stack_161_stack_162->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_161_stack_162);
   
   Double_t xAxis1613[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHisttChannel0.7889901748782098 = new TH1F("setHisttChannel0.7889901748782098","",20, xAxis1613);
   setHisttChannel0.7889901748782098->SetBinContent(1,18.74648);
   setHisttChannel0.7889901748782098->SetBinContent(2,65.40827);
   setHisttChannel0.7889901748782098->SetBinContent(3,144.7446);
   setHisttChannel0.7889901748782098->SetBinContent(4,220.4126);
   setHisttChannel0.7889901748782098->SetBinContent(5,200.5582);
   setHisttChannel0.7889901748782098->SetBinContent(6,133.2338);
   setHisttChannel0.7889901748782098->SetBinContent(7,75.26717);
   setHisttChannel0.7889901748782098->SetBinContent(8,46.37215);
   setHisttChannel0.7889901748782098->SetBinContent(9,36.13384);
   setHisttChannel0.7889901748782098->SetBinContent(10,26.9039);
   setHisttChannel0.7889901748782098->SetBinContent(11,20.58132);
   setHisttChannel0.7889901748782098->SetBinContent(12,15.01723);
   setHisttChannel0.7889901748782098->SetBinContent(13,12.85819);
   setHisttChannel0.7889901748782098->SetBinContent(14,8.920622);
   setHisttChannel0.7889901748782098->SetBinContent(15,7.689059);
   setHisttChannel0.7889901748782098->SetBinContent(16,6.213219);
   setHisttChannel0.7889901748782098->SetBinContent(17,4.360968);
   setHisttChannel0.7889901748782098->SetBinContent(18,5.43262);
   setHisttChannel0.7889901748782098->SetBinContent(19,3.255672);
   setHisttChannel0.7889901748782098->SetBinContent(20,13.52633);
   setHisttChannel0.7889901748782098->SetBinError(0,0.2153243);
   setHisttChannel0.7889901748782098->SetBinError(1,1.366495);
   setHisttChannel0.7889901748782098->SetBinError(2,2.647313);
   setHisttChannel0.7889901748782098->SetBinError(3,3.912136);
   setHisttChannel0.7889901748782098->SetBinError(4,4.827251);
   setHisttChannel0.7889901748782098->SetBinError(5,4.591595);
   setHisttChannel0.7889901748782098->SetBinError(6,3.768981);
   setHisttChannel0.7889901748782098->SetBinError(7,2.838502);
   setHisttChannel0.7889901748782098->SetBinError(8,2.201901);
   setHisttChannel0.7889901748782098->SetBinError(9,1.946088);
   setHisttChannel0.7889901748782098->SetBinError(10,1.671594);
   setHisttChannel0.7889901748782098->SetBinError(11,1.46324);
   setHisttChannel0.7889901748782098->SetBinError(12,1.286797);
   setHisttChannel0.7889901748782098->SetBinError(13,1.168135);
   setHisttChannel0.7889901748782098->SetBinError(14,0.9666767);
   setHisttChannel0.7889901748782098->SetBinError(15,0.8892943);
   setHisttChannel0.7889901748782098->SetBinError(16,0.8266298);
   setHisttChannel0.7889901748782098->SetBinError(17,0.6751617);
   setHisttChannel0.7889901748782098->SetBinError(18,0.7518342);
   setHisttChannel0.7889901748782098->SetBinError(19,0.5752658);
   setHisttChannel0.7889901748782098->SetBinError(20,0.4459999);
   setHisttChannel0.7889901748782098->SetBinError(21,1.099522);
   setHisttChannel0.7889901748782098->SetEntries(23208);
   setHisttChannel0.7889901748782098->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.7889901748782098->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.7889901748782098->SetLineColor(ci);
   setHisttChannel0.7889901748782098->SetLineWidth(2);
   setHisttChannel0.7889901748782098->SetMarkerStyle(20);
   setHisttChannel0.7889901748782098->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.7889901748782098->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.7889901748782098->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.7889901748782098->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.7889901748782098->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.7889901748782098->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.7889901748782098->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.7889901748782098->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.7889901748782098->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.7889901748782098->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.7889901748782098->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.7889901748782098->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.7889901748782098->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.7889901748782098->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.7889901748782098->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.7889901748782098->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.7889901748782098->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.7889901748782098->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.7889901748782098->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.7889901748782098->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.7889901748782098->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.788990174878,"HIST F");
   Double_t xAxis1614[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHisttWs0.50493246252099 = new TH1F("setHisttWs0.50493246252099","",20, xAxis1614);
   setHisttWs0.50493246252099->SetBinContent(1,16.08329);
   setHisttWs0.50493246252099->SetBinContent(2,30.90798);
   setHisttWs0.50493246252099->SetBinContent(3,54.4186);
   setHisttWs0.50493246252099->SetBinContent(4,74.35837);
   setHisttWs0.50493246252099->SetBinContent(5,71.76633);
   setHisttWs0.50493246252099->SetBinContent(6,54.52443);
   setHisttWs0.50493246252099->SetBinContent(7,31.03912);
   setHisttWs0.50493246252099->SetBinContent(8,40.47029);
   setHisttWs0.50493246252099->SetBinContent(9,29.90282);
   setHisttWs0.50493246252099->SetBinContent(10,22.52017);
   setHisttWs0.50493246252099->SetBinContent(11,24.38713);
   setHisttWs0.50493246252099->SetBinContent(12,18.89108);
   setHisttWs0.50493246252099->SetBinContent(13,13.75993);
   setHisttWs0.50493246252099->SetBinContent(14,12.90161);
   setHisttWs0.50493246252099->SetBinContent(15,8.726612);
   setHisttWs0.50493246252099->SetBinContent(16,7.936876);
   setHisttWs0.50493246252099->SetBinContent(17,7.56996);
   setHisttWs0.50493246252099->SetBinContent(18,4.981578);
   setHisttWs0.50493246252099->SetBinContent(19,3.528538);
   setHisttWs0.50493246252099->SetBinContent(20,19.97631);
   setHisttWs0.50493246252099->SetBinError(0,0.5186114);
   setHisttWs0.50493246252099->SetBinError(1,2.512582);
   setHisttWs0.50493246252099->SetBinError(2,3.617552);
   setHisttWs0.50493246252099->SetBinError(3,4.779764);
   setHisttWs0.50493246252099->SetBinError(4,5.600478);
   setHisttWs0.50493246252099->SetBinError(5,5.404378);
   setHisttWs0.50493246252099->SetBinError(6,4.78474);
   setHisttWs0.50493246252099->SetBinError(7,3.544177);
   setHisttWs0.50493246252099->SetBinError(8,4.161626);
   setHisttWs0.50493246252099->SetBinError(9,3.646299);
   setHisttWs0.50493246252099->SetBinError(10,3.125843);
   setHisttWs0.50493246252099->SetBinError(11,3.171787);
   setHisttWs0.50493246252099->SetBinError(12,2.924888);
   setHisttWs0.50493246252099->SetBinError(13,2.451442);
   setHisttWs0.50493246252099->SetBinError(14,2.318929);
   setHisttWs0.50493246252099->SetBinError(15,1.966188);
   setHisttWs0.50493246252099->SetBinError(16,1.803533);
   setHisttWs0.50493246252099->SetBinError(17,1.796792);
   setHisttWs0.50493246252099->SetBinError(18,1.508099);
   setHisttWs0.50493246252099->SetBinError(19,1.252511);
   setHisttWs0.50493246252099->SetBinError(20,1.607535);
   setHisttWs0.50493246252099->SetBinError(21,2.415117);
   setHisttWs0.50493246252099->SetEntries(3974);
   setHisttWs0.50493246252099->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.50493246252099->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.50493246252099->SetLineColor(ci);
   setHisttWs0.50493246252099->SetLineWidth(2);
   setHisttWs0.50493246252099->SetMarkerStyle(20);
   setHisttWs0.50493246252099->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.50493246252099->GetXaxis()->SetLabelFont(43);
   setHisttWs0.50493246252099->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.50493246252099->GetXaxis()->SetLabelSize(32);
   setHisttWs0.50493246252099->GetXaxis()->SetTitleSize(35);
   setHisttWs0.50493246252099->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.50493246252099->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.50493246252099->GetXaxis()->SetTitleFont(43);
   setHisttWs0.50493246252099->GetYaxis()->SetNdivisions(506);
   setHisttWs0.50493246252099->GetYaxis()->SetLabelFont(43);
   setHisttWs0.50493246252099->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.50493246252099->GetYaxis()->SetLabelSize(32);
   setHisttWs0.50493246252099->GetYaxis()->SetTitleSize(35);
   setHisttWs0.50493246252099->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.50493246252099->GetYaxis()->SetTitleFont(43);
   setHisttWs0.50493246252099->GetZaxis()->SetLabelFont(43);
   setHisttWs0.50493246252099->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.50493246252099->GetZaxis()->SetLabelSize(32);
   setHisttWs0.50493246252099->GetZaxis()->SetTitleSize(35);
   setHisttWs0.50493246252099->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.50493246252099->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.5049324625,"HIST F");
   Double_t xAxis1615[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistTTJets0.597206599012100 = new TH1F("setHistTTJets0.597206599012100","",20, xAxis1615);
   setHistTTJets0.597206599012100->SetBinContent(1,286.2741);
   setHistTTJets0.597206599012100->SetBinContent(2,980.9097);
   setHistTTJets0.597206599012100->SetBinContent(3,2057.471);
   setHistTTJets0.597206599012100->SetBinContent(4,3275.165);
   setHistTTJets0.597206599012100->SetBinContent(5,3280.301);
   setHistTTJets0.597206599012100->SetBinContent(6,2174.646);
   setHistTTJets0.597206599012100->SetBinContent(7,1348.896);
   setHistTTJets0.597206599012100->SetBinContent(8,931.3369);
   setHistTTJets0.597206599012100->SetBinContent(9,693.8883);
   setHistTTJets0.597206599012100->SetBinContent(10,532.6757);
   setHistTTJets0.597206599012100->SetBinContent(11,409.6599);
   setHistTTJets0.597206599012100->SetBinContent(12,305.0936);
   setHistTTJets0.597206599012100->SetBinContent(13,241.7112);
   setHistTTJets0.597206599012100->SetBinContent(14,195.7337);
   setHistTTJets0.597206599012100->SetBinContent(15,150.7962);
   setHistTTJets0.597206599012100->SetBinContent(16,118.868);
   setHistTTJets0.597206599012100->SetBinContent(17,93.80032);
   setHistTTJets0.597206599012100->SetBinContent(18,76.85324);
   setHistTTJets0.597206599012100->SetBinContent(19,62.51036);
   setHistTTJets0.597206599012100->SetBinContent(20,250.2063);
   setHistTTJets0.597206599012100->SetBinError(0,0.8786326);
   setHistTTJets0.597206599012100->SetBinError(1,4.976556);
   setHistTTJets0.597206599012100->SetBinError(2,9.300461);
   setHistTTJets0.597206599012100->SetBinError(3,13.44478);
   setHistTTJets0.597206599012100->SetBinError(4,17.08473);
   setHistTTJets0.597206599012100->SetBinError(5,17.14266);
   setHistTTJets0.597206599012100->SetBinError(6,13.82913);
   setHistTTJets0.597206599012100->SetBinError(7,10.82049);
   setHistTTJets0.597206599012100->SetBinError(8,8.971684);
   setHistTTJets0.597206599012100->SetBinError(9,7.774717);
   setHistTTJets0.597206599012100->SetBinError(10,6.81339);
   setHistTTJets0.597206599012100->SetBinError(11,5.986636);
   setHistTTJets0.597206599012100->SetBinError(12,5.166304);
   setHistTTJets0.597206599012100->SetBinError(13,4.603241);
   setHistTTJets0.597206599012100->SetBinError(14,4.17953);
   setHistTTJets0.597206599012100->SetBinError(15,3.644472);
   setHistTTJets0.597206599012100->SetBinError(16,3.225811);
   setHistTTJets0.597206599012100->SetBinError(17,2.893488);
   setHistTTJets0.597206599012100->SetBinError(18,2.609688);
   setHistTTJets0.597206599012100->SetBinError(19,2.35313);
   setHistTTJets0.597206599012100->SetBinError(20,2.015403);
   setHistTTJets0.597206599012100->SetBinError(21,4.270097);
   setHistTTJets0.597206599012100->SetEntries(282788);
   setHistTTJets0.597206599012100->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.597206599012100->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.597206599012100->SetLineColor(ci);
   setHistTTJets0.597206599012100->SetLineWidth(2);
   setHistTTJets0.597206599012100->SetMarkerStyle(20);
   setHistTTJets0.597206599012100->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.597206599012100->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.597206599012100->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.597206599012100->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.597206599012100->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.597206599012100->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.597206599012100->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.597206599012100->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.597206599012100->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.597206599012100->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.597206599012100->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.597206599012100->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.597206599012100->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.597206599012100->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.597206599012100->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.597206599012100->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.597206599012100->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.597206599012100->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.597206599012100->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.597206599012100->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.597206599012100->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.59720659901,"HIST F");
   Double_t xAxis1616[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistWJetsMGHF0.9906589969762101 = new TH1F("setHistWJetsMGHF0.9906589969762101","",20, xAxis1616);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(1,20.02848);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(2,76.33482);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(3,72.29285);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(4,79.88967);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(5,76.55653);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(6,65.54785);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(7,63.7883);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(8,45.65995);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(9,45.27755);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(10,23.26938);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(11,30.64138);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(12,25.34167);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(13,16.38396);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(14,12.59684);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(15,21.46039);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(16,18.08426);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(17,12.73847);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(18,10.26554);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(19,3.873549);
   setHistWJetsMGHF0.9906589969762101->SetBinContent(20,30.25476);
   setHistWJetsMGHF0.9906589969762101->SetBinError(1,4.569298);
   setHistWJetsMGHF0.9906589969762101->SetBinError(2,16.49897);
   setHistWJetsMGHF0.9906589969762101->SetBinError(3,8.39445);
   setHistWJetsMGHF0.9906589969762101->SetBinError(4,8.828914);
   setHistWJetsMGHF0.9906589969762101->SetBinError(5,8.649774);
   setHistWJetsMGHF0.9906589969762101->SetBinError(6,8.407733);
   setHistWJetsMGHF0.9906589969762101->SetBinError(7,7.819061);
   setHistWJetsMGHF0.9906589969762101->SetBinError(8,6.464494);
   setHistWJetsMGHF0.9906589969762101->SetBinError(9,6.611267);
   setHistWJetsMGHF0.9906589969762101->SetBinError(10,4.280086);
   setHistWJetsMGHF0.9906589969762101->SetBinError(11,5.6404);
   setHistWJetsMGHF0.9906589969762101->SetBinError(12,4.867348);
   setHistWJetsMGHF0.9906589969762101->SetBinError(13,3.371311);
   setHistWJetsMGHF0.9906589969762101->SetBinError(14,3.290149);
   setHistWJetsMGHF0.9906589969762101->SetBinError(15,4.805628);
   setHistWJetsMGHF0.9906589969762101->SetBinError(16,4.462922);
   setHistWJetsMGHF0.9906589969762101->SetBinError(17,3.338398);
   setHistWJetsMGHF0.9906589969762101->SetBinError(18,3.406813);
   setHistWJetsMGHF0.9906589969762101->SetBinError(19,1.893972);
   setHistWJetsMGHF0.9906589969762101->SetBinError(20,0.6281616);
   setHistWJetsMGHF0.9906589969762101->SetBinError(21,5.111822);
   setHistWJetsMGHF0.9906589969762101->SetEntries(1019);
   setHistWJetsMGHF0.9906589969762101->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.9906589969762101->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.9906589969762101->SetLineColor(ci);
   setHistWJetsMGHF0.9906589969762101->SetLineWidth(2);
   setHistWJetsMGHF0.9906589969762101->SetMarkerStyle(20);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.9906589969762101->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.9906589969762101->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.9906589969762101->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.990658996976,"HIST F");
   Double_t xAxis1617[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistWJetsMGLF0.5304436673722102 = new TH1F("setHistWJetsMGLF0.5304436673722102","",20, xAxis1617);
   setHistWJetsMGLF0.5304436673722102->SetBinContent(2,1.163601);
   setHistWJetsMGLF0.5304436673722102->SetBinContent(7,1.274374);
   setHistWJetsMGLF0.5304436673722102->SetBinContent(17,2.822662);
   setHistWJetsMGLF0.5304436673722102->SetBinContent(20,0.9231444);
   setHistWJetsMGLF0.5304436673722102->SetBinError(2,1.163601);
   setHistWJetsMGLF0.5304436673722102->SetBinError(7,1.274374);
   setHistWJetsMGLF0.5304436673722102->SetBinError(17,2.822662);
   setHistWJetsMGLF0.5304436673722102->SetBinError(21,0.9231444);
   setHistWJetsMGLF0.5304436673722102->SetEntries(4);
   setHistWJetsMGLF0.5304436673722102->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.5304436673722102->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.5304436673722102->SetLineColor(ci);
   setHistWJetsMGLF0.5304436673722102->SetLineWidth(2);
   setHistWJetsMGLF0.5304436673722102->SetMarkerStyle(20);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.5304436673722102->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5304436673722102->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5304436673722102->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.530443667372,"HIST F");
   Double_t xAxis1618[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistDY0.2631684357742103 = new TH1F("setHistDY0.2631684357742103","",20, xAxis1618);
   setHistDY0.2631684357742103->SetBinContent(1,17.32916);
   setHistDY0.2631684357742103->SetBinContent(2,13.14735);
   setHistDY0.2631684357742103->SetBinContent(3,27.90785);
   setHistDY0.2631684357742103->SetBinContent(4,30.87267);
   setHistDY0.2631684357742103->SetBinContent(5,20.78171);
   setHistDY0.2631684357742103->SetBinContent(6,14.76989);
   setHistDY0.2631684357742103->SetBinContent(7,13.93601);
   setHistDY0.2631684357742103->SetBinContent(8,11.21802);
   setHistDY0.2631684357742103->SetBinContent(9,8.833731);
   setHistDY0.2631684357742103->SetBinContent(10,6.951024);
   setHistDY0.2631684357742103->SetBinContent(11,0.01464656);
   setHistDY0.2631684357742103->SetBinContent(12,3.813544);
   setHistDY0.2631684357742103->SetBinContent(13,7.480522);
   setHistDY0.2631684357742103->SetBinContent(20,3.648768);
   setHistDY0.2631684357742103->SetBinError(1,8.094308);
   setHistDY0.2631684357742103->SetBinError(2,7.28376);
   setHistDY0.2631684357742103->SetBinError(3,9.637511);
   setHistDY0.2631684357742103->SetBinError(4,10.75807);
   setHistDY0.2631684357742103->SetBinError(5,8.646563);
   setHistDY0.2631684357742103->SetBinError(6,7.388139);
   setHistDY0.2631684357742103->SetBinError(7,6.760304);
   setHistDY0.2631684357742103->SetBinError(8,6.483761);
   setHistDY0.2631684357742103->SetBinError(9,5.368444);
   setHistDY0.2631684357742103->SetBinError(10,4.938215);
   setHistDY0.2631684357742103->SetBinError(11,0.01464656);
   setHistDY0.2631684357742103->SetBinError(12,3.813544);
   setHistDY0.2631684357742103->SetBinError(13,5.314026);
   setHistDY0.2631684357742103->SetBinError(21,2.51613);
   setHistDY0.2631684357742103->SetEntries(59);
   setHistDY0.2631684357742103->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.2631684357742103->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.2631684357742103->SetLineColor(ci);
   setHistDY0.2631684357742103->SetLineWidth(2);
   setHistDY0.2631684357742103->SetMarkerStyle(20);
   setHistDY0.2631684357742103->GetXaxis()->SetNdivisions(1005);
   setHistDY0.2631684357742103->GetXaxis()->SetLabelFont(43);
   setHistDY0.2631684357742103->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.2631684357742103->GetXaxis()->SetLabelSize(32);
   setHistDY0.2631684357742103->GetXaxis()->SetTitleSize(35);
   setHistDY0.2631684357742103->GetXaxis()->SetTickLength(0.05);
   setHistDY0.2631684357742103->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.2631684357742103->GetXaxis()->SetTitleFont(43);
   setHistDY0.2631684357742103->GetYaxis()->SetNdivisions(506);
   setHistDY0.2631684357742103->GetYaxis()->SetLabelFont(43);
   setHistDY0.2631684357742103->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.2631684357742103->GetYaxis()->SetLabelSize(32);
   setHistDY0.2631684357742103->GetYaxis()->SetTitleSize(35);
   setHistDY0.2631684357742103->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.2631684357742103->GetYaxis()->SetTitleFont(43);
   setHistDY0.2631684357742103->GetZaxis()->SetLabelFont(43);
   setHistDY0.2631684357742103->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.2631684357742103->GetZaxis()->SetLabelSize(32);
   setHistDY0.2631684357742103->GetZaxis()->SetTitleSize(35);
   setHistDY0.2631684357742103->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.2631684357742103->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.263168435774,"HIST F");
   Double_t xAxis1619[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistQCD_DD0.9268232008772104 = new TH1F("setHistQCD_DD0.9268232008772104","",20, xAxis1619);
   setHistQCD_DD0.9268232008772104->SetBinContent(1,7.139432);
   setHistQCD_DD0.9268232008772104->SetBinContent(2,27.48983);
   setHistQCD_DD0.9268232008772104->SetBinContent(3,38.30092);
   setHistQCD_DD0.9268232008772104->SetBinContent(4,32.73181);
   setHistQCD_DD0.9268232008772104->SetBinContent(5,37.8096);
   setHistQCD_DD0.9268232008772104->SetBinContent(6,25.7745);
   setHistQCD_DD0.9268232008772104->SetBinContent(7,23.03102);
   setHistQCD_DD0.9268232008772104->SetBinContent(8,17.43591);
   setHistQCD_DD0.9268232008772104->SetBinContent(9,12.04164);
   setHistQCD_DD0.9268232008772104->SetBinContent(10,9.78905);
   setHistQCD_DD0.9268232008772104->SetBinContent(11,8.491248);
   setHistQCD_DD0.9268232008772104->SetBinContent(12,3.066391);
   setHistQCD_DD0.9268232008772104->SetBinContent(13,7.611524);
   setHistQCD_DD0.9268232008772104->SetBinContent(14,6.135014);
   setHistQCD_DD0.9268232008772104->SetBinContent(15,3.911613);
   setHistQCD_DD0.9268232008772104->SetBinContent(16,3.658622);
   setHistQCD_DD0.9268232008772104->SetBinContent(17,3.437701);
   setHistQCD_DD0.9268232008772104->SetBinContent(18,1.850929);
   setHistQCD_DD0.9268232008772104->SetBinContent(19,2.211799);
   setHistQCD_DD0.9268232008772104->SetBinContent(20,11.89748);
   setHistQCD_DD0.9268232008772104->SetBinError(1,1.843802);
   setHistQCD_DD0.9268232008772104->SetBinError(2,3.598403);
   setHistQCD_DD0.9268232008772104->SetBinError(3,4.386411);
   setHistQCD_DD0.9268232008772104->SetBinError(4,4.307246);
   setHistQCD_DD0.9268232008772104->SetBinError(5,4.438711);
   setHistQCD_DD0.9268232008772104->SetBinError(6,3.702473);
   setHistQCD_DD0.9268232008772104->SetBinError(7,3.343802);
   setHistQCD_DD0.9268232008772104->SetBinError(8,2.878655);
   setHistQCD_DD0.9268232008772104->SetBinError(9,2.416079);
   setHistQCD_DD0.9268232008772104->SetBinError(10,2.16722);
   setHistQCD_DD0.9268232008772104->SetBinError(11,1.968346);
   setHistQCD_DD0.9268232008772104->SetBinError(12,1.278013);
   setHistQCD_DD0.9268232008772104->SetBinError(13,1.842728);
   setHistQCD_DD0.9268232008772104->SetBinError(14,1.603117);
   setHistQCD_DD0.9268232008772104->SetBinError(15,1.333113);
   setHistQCD_DD0.9268232008772104->SetBinError(16,1.269327);
   setHistQCD_DD0.9268232008772104->SetBinError(17,1.201939);
   setHistQCD_DD0.9268232008772104->SetBinError(18,0.8977372);
   setHistQCD_DD0.9268232008772104->SetBinError(19,1.147548);
   setHistQCD_DD0.9268232008772104->SetBinError(20,0.9819271);
   setHistQCD_DD0.9268232008772104->SetBinError(21,2.002867);
   setHistQCD_DD0.9268232008772104->SetEntries(17673);
   setHistQCD_DD0.9268232008772104->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.9268232008772104->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.9268232008772104->SetLineColor(ci);
   setHistQCD_DD0.9268232008772104->SetLineWidth(2);
   setHistQCD_DD0.9268232008772104->SetMarkerStyle(20);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.9268232008772104->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.9268232008772104->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.9268232008772104->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.926823200877,"HIST F");
   ->Draw("same");
   Double_t xAxis1620[21] = {100, 117.5, 135, 152.5, 170, 187.5, 205, 222.5, 240, 257.5, 275, 292.5, 310, 327.5, 345, 362.5, 380, 397.5, 415, 432.5, 450}; 
   
   TH1F *setHistdata0.1992799818672105 = new TH1F("setHistdata0.1992799818672105","",20, xAxis1620);
   setHistdata0.1992799818672105->SetBinContent(1,384);
   setHistdata0.1992799818672105->SetBinContent(2,1193);
   setHistdata0.1992799818672105->SetBinContent(3,2439);
   setHistdata0.1992799818672105->SetBinContent(4,3857);
   setHistdata0.1992799818672105->SetBinContent(5,3815);
   setHistdata0.1992799818672105->SetBinContent(6,2490);
   setHistdata0.1992799818672105->SetBinContent(7,1552);
   setHistdata0.1992799818672105->SetBinContent(8,1127);
   setHistdata0.1992799818672105->SetBinContent(9,847);
   setHistdata0.1992799818672105->SetBinContent(10,611);
   setHistdata0.1992799818672105->SetBinContent(11,514);
   setHistdata0.1992799818672105->SetBinContent(12,369);
   setHistdata0.1992799818672105->SetBinContent(13,317);
   setHistdata0.1992799818672105->SetBinContent(14,257);
   setHistdata0.1992799818672105->SetBinContent(15,183);
   setHistdata0.1992799818672105->SetBinContent(16,170);
   setHistdata0.1992799818672105->SetBinContent(17,115);
   setHistdata0.1992799818672105->SetBinContent(18,94);
   setHistdata0.1992799818672105->SetBinContent(19,94);
   setHistdata0.1992799818672105->SetBinContent(20,371);
   setHistdata0.1992799818672105->SetBinError(0,3.162278);
   setHistdata0.1992799818672105->SetBinError(1,19.33908);
   setHistdata0.1992799818672105->SetBinError(2,34.53983);
   setHistdata0.1992799818672105->SetBinError(3,49.38623);
   setHistdata0.1992799818672105->SetBinError(4,62.10475);
   setHistdata0.1992799818672105->SetBinError(5,61.76569);
   setHistdata0.1992799818672105->SetBinError(6,49.8999);
   setHistdata0.1992799818672105->SetBinError(7,39.39543);
   setHistdata0.1992799818672105->SetBinError(8,33.57082);
   setHistdata0.1992799818672105->SetBinError(9,29.10326);
   setHistdata0.1992799818672105->SetBinError(10,24.71841);
   setHistdata0.1992799818672105->SetBinError(11,22.67157);
   setHistdata0.1992799818672105->SetBinError(12,19.20937);
   setHistdata0.1992799818672105->SetBinError(13,17.80449);
   setHistdata0.1992799818672105->SetBinError(14,16.03122);
   setHistdata0.1992799818672105->SetBinError(15,13.52775);
   setHistdata0.1992799818672105->SetBinError(16,13.0384);
   setHistdata0.1992799818672105->SetBinError(17,10.72381);
   setHistdata0.1992799818672105->SetBinError(18,9.69536);
   setHistdata0.1992799818672105->SetBinError(19,9.69536);
   setHistdata0.1992799818672105->SetBinError(20,8.544004);
   setHistdata0.1992799818672105->SetBinError(21,17.26268);
   setHistdata0.1992799818672105->SetEntries(20799);
   setHistdata0.1992799818672105->SetFillStyle(0);
   setHistdata0.1992799818672105->SetMarkerStyle(20);
   setHistdata0.1992799818672105->SetMarkerSize(1.15);
   setHistdata0.1992799818672105->GetXaxis()->SetNdivisions(1005);
   setHistdata0.1992799818672105->GetXaxis()->SetLabelFont(43);
   setHistdata0.1992799818672105->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.1992799818672105->GetXaxis()->SetLabelSize(32);
   setHistdata0.1992799818672105->GetXaxis()->SetTitleSize(35);
   setHistdata0.1992799818672105->GetXaxis()->SetTickLength(0.05);
   setHistdata0.1992799818672105->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.1992799818672105->GetXaxis()->SetTitleFont(43);
   setHistdata0.1992799818672105->GetYaxis()->SetNdivisions(506);
   setHistdata0.1992799818672105->GetYaxis()->SetLabelFont(43);
   setHistdata0.1992799818672105->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.1992799818672105->GetYaxis()->SetLabelSize(32);
   setHistdata0.1992799818672105->GetYaxis()->SetTitleSize(35);
   setHistdata0.1992799818672105->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.1992799818672105->GetYaxis()->SetTitleFont(43);
   setHistdata0.1992799818672105->GetZaxis()->SetLabelFont(43);
   setHistdata0.1992799818672105->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.1992799818672105->GetZaxis()->SetLabelSize(32);
   setHistdata0.1992799818672105->GetZaxis()->SetTitleSize(35);
   setHistdata0.1992799818672105->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.1992799818672105->GetZaxis()->SetTitleFont(43);
   setHistdata0.1992799818672105->Draw("PESame");
   
   TH2F *axis0.325513029912_copy2106 = new TH2F("axis0.325513029912_copy2106","",50,100,450,50,0,5399.8);
   axis0.325513029912_copy2106->SetDirectory(0);
   axis0.325513029912_copy2106->SetMarkerStyle(20);
   axis0.325513029912_copy2106->GetXaxis()->SetNdivisions(1005);
   axis0.325513029912_copy2106->GetXaxis()->SetLabelFont(43);
   axis0.325513029912_copy2106->GetXaxis()->SetLabelOffset(0.0105);
   axis0.325513029912_copy2106->GetXaxis()->SetLabelSize(0);
   axis0.325513029912_copy2106->GetXaxis()->SetTitleSize(35);
   axis0.325513029912_copy2106->GetXaxis()->SetTickLength(0.025);
   axis0.325513029912_copy2106->GetXaxis()->SetTitleOffset(1.135);
   axis0.325513029912_copy2106->GetXaxis()->SetTitleFont(43);
   axis0.325513029912_copy2106->GetYaxis()->SetTitle("Events / bin");
   axis0.325513029912_copy2106->GetYaxis()->SetNdivisions(506);
   axis0.325513029912_copy2106->GetYaxis()->SetLabelFont(43);
   axis0.325513029912_copy2106->GetYaxis()->SetLabelOffset(0.0087);
   axis0.325513029912_copy2106->GetYaxis()->SetLabelSize(32);
   axis0.325513029912_copy2106->GetYaxis()->SetTitleSize(35);
   axis0.325513029912_copy2106->GetYaxis()->SetTickLength(0.02631579);
   axis0.325513029912_copy2106->GetYaxis()->SetTitleOffset(1.32);
   axis0.325513029912_copy2106->GetYaxis()->SetTitleFont(43);
   axis0.325513029912_copy2106->GetZaxis()->SetLabelFont(43);
   axis0.325513029912_copy2106->GetZaxis()->SetLabelOffset(0.0087);
   axis0.325513029912_copy2106->GetZaxis()->SetLabelSize(32);
   axis0.325513029912_copy2106->GetZaxis()->SetTitleSize(35);
   axis0.325513029912_copy2106->GetZaxis()->SetTitleOffset(1.32);
   axis0.325513029912_copy2106->GetZaxis()->SetTitleFont(43);
   axis0.325513029912_copy2106->Draw("sameaxis");
   
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
   AText = pt->AddText("e#kern[-0.5]{ }+#kern[-0.5]{ }3j2t, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.199279981867","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.926823200877","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.263168435774","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.530443667372","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.990658996976","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.59720659901","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.5049324625","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.788990174878","#it{t}-channel","F");

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
   cvelectron_3j2t_top_mass_qcdnone0.130924496925_2->Modified();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->cd();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->Modified();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->cd();
   cvelectron_3j2t_top_mass_qcdnone0.130924496925->SetSelected(cvelectron_3j2t_top_mass_qcdnone0.130924496925);
}
