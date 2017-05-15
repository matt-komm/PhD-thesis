void /home/users/m/k/mkomm/Diff13/analysis/unfolding/result/nominal/multi_top_pt_nol()
{
//=========Macro generated from canvas: cvMulti0.0111371287873/
//=========  (Mon May 15 15:02:17 2017) by ROOT version6.02/05
   TCanvas *cvMulti0.0111371287873 = new TCanvas("cvMulti0.0111371287873", "",0,0,800,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvMulti0.0111371287873->SetHighLightColor(2);
   cvMulti0.0111371287873->Range(-67.74194,-0.2962025,416.129,1.982278);
   cvMulti0.0111371287873->SetFillColor(0);
   cvMulti0.0111371287873->SetBorderMode(0);
   cvMulti0.0111371287873->SetBorderSize(2);
   cvMulti0.0111371287873->SetTickx(1);
   cvMulti0.0111371287873->SetTicky(1);
   cvMulti0.0111371287873->SetLeftMargin(0.14);
   cvMulti0.0111371287873->SetRightMargin(0.24);
   cvMulti0.0111371287873->SetTopMargin(0.08);
   cvMulti0.0111371287873->SetBottomMargin(0.13);
   cvMulti0.0111371287873->SetFrameFillStyle(0);
   cvMulti0.0111371287873->SetFrameLineWidth(0);
   cvMulti0.0111371287873->SetFrameBorderMode(0);
   cvMulti0.0111371287873->SetFrameBorderSize(0);
   cvMulti0.0111371287873->SetFrameFillStyle(0);
   cvMulti0.0111371287873->SetFrameLineWidth(0);
   cvMulti0.0111371287873->SetFrameBorderMode(0);
   cvMulti0.0111371287873->SetFrameBorderSize(0);
   
   TH2F *axis0.5523697814531 = new TH2F("axis0.5523697814531","",50,0,300,50,0,1.8);
   axis0.5523697814531->SetLineStyle(0);
   axis0.5523697814531->SetMarkerStyle(20);
   axis0.5523697814531->SetMarkerSize(0.16);
   axis0.5523697814531->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axis0.5523697814531->GetXaxis()->SetNdivisions(1005);
   axis0.5523697814531->GetXaxis()->SetLabelFont(43);
   axis0.5523697814531->GetXaxis()->SetLabelOffset(0.0077);
   axis0.5523697814531->GetXaxis()->SetLabelSize(32);
   axis0.5523697814531->GetXaxis()->SetTitleSize(35);
   axis0.5523697814531->GetXaxis()->SetTickLength(0.04032258);
   axis0.5523697814531->GetXaxis()->SetTitleOffset(1.15);
   axis0.5523697814531->GetXaxis()->SetTitleFont(43);
   axis0.5523697814531->GetYaxis()->SetTitle(" Scale factor");
   axis0.5523697814531->GetYaxis()->SetNdivisions(512);
   axis0.5523697814531->GetYaxis()->SetLabelFont(43);
   axis0.5523697814531->GetYaxis()->SetLabelOffset(0.0077);
   axis0.5523697814531->GetYaxis()->SetLabelSize(32);
   axis0.5523697814531->GetYaxis()->SetTitleSize(35);
   axis0.5523697814531->GetYaxis()->SetTickLength(0.03164557);
   axis0.5523697814531->GetYaxis()->SetTitleOffset(1.3);
   axis0.5523697814531->GetYaxis()->SetTitleFont(43);
   axis0.5523697814531->GetZaxis()->SetLabelFont(43);
   axis0.5523697814531->GetZaxis()->SetLabelOffset(0.0077);
   axis0.5523697814531->GetZaxis()->SetLabelSize(32);
   axis0.5523697814531->GetZaxis()->SetTitleSize(34);
   axis0.5523697814531->GetZaxis()->SetTitleOffset(1.3);
   axis0.5523697814531->GetZaxis()->SetTitleFont(43);
   axis0.5523697814531->Draw("AXIS");
   
   TF1 *tf11 = new TF1("tf1","1",0,300);
   tf11->SetFillColor(19);
   tf11->SetFillStyle(0);
   tf11->SetMarkerStyle(20);
   tf11->SetMarkerSize(0.16);
   tf11->SetLineWidth(1);
   tf11->GetXaxis()->SetNdivisions(505);
   tf11->GetXaxis()->SetLabelFont(43);
   tf11->GetXaxis()->SetLabelOffset(0.0077);
   tf11->GetXaxis()->SetLabelSize(32);
   tf11->GetXaxis()->SetTitleSize(34);
   tf11->GetXaxis()->SetTickLength(0.05);
   tf11->GetXaxis()->SetTitleOffset(1.15);
   tf11->GetXaxis()->SetTitleFont(43);
   tf11->GetYaxis()->SetNdivisions(512);
   tf11->GetYaxis()->SetLabelFont(43);
   tf11->GetYaxis()->SetLabelOffset(0.0077);
   tf11->GetYaxis()->SetLabelSize(32);
   tf11->GetYaxis()->SetTitleSize(34);
   tf11->GetYaxis()->SetTitleOffset(1.3);
   tf11->GetYaxis()->SetTitleFont(43);
   tf11->Draw("LSame");
   TMarker *marker = new TMarker(18.65,0.9689853,20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   TLine *line = new TLine(18.65,0.9412582,18.65,0.9967124);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(40,0,40,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(18.65,0.9689853,43.65,0.9199426);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(43.65,0.9199426,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(43.65,0.8842046,43.65,0.9556805);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,0,50,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(43.65,0.9199426,58.65,0.9735351);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(58.65,0.9735351,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(58.65,0.9458472,58.65,1.001223);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(70,0,70,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(58.65,0.9735351,76.15,0.908149);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(76.15,0.908149,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(76.15,0.8785302,76.15,0.9377678);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(85,0,85,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(76.15,0.908149,96.15,0.917063);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(96.15,0.917063,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(96.15,0.8921449,96.15,0.9419812);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(110,0,110,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(96.15,0.917063,123.65,0.9217224);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(123.65,0.9217224,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(123.65,0.8912765,123.65,0.9521683);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(140,0,140,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(123.65,0.9217224,158.65,1.017637);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(158.65,1.017637,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(158.65,0.981022,158.65,1.054251);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(180,0,180,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(158.65,1.017637,238.65,1.033679);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(238.65,1.033679,20);

   ci = TColor::GetColor("#f9910c");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(238.65,0.9945765,238.65,1.072781);

   ci = TColor::GetColor("#f9910c");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(300,0,300,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(20.45,1.07309,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(20.45,0.9446686,20.45,1.201512);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(40,0,40,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(20.45,1.07309,45.45,0.8750181);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(45.45,0.8750181,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(45.45,0.7568283,45.45,0.993208);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,0,50,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(45.45,0.8750181,60.45,1.106562);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(60.45,1.106562,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(60.45,0.9938435,60.45,1.219281);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(70,0,70,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(60.45,1.106562,77.95,1.066924);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(77.95,1.066924,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(77.95,0.9499698,77.95,1.183878);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(85,0,85,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(77.95,1.066924,97.95,1.082428);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(97.95,1.082428,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(97.95,0.9688297,97.95,1.196026);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(110,0,110,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(97.95,1.082428,125.45,1.348039);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(125.45,1.348039,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(125.45,1.152137,125.45,1.543941);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(140,0,140,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(125.45,1.348039,160.45,1.151341);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(160.45,1.151341,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(160.45,0.9531536,160.45,1.349527);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(180,0,180,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(160.45,1.151341,240.45,1.568216);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(240.45,1.568216,20);

   ci = TColor::GetColor("#0a9128");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(240.45,1.368833,240.45,1.767599);

   ci = TColor::GetColor("#0a9128");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(300,0,300,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(22.25,0.1771921,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(22.25,0.1560794,22.25,0.1983048);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(40,0,40,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(22.25,0.1771921,47.25,0.2511829);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(47.25,0.2511829,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(47.25,0.2215021,47.25,0.2808637);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,0,50,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(47.25,0.2511829,62.25,0.2692973);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(62.25,0.2692973,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(62.25,0.2467515,62.25,0.2918431);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(70,0,70,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(62.25,0.2692973,79.75,0.2705517);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(79.75,0.2705517,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(79.75,0.2452448,79.75,0.2958586);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(85,0,85,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(79.75,0.2705517,99.75,0.2554152);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(99.75,0.2554152,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(99.75,0.2312721,99.75,0.2795583);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(110,0,110,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(99.75,0.2554152,127.25,0.2256824);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(127.25,0.2256824,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(127.25,0.1833485,127.25,0.2680163);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(140,0,140,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(127.25,0.2256824,162.25,0.1271733);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(162.25,0.1271733,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(162.25,0.0455884,162.25,0.2087582);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(180,0,180,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(162.25,0.1271733,242.25,0.2482599);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(242.25,0.2482599,20);

   ci = TColor::GetColor("#999999");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(242.25,0.08702152,242.25,0.4094982);

   ci = TColor::GetColor("#999999");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(300,0,300,1.8);
   line->SetLineStyle(2);
   line->Draw();
   marker = new TMarker(23.15,0.4346186,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(23.15,0.3043486,23.15,0.5648886);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(40,0,40,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(23.15,0.4346186,48.15,0.9527072);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(48.15,0.9527072,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(48.15,0.8095005,48.15,1.095914);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,0,50,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(48.15,0.9527072,63.15,0.762189);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(63.15,0.762189,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(63.15,0.6584995,63.15,0.8658785);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(70,0,70,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(63.15,0.762189,80.65,1.137596);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(80.65,1.137596,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(80.65,0.9999782,80.65,1.275213);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(85,0,85,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(80.65,1.137596,100.65,1.131081);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(100.65,1.131081,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(100.65,1.002457,100.65,1.259705);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(110,0,110,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(100.65,1.131081,128.15,1.20413);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(128.15,1.20413,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(128.15,1.006321,128.15,1.401939);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(140,0,140,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(128.15,1.20413,163.15,1.093577);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(163.15,1.093577,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(163.15,0.8589202,163.15,1.328235);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(180,0,180,1.8);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(163.15,1.093577,243.15,1.075824);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   marker = new TMarker(243.15,1.075824,20);

   ci = TColor::GetColor("#ff0505");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   line = new TLine(243.15,0.7454883,243.15,1.40616);

   ci = TColor::GetColor("#ff0505");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(300,0,300,1.8);
   line->SetLineStyle(2);
   line->Draw();
   
   TH2F *axis0.552369781453_copy2 = new TH2F("axis0.552369781453_copy2","",50,0,300,50,0,1.8);
   axis0.552369781453_copy2->SetDirectory(0);
   axis0.552369781453_copy2->SetLineStyle(0);
   axis0.552369781453_copy2->SetMarkerStyle(20);
   axis0.552369781453_copy2->SetMarkerSize(0.16);
   axis0.552369781453_copy2->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axis0.552369781453_copy2->GetXaxis()->SetNdivisions(1005);
   axis0.552369781453_copy2->GetXaxis()->SetLabelFont(43);
   axis0.552369781453_copy2->GetXaxis()->SetLabelOffset(0.0077);
   axis0.552369781453_copy2->GetXaxis()->SetLabelSize(32);
   axis0.552369781453_copy2->GetXaxis()->SetTitleSize(35);
   axis0.552369781453_copy2->GetXaxis()->SetTickLength(0.04032258);
   axis0.552369781453_copy2->GetXaxis()->SetTitleOffset(1.15);
   axis0.552369781453_copy2->GetXaxis()->SetTitleFont(43);
   axis0.552369781453_copy2->GetYaxis()->SetTitle(" Scale factor");
   axis0.552369781453_copy2->GetYaxis()->SetNdivisions(512);
   axis0.552369781453_copy2->GetYaxis()->SetLabelFont(43);
   axis0.552369781453_copy2->GetYaxis()->SetLabelOffset(0.0077);
   axis0.552369781453_copy2->GetYaxis()->SetLabelSize(32);
   axis0.552369781453_copy2->GetYaxis()->SetTitleSize(35);
   axis0.552369781453_copy2->GetYaxis()->SetTickLength(0.03164557);
   axis0.552369781453_copy2->GetYaxis()->SetTitleOffset(1.3);
   axis0.552369781453_copy2->GetYaxis()->SetTitleFont(43);
   axis0.552369781453_copy2->GetZaxis()->SetLabelFont(43);
   axis0.552369781453_copy2->GetZaxis()->SetLabelOffset(0.0077);
   axis0.552369781453_copy2->GetZaxis()->SetLabelSize(32);
   axis0.552369781453_copy2->GetZaxis()->SetTitleSize(34);
   axis0.552369781453_copy2->GetZaxis()->SetTitleOffset(1.3);
   axis0.552369781453_copy2->GetZaxis()->SetTitleFont(43);
   axis0.552369781453_copy2->Draw("sameaxis");
   
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
   cvMulti0.0111371287873->Modified();
   cvMulti0.0111371287873->cd();
   cvMulti0.0111371287873->SetSelected(cvMulti0.0111371287873);
}
