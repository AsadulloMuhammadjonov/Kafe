object FormTolov: TFormTolov
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormTolov'
  ClientHeight = 624
  ClientWidth = 1022
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Candara'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 26
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1022
    Height = 89
    Align = alTop
    TabOrder = 0
    ExplicitLeft = -1
    ExplicitTop = -5
    object Label7: TLabel
      Left = 1
      Top = 0
      Width = 11
      Height = 26
      Caption = '0'
    end
    object Label12: TLabel
      Left = 408
      Top = 0
      Width = 11
      Height = 26
      Caption = '0'
    end
    object Button8: TButton
      Left = 858
      Top = 1
      Width = 163
      Height = 87
      Align = alRight
      Caption = 'Chiqish'
      TabOrder = 0
      OnClick = Button8Click
      ExplicitLeft = 832
    end
  end
  object FlowPanel1: TFlowPanel
    Left = 684
    Top = 89
    Width = 338
    Height = 535
    Align = alRight
    TabOrder = 1
    object Button5: TButton
      Left = 1
      Top = 1
      Width = 336
      Height = 64
      Caption = 'Tartiblash'
      TabOrder = 0
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 1
      Top = 65
      Width = 162
      Height = 75
      Caption = 'Button6'
      TabOrder = 1
      Visible = False
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 163
      Top = 65
      Width = 160
      Height = 75
      Caption = 'Button7'
      TabOrder = 2
      Visible = False
      OnClick = Button7Click
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 89
    Width = 681
    Height = 535
    Align = alLeft
    TabOrder = 2
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 679
      Height = 361
      Align = alTop
      DataSource = DataModule2.DataSourceVaqtinchasavdo
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
      ParentFont = False
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -24
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = [fsBold]
      OnDrawColumnCell = DBGrid1DrawColumnCell
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'id'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Tov_id'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Tov_nomi'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Caption = 'Nomi'
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Width = 184
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Narxi'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Width = 147
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Miqdor'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Caption = 'Soni'
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Width = 138
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Summa'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Width = 189
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Kategoriya'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'JamiSumma'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Umsumma'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Q_X_Narxi'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Band'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Tolandi'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Fish'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -21
          Font.Name = 'Candara'
          Font.Style = [fsBold]
          Title.Alignment = taCenter
          Title.Font.Charset = RUSSIAN_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -21
          Title.Font.Name = 'Candara'
          Title.Font.Style = [fsBold]
          Visible = False
        end>
    end
    object Panel3: TPanel
      Left = 1
      Top = 296
      Width = 679
      Height = 238
      Align = alBottom
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Candara'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      ExplicitLeft = 2
      ExplicitWidth = 711
      object SpeedButton1: TSpeedButton
        Left = 24
        Top = 11
        Width = 121
        Height = 59
        Caption = '+'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = SpeedButton1Click
      end
      object SpeedButton2: TSpeedButton
        Left = 176
        Top = 10
        Width = 121
        Height = 59
        Caption = '-'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = SpeedButton2Click
      end
      object Label1: TLabel
        Left = 186
        Top = 75
        Width = 134
        Height = 23
        Caption = 'Umumiy Summa'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label2: TLabel
        Left = 186
        Top = 106
        Width = 107
        Height = 23
        Caption = 'Xizmat Xaqqi'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label3: TLabel
        Left = 186
        Top = 137
        Width = 103
        Height = 23
        Caption = 'Jami Summa'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label4: TLabel
        Left = 390
        Top = 75
        Width = 10
        Height = 23
        Caption = '0'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label5: TLabel
        Left = 423
        Top = 106
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label6: TLabel
        Left = 390
        Top = 137
        Width = 10
        Height = 23
        Caption = '0'
      end
      object SpeedButton3: TSpeedButton
        Left = 328
        Top = 10
        Width = 121
        Height = 59
        Caption = 'O'#39'chirish'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = SpeedButton3Click
      end
      object Label8: TLabel
        Left = 624
        Top = 64
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label9: TLabel
        Left = 613
        Top = 114
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label10: TLabel
        Left = 611
        Top = 145
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label11: TLabel
        Left = 640
        Top = 48
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label13: TLabel
        Left = 390
        Top = 106
        Width = 10
        Height = 23
        Caption = '0'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label14: TLabel
        Left = 651
        Top = 127
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label15: TLabel
        Left = 613
        Top = 95
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label16: TLabel
        Left = 80
        Top = 136
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object Label17: TLabel
        Left = 80
        Top = 112
        Width = 10
        Height = 23
        Caption = '0'
        Visible = False
      end
      object SpeedButton4: TSpeedButton
        Left = 479
        Top = 8
        Width = 198
        Height = 61
        Caption = 'O'#39'zi Bilan'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = SpeedButton4Click
      end
      object Button1: TButton
        Left = -1
        Top = 176
        Width = 166
        Height = 60
        Caption = 'Stol Almashtirish'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        WordWrap = True
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 171
        Top = 176
        Width = 170
        Height = 60
        Caption = 'Oshpazga Jo'#39'natish'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        WordWrap = True
        OnClick = Button2Click
      end
      object Button3: TButton
        Left = 347
        Top = 176
        Width = 154
        Height = 60
        Caption = 'Stol Xisobi'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Candara'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        OnClick = Button3Click
      end
      object Button4: TButton
        Left = 507
        Top = 174
        Width = 170
        Height = 60
        Caption = 'To'#39'lash'
        TabOrder = 3
        OnClick = Button4Click
      end
    end
  end
  object frxReport4: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44527.631223148100000000
    ReportOptions.LastChange = 44527.631223148100000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 432
    Top = 512
    Datasets = <
      item
        DataSet = frxDBDataset4
        DataSetName = 'frxDBDataset4'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 57.500000000000000000
      PaperHeight = 150.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Height = 101.063080000000000000
        ParentFont = False
        Top = 18.897650000000000000
        Width = 141.732375000000000000
        object Memo1: TfrxMemoView
          Left = -23.220470000000000000
          Top = 74.606370000000000000
          Width = 98.267780000000000000
          Height = 26.456710000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -20
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1080)
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          Left = 74.590600000000000000
          Top = 74.606370000000000000
          Width = 60.472480000000000000
          Height = 26.456710000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1086#1085#1080)
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = 11.236240000000000000
          Top = 18.897650000000000000
          Width = 86.929190000000000000
          Height = 26.456710000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            #1041#1091#1102#1088#1090#1084#1072)
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = []
        Height = 26.456710000000000000
        ParentFont = False
        Top = 181.417440000000000000
        Width = 141.732375000000000000
        DataSet = frxDBDataset4
        DataSetName = 'frxDBDataset4'
        RowCount = 0
        object frxDBDataset4Miqdor: TfrxMemoView
          Left = 73.811070000000000000
          Top = 5.338590000000000000
          Width = 60.472440940000000000
          Height = 18.897650000000000000
          DataField = 'Miqdor'
          DataSet = frxDBDataset4
          DataSetName = 'frxDBDataset4'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset4."Miqdor"]')
          ParentFont = False
        end
        object frxDBDataset4Nomi: TfrxMemoView
          Left = -24.000000000000000000
          Top = 5.779530000000000000
          Width = 98.267736060000000000
          Height = 18.897650000000000000
          DataField = 'Nomi'
          DataSet = frxDBDataset4
          DataSetName = 'frxDBDataset4'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset4."Nomi"]')
          ParentFont = False
        end
      end
      object Footer1: TfrxFooter
        FillType = ftBrush
        Height = 41.574830000000000000
        Top = 230.551330000000000000
        Width = 141.732375000000000000
        object Time: TfrxMemoView
          Left = 71.590600000000000000
          Top = 3.472480000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[Time]')
          ParentFont = False
        end
        object Date: TfrxMemoView
          Left = -17.338590000000000000
          Top = 3.779530000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[Date]')
          ParentFont = False
        end
      end
    end
  end
  object frxDBDataset4: TfrxDBDataset
    UserName = 'frxDBDataset4'
    CloseDataSource = False
    DataSet = DataModule2.ADOQueryOshpaz
    BCDToCurrency = False
    Left = 440
    Top = 464
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44516.454208136600000000
    ReportOptions.LastChange = 44516.454208136600000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 488
    Top = 516
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      PaperWidth = 85.000000000000000000
      PaperHeight = 120.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 83.929190000000000000
        Top = 18.897650000000000000
        Width = 245.669450000000000000
        object Memo1: TfrxMemoView
          Left = 3.779530000000000000
          Top = 56.692950000000000000
          Width = 105.826840000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1080)
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          Left = 124.724490000000000000
          Top = 56.692950000000000000
          Width = 117.165430000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1086#1085#1080)
          ParentFont = False
        end
        object Line1: TfrxLineView
          Top = 52.913420000000000000
          Width = 260.787570000000000000
          Color = clBlack
          Frame.Typ = [ftTop]
        end
        object Line2: TfrxLineView
          Left = 117.165430000000000000
          Top = 53.692950000000000000
          Height = 30.236240000000000000
          Color = clBlack
          Frame.Typ = [ftLeft]
        end
        object Line3: TfrxLineView
          Top = 83.149660000000000000
          Width = 260.787570000000000000
          Color = clBlack
          Frame.Typ = [ftTop]
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 37.795300000000000000
        Top = 162.519790000000000000
        Width = 245.669450000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object frxDBDataset1Nomi: TfrxMemoView
          Left = 0.881880000000000000
          Top = 11.338590000000000000
          Width = 120.944960000000000000
          Height = 26.456710000000000000
          DataField = 'Nomi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Nomi"]')
          ParentFont = False
        end
        object frxDBDataset1Miqdor: TfrxMemoView
          Left = 120.944960000000000000
          Top = 11.338590000000000000
          Width = 120.944960000000000000
          Height = 26.456710000000000000
          DataField = 'Miqdor'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Miqdor"]')
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        Height = 56.692950000000000000
        Top = 260.787570000000000000
        Width = 245.669450000000000000
        object Date: TfrxMemoView
          Left = 91.606370000000000000
          Top = 6.559060000000000000
          Width = 151.181200000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[Date]')
          ParentFont = False
        end
        object Time: TfrxMemoView
          Left = 91.606370000000000000
          Top = 33.015770000000000000
          Width = 151.181200000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[Time]')
          ParentFont = False
        end
      end
      object Memo4: TfrxMemoView
        Left = 71.811070000000000000
        Top = -25.456710000000000000
        Width = 102.047310000000000000
        Height = 41.574830000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -24
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haCenter
        Memo.UTF8W = (
          #1041#1102#1088#1090#1084#1072)
        ParentFont = False
        VAlign = vaCenter
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = DataModule2.ADOQueryOshpaz
    BCDToCurrency = False
    Left = 488
    Top = 468
  end
  object frxDBDataset2: TfrxDBDataset
    UserName = 'frxDBDataset2'
    CloseDataSource = False
    DataSet = DataModule2.ADOQueryVaqtinchasavdo
    BCDToCurrency = False
    Left = 537
    Top = 473
  end
  object frxReport2: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44516.465969259300000000
    ReportOptions.LastChange = 44516.465969259300000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 536
    Top = 516
    Datasets = <
      item
        DataSet = frxDBDataset2
        DataSetName = 'frxDBDataset2'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      PaperWidth = 85.000000000000000000
      PaperHeight = 140.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 71.811070000000000000
        Top = 18.897650000000000000
        Width = 245.669450000000000000
        object Memo1: TfrxMemoView
          Top = 37.795300000000000000
          Width = 64.252010000000000000
          Height = 34.015770000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1080)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo2: TfrxMemoView
          Left = 64.811070000000000000
          Top = 37.795300000000000000
          Width = 52.913420000000000000
          Height = 34.015770000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1072#1088#1093#1080)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          Left = 117.724490000000000000
          Top = 37.795300000000000000
          Width = 64.252010000000000000
          Height = 34.015770000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1086#1085#1080)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo4: TfrxMemoView
          Left = 181.417440000000000000
          Top = 37.795300000000000000
          Width = 64.252010000000000000
          Height = 34.015770000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1091#1084#1084#1072)
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 37.795300000000000000
        Top = 151.181200000000000000
        Width = 245.669450000000000000
        DataSet = frxDBDataset2
        DataSetName = 'frxDBDataset2'
        RowCount = 0
        object frxDBDataset2Tov_nomi: TfrxMemoView
          Left = 0.559060000000000000
          Width = 64.252010000000000000
          Height = 37.795300000000000000
          DataField = 'Tov_nomi'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Tov_nomi"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2Narxi: TfrxMemoView
          Left = 65.590600000000000000
          Width = 52.913420000000000000
          Height = 37.795300000000000000
          DataField = 'Narxi'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Narxi"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2Miqdor: TfrxMemoView
          Left = 119.504020000000000000
          Width = 60.472480000000000000
          Height = 37.795300000000000000
          DataField = 'Miqdor'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Miqdor"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2Summa: TfrxMemoView
          Left = 180.535560000000000000
          Width = 64.252010000000000000
          Height = 37.795300000000000000
          DataField = 'Summa'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Summa"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        Height = 84.220470000000000000
        Top = 249.448980000000000000
        Width = 245.669450000000000000
        object Memo6: TfrxMemoView
          Left = 0.118120000000000000
          Top = 61.543290000000000000
          Width = 120.944960000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1046#1072#1084#1080' '#1057#1091#1084#1084#1072)
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2JamiSumma: TfrxMemoView
          Left = 123.252010000000000000
          Top = 63.000000000000000000
          Width = 120.944960000000000000
          Height = 18.897650000000000000
          DataField = 'JamiSumma'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -17
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."JamiSumma"]')
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Top = 33.456710000000000000
          Width = 120.944960000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            #1061#1080#1079#1084#1072#1090' '#1053#1072#1088#1093#1080)
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Top = 3.779530000000000000
          Width = 120.944960000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            #1059#1084#1091#1084#1080#1077' '#1057#1091#1084#1084#1072)
          ParentFont = False
        end
        object frxDBDataset2Umsumma: TfrxMemoView
          Left = 123.724490000000000000
          Top = 3.779530000000000000
          Width = 120.944960000000000000
          Height = 22.677180000000000000
          DataField = 'Umsumma'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Umsumma"]')
          ParentFont = False
        end
        object frxDBDataset2Q_X_Narxi: TfrxMemoView
          Left = 123.724490000000000000
          Top = 34.015770000000000000
          Width = 120.944960000000000000
          Height = 22.677180000000000000
          DataField = 'Q_X_Narxi'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -17
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset2."Q_X_Narxi"]')
          ParentFont = False
        end
      end
      object Memo5: TfrxMemoView
        Left = 68.031540000000000000
        Top = -3.779530000000000000
        Width = 109.606370000000000000
        Height = 30.236240000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -24
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haCenter
        Memo.UTF8W = (
          #1061#1080#1089#1086#1073)
        ParentFont = False
        VAlign = vaCenter
      end
    end
  end
  object frxReport3: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44527.622370474500000000
    ReportOptions.LastChange = 44527.622370474500000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 576
    Top = 512
    Datasets = <
      item
        DataSet = frxDBDataset3
        DataSetName = 'frxDBDataset3'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 57.500000000000000000
      PaperHeight = 150.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 117.283550000000000000
        Top = 18.897650000000000000
        Width = 141.732375000000000000
        object Time: TfrxMemoView
          Left = 67.929190000000000000
          Top = 68.031540000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '[Time]')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = -4.574830000000000000
          Top = 68.031540000000000000
          Width = 64.252010000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Vaqt')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = -28.677180000000000000
          Top = 90.826840000000000000
          Width = 52.913371180000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1080)
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 25.000000000000000000
          Top = 90.826840000000000000
          Width = 34.015770000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1086#1085#1080)
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Left = 60.354360000000000000
          Top = 90.826840000000000000
          Width = 37.795300000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1072#1088#1093#1080)
          ParentFont = False
        end
        object Date: TfrxMemoView
          Left = 71.708720000000000000
          Top = 37.795300000000000000
          Width = 75.590600000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '[Date]')
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = -4.574830000000000000
          Top = 37.795300000000000000
          Width = 64.252010000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Sana')
          ParentFont = False
        end
        object Memo1: TfrxMemoView
          Left = 97.047310000000000000
          Top = 90.708720000000000000
          Width = 41.574803150000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            'C'#1091#1084#1084#1072)
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 29.456710000000000000
          Top = 2.338590000000000000
          Width = 56.692950000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1061#1080#1089#1086#1073)
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Height = 30.236240000000000000
        ParentFont = False
        Top = 196.535560000000000000
        Width = 141.732375000000000000
        DataSet = frxDBDataset3
        DataSetName = 'frxDBDataset3'
        RowCount = 0
        object frxDBDataset3Tov_nomi: TfrxMemoView
          Left = -30.000000000000000000
          Top = 3.677180000000000000
          Width = 52.913385830000000000
          Height = 18.897650000000000000
          DataField = 'Tov_nomi'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset3."Tov_nomi"]')
          ParentFont = False
        end
        object frxDBDataset3Miqdor: TfrxMemoView
          Left = 24.236240000000000000
          Top = 3.779530000000000000
          Width = 34.015748030000000000
          Height = 18.897650000000000000
          DataField = 'Miqdor'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset3."Miqdor"]')
          ParentFont = False
        end
        object frxDBDataset3Narxi: TfrxMemoView
          Left = 58.252010000000000000
          Top = 3.779530000000000000
          Width = 37.795275590000000000
          Height = 18.897650000000000000
          DataField = 'Narxi'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset3."Narxi"]')
          ParentFont = False
        end
        object frxDBDataset3Summa: TfrxMemoView
          Left = 96.047310000000000000
          Top = 3.779530000000000000
          Width = 41.574803150000000000
          Height = 18.897650000000000000
          DataField = 'Summa'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset3."Summa"]')
          ParentFont = False
        end
      end
      object Footer1: TfrxFooter
        FillType = ftBrush
        Height = 86.929190000000000000
        Top = 249.448980000000000000
        Width = 141.732375000000000000
        object Memo2: TfrxMemoView
          Left = -21.338590000000000000
          Top = 3.779530000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8W = (
            #1059#1084#1091#1084#1080#1081' '#1057#1091#1084#1084#1072)
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Left = -22.338590000000000000
          Top = 33.015770000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8W = (
            #1061#1080#1079#1084#1072#1090' '#1053#1072#1088#1093#1080)
          ParentFont = False
        end
        object Memo9: TfrxMemoView
          Left = -21.795300000000000000
          Top = 64.252010000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8W = (
            #1046#1072#1084#1080' '#1057#1091#1084#1084#1072)
          ParentFont = False
        end
        object frxDBDataset3Umsumma: TfrxMemoView
          Left = 87.267780000000000000
          Top = 3.779530000000000000
          Width = 41.574803150000000000
          Height = 18.897650000000000000
          DataField = 'Umsumma'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Memo.UTF8W = (
            '[frxDBDataset3."Umsumma"]')
        end
        object frxDBDataset3Q_X_Narxi: TfrxMemoView
          Left = 87.267780000000000000
          Top = 34.015770000000000000
          Width = 41.574803150000000000
          Height = 18.897650000000000000
          DataField = 'Q_X_Narxi'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Memo.UTF8W = (
            '[frxDBDataset3."Q_X_Narxi"]')
        end
        object frxDBDataset3JamiSumma: TfrxMemoView
          Left = 87.267780000000000000
          Top = 64.252010000000000000
          Width = 41.574803150000000000
          Height = 18.897650000000000000
          DataField = 'JamiSumma'
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Memo.UTF8W = (
            '[frxDBDataset3."JamiSumma"]')
        end
      end
    end
  end
  object frxDBDataset3: TfrxDBDataset
    UserName = 'frxDBDataset3'
    CloseDataSource = False
    DataSet = DataModule2.ADOQueryVaqtinchasavdo
    BCDToCurrency = False
    Left = 568
    Top = 456
  end
end
