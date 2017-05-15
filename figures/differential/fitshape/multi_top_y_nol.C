void /home/users/m/k/mkomm/Diff13/analysis/unfolding/result/nominal/multi_top_y_nol()
{
//=========Macro generated from canvas: cvMulti0.984295447508/
//=========  (Mon May 15 15:02:17 2017) by ROOT version6.02/05
   TCanvas *cvMulti0.984295447508 = new TCanvas("cvMulti0.984295447508", "",0,0,800,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvMulti0.984295447508->SetHighLightColor(2);
   cvMulti0.984295447508->Range(-0.5419355,-0.2962025,3.329032,1.982278);
   cvMulti0.984295447508->SetFillColor(0);
   cvMulti0.984295447508->SetBorderMode(0);
   cvMulti0.984295447508->SetBorderSize(2);
   cvMulti0.984295447508->SetTickx(1);
   cvMulti0.984295447508->SetTicky(1);
   cvMulti0.984295447508->SetLeftMargin(0.14);
   cvMulti0.984295447508->SetRightMargin(0.24);
   cvMulti0.984295447508->SetTopMargin(0.08);
   cvMulti0.984295447508->SetBottomMargin(0.13);
   cvMulti0.984295447508->SetFrameFillStyle(0);
   cvMulti0.984295447508->SetFrameLineWidth(0);
   cvMulti0.984295447508->SetFrameBorderMode(0);
   cvMulti0.984295447508->SetFrameBorderSize(0);
   cvMulti0.984295447508->SetFrameFillStyle(0);
   cvMulti0.984295447508->SetFrameLineWidth(0);
   cvMulti0.984295447508->SetFrameBorderMode(0);
   cvMulti0.984295447508->SetFrameBorderSize(0);
   
   TH2F *axis0.09336527505115 = new TH2F("axis0.09336527505115","",50,0,2.4,50,0,1.8);
   axis0.09336527505115->SetLineStyle(0);
   axis0.09336527505115->SetMarkerStyle(20);
   axis0.09336527505115->SetMarkerSize(0.16);
   axis0.09336527505115->GetXaxis()->SetTitle("top quark |y|");
   axis0.09336527505115->GetXaxis()->SetNdivisions(1005);
   axis0.09336527505115->GetXaxis()->SetLabelFont(43);
   axis0.09336527505115->GetXaxis()->SetLabelOffset(0.0077);
   axis0.09336527505115->GetXaxis()->SetLabelSize(32);
   axis0.09336527505115->GetXaxis()->SetTitleSize(35);
   axis0.09336527505115->GetXaxis()->SetTickLength(0.04032258);
   axis0.09336527505115->GetXaxis()->SetTitleOffset(1.15);
   axis0.09336527505115->GetXaxis()->SetTitleFont(43);
   axis0.09336527505115->GetYaxis()->SetTitle(" Scale factor");
   axis0.09336527505115->GetYaxis()->SetNdivisions(512);
   axis0.09336527505115->GetYaxis()->SetLabelFont(43);
   axis0.09336527505115->GetYaxis()->SetLabelOffset(0.0077);
   axis0.09336527505115->GetYaxis()->SetLabelSize(32);
   axis0.09336527505115->GetYaxis()->SetTitleSize(35);
   axis0.09336527505115->GetYaxis()->SetTickLength(0.03164557);
   axis0.09336527505115->GetYaxis()->SetTitleOffset(1.3);
   axis0.09336527505115->GetYaxis()->SetTitleFont(43);
   axis0.09336527505115->GetZaxis()->SetLabelFont(43);
   axis0.09336527505115->GetZaxis()->SetLabelOffset(0.0077);
   axis0.09336527505115->GetZaxis()->SetLabelSize(32);
   axis0.09336527505115->GetZaxis()->SetTitleSize(34);
   axis0.09336527505115->GetZaxis()->SetTitleOffset(1.3);
   axis0.09336527505115->GetZaxis()->SetTitleFont(43);
   axis0.09336527505115->Draw("AXIS");
   
   TF1 *tf13 = new TF1("tf1","1",0,2.4);
   tf13->SetFillColor(19);
   tf13->SetFillStyle(0);
   tf13->SetMarkerStyle(20);
   tf13->SetMarkerSize(0.16);
   tf13->SetLineWidth(1);
   tf13->GetXaxis()->SetNdivisions(505);
   tf13->GetXaxis()->SetLabelFont(43);
   tf13->GetXaxis()->SetLabelOffset(0.0077);
   tf13->GetXaxis()->SetLabelSize(32);
   tf13->GetXaxis()->SetTitleSize(34);
   tf13->GetXaxis()->SetTickLength(0.05);
   tf13->GetXaxis()->SetTitleOffset(1.15);
   tf13->GetXaxis()->SetTitleFont(43);
   tf13->GetYaxis()->SetNdivisions(512);
   tf13->GetYaxis()->SetLabelFont(43);
   tf13->GetYaxis()->SetLabelOffset(0.0077);
   tf13->GetYaxis()->SetLabelSize(32);
   tf13->GetYaxis()->SetTitleSize(34);
   tf13->GetYaxis()->SetTitleOffset(1.3);
   tf13->GetYaxis()->SetTitleFont(43);
   tf13->Draw("LSame");
   TMarker *marker = new TMarker(0.0892,0.9606917,20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   TLine *line = new TLine(0.0892,0.9359605,0.0892,0.9854228);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.2,0,0.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.0892,0.9606917,0.3142,0.9554859);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.3142,0.9554859,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.3142,0.9323344,0.3142,0.9786374);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.45,0,0.45,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.3142,0.9554859,0.5642,0.9562376);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.5642,0.9562376,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.5642,0.9291835,0.5642,0.9832918);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7,0,0.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.5642,0.9562376,0.8142,0.940729);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.8142,0.940729,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.8142,0.9117791,0.8142,0.9696789);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.95,0,0.95,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.8142,0.940729,1.0642,1.028565);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.0642,1.028565,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.0642,0.9987074,1.0642,1.058422);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.2,0,1.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.0642,1.028565,1.3392,1.024151);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.3392,1.024151,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.3392,0.9916412,1.3392,1.05666);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.5,0,1.5,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.3392,1.024151,1.5892,0.9990193);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.5892,0.9990193,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.5892,0.9494996,1.5892,1.048539);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.7,0,1.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.5892,0.9990193,2.0392,0.9212695);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(2.0392,0.9212695,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(2.0392,0.8767255,2.0392,0.9658136);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.4,0,2.4,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(0.1036,1.197582,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.1036,1.070044,0.1036,1.325121);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.2,0,0.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.1036,1.197582,0.3286,1.07941);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.3286,1.07941,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.3286,0.9690778,0.3286,1.189742);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.45,0,0.45,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.3286,1.07941,0.5786,1.238685);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.5786,1.238685,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.5786,1.103282,0.5786,1.374089);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7,0,0.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.5786,1.238685,0.8286,1.070291);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.8286,1.070291,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.8286,0.9410973,0.8286,1.199485);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.95,0,0.95,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.8286,1.070291,1.0786,0.7963992);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.0786,0.7963992,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.0786,0.6813629,1.0786,0.9114354);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.2,0,1.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.0786,0.7963992,1.3536,0.9233731);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.3536,0.9233731,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.3536,0.7879375,1.3536,1.058809);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.5,0,1.5,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.3536,0.9233731,1.6036,1.066334);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.6036,1.066334,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.6036,0.8539173,1.6036,1.278751);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.7,0,1.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.6036,1.066334,2.0536,1.283384);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(2.0536,1.283384,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(2.0536,1.067281,2.0536,1.499488);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.4,0,2.4,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(0.118,0.1968883,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.118,0.1722209,0.118,0.2215558);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.2,0,0.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.118,0.1968883,0.343,0.2348717);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.343,0.2348717,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.343,0.2130683,0.343,0.2566752);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.45,0,0.45,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.343,0.2348717,0.593,0.2059685);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.593,0.2059685,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.593,0.1802414,0.593,0.2316957);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7,0,0.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.593,0.2059685,0.843,0.2345659);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.843,0.2345659,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.843,0.208081,0.843,0.2610507);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.95,0,0.95,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.843,0.2345659,1.093,0.3094085);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.093,0.3094085,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.093,0.2799161,1.093,0.3389009);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.2,0,1.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.093,0.3094085,1.368,0.347837);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.368,0.347837,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.368,0.2999248,1.368,0.3957492);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.5,0,1.5,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.368,0.347837,1.618,0.5309299);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.618,0.5309299,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.618,0.4081874,1.618,0.6536723);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.7,0,1.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.618,0.5309299,2.068,0.2949066);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(2.068,0.2949066,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(2.068,0,2.068,0.7323252);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.4,0,2.4,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(0.1252,0.9784018,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.1252,0.8521009,0.1252,1.104703);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.2,0,0.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.1252,0.9784018,0.3502,0.9447267);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.3502,0.9447267,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.3502,0.8411522,0.3502,1.048301);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.45,0,0.45,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.3502,0.9447267,0.6002,0.7547158);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.6002,0.7547158,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.6002,0.6180429,0.6002,0.8913887);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7,0,0.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6002,0.7547158,0.8502,1.12315);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(0.8502,1.12315,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(0.8502,0.9840732,0.8502,1.262226);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.95,0,0.95,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.8502,1.12315,1.1002,1.107947);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.1002,1.107947,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.1002,0.9620515,1.1002,1.253843);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.2,0,1.2,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.1002,1.107947,1.3752,0.6245485);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.3752,0.6245485,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.3752,0.462954,1.3752,0.786143);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.5,0,1.5,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.3752,0.6245485,1.6252,0.8379717);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(1.6252,0.8379717,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(1.6252,0.5506004,1.6252,1.125343);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.7,0,1.7,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.6252,0.8379717,2.0752,0.3802364);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(2.0752,0.3802364,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(2.0752,0.06910222,2.0752,0.6913706);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.4,0,2.4,1.8);
   line->SetLineStyle(2);
   line->Draw();
   
   TH2F *axis0.0933652750511_copy6 = new TH2F("axis0.0933652750511_copy6","",50,0,2.4,50,0,1.8);
   axis0.0933652750511_copy6->SetDirectory(0);
   axis0.0933652750511_copy6->SetLineStyle(0);
   axis0.0933652750511_copy6->SetMarkerStyle(20);
   axis0.0933652750511_copy6->SetMarkerSize(0.16);
   axis0.0933652750511_copy6->GetXaxis()->SetTitle("top quark |y|");
   axis0.0933652750511_copy6->GetXaxis()->SetNdivisions(1005);
   axis0.0933652750511_copy6->GetXaxis()->SetLabelFont(43);
   axis0.0933652750511_copy6->GetXaxis()->SetLabelOffset(0.0077);
   axis0.0933652750511_copy6->GetXaxis()->SetLabelSize(32);
   axis0.0933652750511_copy6->GetXaxis()->SetTitleSize(35);
   axis0.0933652750511_copy6->GetXaxis()->SetTickLength(0.04032258);
   axis0.0933652750511_copy6->GetXaxis()->SetTitleOffset(1.15);
   axis0.0933652750511_copy6->GetXaxis()->SetTitleFont(43);
   axis0.0933652750511_copy6->GetYaxis()->SetTitle(" Scale factor");
   axis0.0933652750511_copy6->GetYaxis()->SetNdivisions(512);
   axis0.0933652750511_copy6->GetYaxis()->SetLabelFont(43);
   axis0.0933652750511_copy6->GetYaxis()->SetLabelOffset(0.0077);
   axis0.0933652750511_copy6->GetYaxis()->SetLabelSize(32);
   axis0.0933652750511_copy6->GetYaxis()->SetTitleSize(35);
   axis0.0933652750511_copy6->GetYaxis()->SetTickLength(0.03164557);
   axis0.0933652750511_copy6->GetYaxis()->SetTitleOffset(1.3);
   axis0.0933652750511_copy6->GetYaxis()->SetTitleFont(43);
   axis0.0933652750511_copy6->GetZaxis()->SetLabelFont(43);
   axis0.0933652750511_copy6->GetZaxis()->SetLabelOffset(0.0077);
   axis0.0933652750511_copy6->GetZaxis()->SetLabelSize(32);
   axis0.0933652750511_copy6->GetZaxis()->SetTitleSize(34);
   axis0.0933652750511_copy6->GetZaxis()->SetTitleOffset(1.3);
   axis0.0933652750511_copy6->GetZaxis()->SetTitleFont(43);
   axis0.0933652750511_copy6->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.14,0.94,0.14,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(34);
   TText *AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.24,0.94,0.24,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(53);
   pt->SetTextSize(34);
   AText = pt->AddText("Preliminary");
   pt->Draw();
   cvMulti0.984295447508->Modified();
   cvMulti0.984295447508->cd();
   cvMulti0.984295447508->SetSelected(cvMulti0.984295447508);
}
